#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while(i < s.size())
    {
        if(s[i] == s[i+1])
        {
            s.erase(i, 2);
            i=0;
        }
        else i++;
    }
    if(s == "") s = "Empty String";
    cout << s;
    return 0;
}