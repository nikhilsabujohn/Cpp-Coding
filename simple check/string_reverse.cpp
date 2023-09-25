#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    v.push_back(str);
    cout<<v.size();

    for(int i=v.size();i>=0;i--)
    {
        cout<<v[i];
    }
}