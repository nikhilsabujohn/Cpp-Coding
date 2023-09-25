#include<iostream>
using namespace std;
int main()
{
    string n;
    int lim;
    cout<<"Enter a symbol :";
    cin>>n;
    cout<<"Enter Limit :";
    cin>>lim;
    for(int i=1; i<=lim; i++)
    {
        for(int j=1; j<=i; j++)
        {
        cout<<n;
        }
        cout<<"\n";
    }

}