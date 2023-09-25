#include<iostream>
using namespace std;
int main()
{
    int input,reminder=0,reverse=0,number;
    cout <<"Enter the input : ";
    cin >>input;
    number=input;
    while (input!=0)
    {
        reminder =input%10;
        reverse = reverse*10+reminder;
    input /=10;
    }
    if (number==reverse)
    {
        cout << number <<"\tis pallindrome";
    }
    else{
        cout << number <<"\tis not pallindrome";
    }

}