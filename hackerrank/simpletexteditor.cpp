#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() 
{
stack<string> stk;
string s;
int op=0,it=0;
cin>>it;
for(int i=0;i<it;i++)
{
    cin>>op;
    if(op==1)
    {
        string newh;
        cin>>newh;
        stk.push(s);
        s+=newh;
    }
    if(op==2)
    {
        int del;
        cin>>del;
        stk.push(s);
        s.erase(s.end()-del,s.end());
    }
    if(op==3)
    {   
        int loc;
        cin>>loc;
        cout<<s[loc-1]<<endl;
    }
    if(op==4)
    {
        s=stk.top();
        stk.pop();
    }
}
}