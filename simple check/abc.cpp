#include<iostream>
using namespace std;
int main()
{
    char n='A';
    int lim;
    for(int i=1; i<=26; i++)
    {
        for(int j=1; j<=i; j++)
        {
        
        cout<<((char)(j+64));
        
        }
        cout<<"\n";
    }

}