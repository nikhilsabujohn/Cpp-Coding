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
string b;
a.pop_back();
reverse(a.begin(),a.end());
cout<<a[0];
display(a);
}




int main()
{   
    string a;
    vector<string> v;
    vector<string>::iterator it;


    cout<<"Enter string :";
    cin>> a;
    v.push_back(a);

    display(v);

    cout<<"reversed :";

    reversed(v);
}