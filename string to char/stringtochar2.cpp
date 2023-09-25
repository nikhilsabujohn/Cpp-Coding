#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a=0,b=0;
    cout<<"Enter    a number: ";
    getline(cin,s);
    for(auto i:s)
        if(i=='#') 
            a++;
        else if(i=='*')
            b++;

    if(a>b)
        cout<<"Positive number";
    else if(a<b)
        cout<<"Positive number";
    else
        cout<<0;

}