#include <bits\stdc++.h>
using namespace std;
void validate(string str);

void getpass()
{   
    string str;
    cout<<"Enter passphrase: ";
    getline(cin,str);
    validate(str);

}


void validate(string str)
{   
    int num=0,sym=0;
    for(auto x:str)
    {
        if(x<='9' && x>='0')
            num++;
        else if(x=='@'||x=='#'||x=='$'||x=='%'||x=='&')
            sym++;
    }
    
    if(str.size()<8)
    {
        cout<<"Size is shorter than expected \n";
        getpass();
    }
    else if(!(str[0]<='Z' && str[0]>='A'))
    {
        cout<<"Passphrase must start with an capital alphabetic\n";
        getpass();
    }
    else if(num==0)
    {
        cout<<"Passphrase must contain one digit or more \n";
        getpass();
    }
    else if(sym==0)
    {
        cout<<"Passphrase must contain one special symbol \n";
        getpass();
    }
    else
        cout<<"Success";
}
int main()
{
    getpass();
    return 0;

    
}