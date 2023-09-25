#include<bits/stdc++.h>
using namespace std;

/*int main()
{ 
   vector <int> a={2,4,6,8};
   int b[]={4,6};
   vector <int>::iterator ti;
    ti=find_first_of(a.begin(),a.end(),begin(b),end(b));
    int n=distance(a.begin(),ti);
    cout<<"index="<<n;

}*/

int main()

{ 
vector <char> a={'N','i','k','n','o','p'};
char b[]={'n'};
   vector <char>::iterator ti;
    ti=find_first_of(a.begin(),a.end(),begin(b),end(b),case_sensitive_match);

    cout<<"index="<<distance(a.begin(),ti);

}