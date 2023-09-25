#include <iostream>
#include<string.h>
#include  <bits/stdc++.h>
using namespace std;
int n=0;
void reverse(string str)
{
    for(int i=n;i>=0;i--)
    {   
    //if (str[i]==' ')
   // {
    cout<<str[i];
    //}
    //cout<<str[i];
   // }
    
}
}
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    cout<<s.length()<<"\n";
    n=s.length();
    //cout<<s.getline();
    cout<<"reverse of the string : ";
    reverse(s);
    return 0;
}




