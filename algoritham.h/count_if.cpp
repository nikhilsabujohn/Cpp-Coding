#include<bits/stdc++.h>
using namespace std;

int main()

{ 
    int a[]={1,2,3,4,5,6,7,8,9};
    int b=count_if(begin(a),end(a),[](int k){return(k%2==0);});
    cout<<b;

}