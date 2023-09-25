#include<bits\stdc++.h>
using namespace std;

void check(string str)
{
    stringstream ss(str);
    string word,n;
    while(ss >> word)
    {
        reverse(word.begin(), word.end());
        n.append(word);
        n.append(" ");
    }
    cout << n<<"\n";

    for(int i = 0; i < n.length(); i++)
    {
        if(i%2== 1)
        {
            if(n[i]<='Z' && n[i]>='A')
                n[i] = (n[i]-'A'+'a');
            else if(n[i]==' ' )
                n[i] ='*';
            else if(!(n[i]<='z' && n[i]>='a'))
                n[i] = ':';
        }
        else
        {
            if(n[i]<='z' && n[i]>='a')
                n[i] = (n[i]-'a'+'A');
            else if(n[i]==' ' )
                n[i] ='#';
            else if(!(n[i]<='Z' && n[i]>='A'))
                n[i] = '@'; 
        }
    }
    cout << n<<"\n";
}


int main()
{
    string str;
    cout<<"Enter string :";
    getline(cin,str);
    check(str);
    return 0;
    
}