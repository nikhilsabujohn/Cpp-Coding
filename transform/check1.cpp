#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cout<<"Enter string :";
    getline(cin,n);
    transform(n.begin(),n.end(),n.begin(),::toupper);

    cout<<n;
    return 0;

}