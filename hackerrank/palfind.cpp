#include<bits\stdc++.h>
using namespace std;

int palindromeIndex(string s) 
{   
    int c=0;
    string n=s;
    vector<int> v;
    reverse(n.begin(),n.end());

    if(n==s)
        return -1;
    else
        {

        for(int i=0;i<4;i++)
        {
           n=s;
           n.erase(i,1);
           cout<<n<<"\n";
           string m=n;
           reverse(m.begin(),m.end());
           if(m==n)
                c=i;

        }
        }
return c;
}

int main(){
    cout<<"Enter String :";
    string s;
    getline(cin,s);
    int c=palindromeIndex(s);
    cout<<c<<endl;
}