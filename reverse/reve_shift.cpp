#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    string str,a;
    cout<<"enter a string :";
    getline(cin,str);
    stringstream b(str);
    while(b>>a)
    { 
        cout<<a;

    }
 }