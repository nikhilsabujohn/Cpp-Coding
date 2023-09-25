#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string n,temp;
    int lim;
    cout<<"Enter a symbol :";
    cin>>n;
    cout<<"Enter Limit :";
    cin>>lim;
    temp=n;
    for(int i=0; i<lim; i++)
    {
        cout<<temp<<"\n";
        temp.append(n);
    }

}