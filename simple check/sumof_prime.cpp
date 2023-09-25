#include <iostream>
using namespace std;
int pri_sum(int);
int main()
{
    int i,number;
    cout <<"Enter the number :";
    cin >> number;
    int flag=0;
    for(i=2; i<=number/2; i++)
    {
    if (pri_sum(i)==1)
    {
        if (pri_sum(number-i)==1)
        {
            cout<<number<<"\t can be expressed in\t"<<i<<"\t+\t"<<number-i<<endl;
            flag=1;
        }
    }
    }
    if(flag==0)
    {
         cout<<number<<"\t cannot be expressed in prime sum";
    }
}


int pri_sum(int pass)
{
    int i,isPrime=1;
    for(i=2; i<=pass/2; i++)
    {
        if(pass%i==0)
        {
            isPrime=0;
        }
    }
return isPrime;
}