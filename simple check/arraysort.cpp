#include<iostream>
using namespace std;
int sort(int a[]);
 int sort(int a[10])
    {
        for(int i=0; i<10; i++)
    {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
    
    }
    return a[10];


    }
int main()
{
    int a[10];
    cout<<"enter the numbers";
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
     for(int i=0; i<10; i++)
    {
    cout<<a[i];
    }
    for(int i=0; i<10; i++)
    {
       sort(a);
    }
    cout<<"\n sorted array";
    for(int i=0; i<10; i++)
    {
    cout<<a[i];
    }
    
    
}
