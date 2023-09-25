#include <iostream>
using namespace std; 
int oddsplit( int a);
int oddsplit(int a)
{
    if(a%2==1)
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
        oddsplit(i);
        oddsplit(n-i);
        cout<<"\n";
        
     
    }
}

    
