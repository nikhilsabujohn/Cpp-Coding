#include<iostream>
using namespace std;
int a[5],i;
void Display()
{
    for(int i=0;i<=5;i++)
    {
    cout<<a[i]<<"\n";
    }
}
void sort()
{
    for(int i=0;i<=5;i++)
    {
    if(a[i]>a[i+1])
    {
        int temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
    }
cout<<"\nSorted array :";
Display();

}
int main()
{
    
    cout<<"Enter numbers :";
    for(int i=0;i<5;i++)
    {
    cin>>a[i];
    }
//Display();
sort();
}