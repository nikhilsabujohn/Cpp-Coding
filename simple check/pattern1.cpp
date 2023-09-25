#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    cout<<"Enter limit :";
    cin>>n;
    b=n;
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<=b;k++)
        {
        cout<<" ";
        }
        b--;
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}