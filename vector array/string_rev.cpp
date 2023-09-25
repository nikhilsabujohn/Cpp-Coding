#include<bits\stdc++.h>
using namespace std;
void display(string a[]);

void display(vector<string> a)
{
    for(const auto i:a)
    {
        cout << i;
    }
}


void reversed(vector<string> a)
{
reverse(a.begin(),a.end());
display(a);
}




int main()
{   
    string a;
    vector<string> v;
    vector<string>::iterator it;


    cout<<"Enter string :";
    getline(cin,a);
    v.push_back(a);
    cout<<v.size();

    cout<<"reversed :";

    reversed(v);
}