
#include <iostream>
using namespace std; 
int evensplit( int a);
int evensplit(int a)
{
    if(a%2==0)
    { 
        cout<<a<<" ";
    }
    return 0;

}
int main()
{
    int n; 
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<n;i++)
    {
   
        evensplit(i);
        evensplit(n-i);
        cout<<"\n";
     
    }
}

    
