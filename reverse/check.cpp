#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    cout<<"Testing :";
    getline(cin, str);
    str.insert(str.end(),' ');
    n=str.size();
    for(int i=0; i<=n; i++)
    {
    if(str[i]==' ')
    {
    reverse(str.begin(), str.begin()+6);
    reverse(str.begin()+6, str.end());
    }
    }
    cout << str;
}
