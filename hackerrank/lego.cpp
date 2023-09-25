#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'legoBlocks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int legoBlocks(int n, int m) {

    const int mod = 1000000007;

    long rows[m+1];
    long allWalls[m+1];
    long solidWalls[m+1];
    
    memset(rows, 0, sizeof(rows));
    memset(allWalls, 0, sizeof(allWalls));
    memset(solidWalls, 0, sizeof(solidWalls));
    
    for (int i=1; i<=m; i++) {

        if (i<=4) 
        {
            rows[i] = pow(2, i-1);
        } 
        else 
        {
            rows[i] = (rows[i-1] + rows[i-2] +
                       rows[i-3] + rows[i-4]) % mod;
        }
        

        allWalls[i] = 1;
        for (int j=1; j<=n; j++) 
        {
            allWalls[i] *= rows[i];
            allWalls[i] %= mod;
        }
        solidWalls[i] = allWalls[i];
    }
    

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=i; j++) {
            solidWalls[i] += mod - (solidWalls[j] * allWalls[i-j]);
            solidWalls[i] %= mod;
        }
    }

    return solidWalls[m];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = legoBlocks(n, m);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
