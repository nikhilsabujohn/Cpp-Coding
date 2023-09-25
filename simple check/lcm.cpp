#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={16,32};
int a=NULL;
for(int i=0;i<2;i++)
{
int a=(a*arr[i])/(__gcd(a,arr[i]));
}
   cout<<a;
}