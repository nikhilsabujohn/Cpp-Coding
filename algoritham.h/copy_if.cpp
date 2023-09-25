#include<bits/stdc++.h>
using namespace std;


int main()

{ 
   vector <int> a={1,2,3,4,5,6,7,8,9};
   vector <int> b(a.size());
    auto count=copy_if(begin(a),end(a),begin(b),[](int k){return k%2==0;});

    b.resize(distance(b.begin(),count));
    for(auto i:b)
    cout<<i;

}