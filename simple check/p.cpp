#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limit;
    string s;
    cout<<"Enter limit :";
    cin>>limit;
    cout<<"Enter letter :";
    cin>>s;
    string t;
    for(int i=0;i<=limit;i++)
    {
         cout<<t;
         cout<<"\n";
        // t= s+t;
        t.append(s);
         
    }
    int l;
    l=t.length();
    for(int i=limit;i>=0;i--)
    {        
        cout<<t;
        cout<<"\n";
        t.erase(i);    
    }
    cout<<"\n"; 
}