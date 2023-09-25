#include <bits/stdc++.h>
using namespace std;
int main() 
{
int n,b;
cin>>n;
  
  if(n<=50)
  {
    b=n*5;
  }
   else if(n<=150)
  {
    b=(50*5)+(n-50)*7;
  }
     else if(n<=250)
  {
    b=(50*5)+
      (100*7)+
      (n-150)*9;
  }
  
       else if(n>250)
  {
    b=(50*5)+
      (100*7)+
      (100*9)+
      (n-250)*12;
  }
  
  cout<<b;
  
return 0;
}