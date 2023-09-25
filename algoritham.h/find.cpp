#include<bits/stdc++.h>
using namespace std;

/*int main()
{ 
   vector <int> a={2,4,6,8};
   vector <int>::iterator ti;
    ti=find(a.begin(),a.end(),8);
    int n=distance(a.begin(),ti);
    cout<<"index="<<n;

}*/

int main()

{ 
vector <char> a={'n','i','k','l','o','p'};
   vector <char>::iterator ti;
    ti=find(a.begin(),a.end(),'z');

    cout<<"index="<<distance(a.begin(),ti);

}