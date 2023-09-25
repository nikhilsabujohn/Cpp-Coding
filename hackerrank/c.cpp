#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) 
{
    int hh=stoi(s.substr(0,2));
    int l=s.length();
    
    if(s[l-2]=='A')
    {
        if(hh==12)
        {
            string newh="00";
            newh.append(s.substr(0,2));
            return newh;
            
        }
        else
            return s.substr(0,6);
    }

}

int main()
{


    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";


    return 0;
}
