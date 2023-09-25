#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    int out;
    cout<<"Enter a numbers :";
    cin>>a;
    cin>>b;
    cout<<"\n 1.ADD\n 2.SUB\n 3.MUl\n 4.DIV\nEnter your choice :";
    cin>>choice;
    switch (choice)
    {
    case 1:out=a+b;
        cout<<"\nSum :"<<out;
        break;
    case 2:out=a-b;
        cout<<"\nDifference :"<<out;
        break;    
    case 3:out=a*b;
        cout<<"\nProduct :"<<out;
        break;
    case 4:out=a/b;
        cout<<"\nOut :"<<out;
        break;
    default:
        cout<<"Wrong option";
        break;
    }
return 0;
}