#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() 
{
queue<int> que;
int q=0,op=0;
cin>>q;
if(q==0)
    return 0;
else
{
    
    for(int i=0;i<q;i++)
    {
        cin>>op;
        if(op==1)
        {
            int c=0;
            cin>>c;
            que.push(c);
        }
        
        if(op==2)
        {
            que.pop();
        }
        
        if(op==3)
        {
            cout<<que.front();
        }
    }
}
    
return 0;
}
    
    
