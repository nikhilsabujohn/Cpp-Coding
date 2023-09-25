#include<bits/stdc++.h>
using namespace std;


int main()

{ 
    int a[]={1,2,3,4,5,6,7,8,9};
    int b[9];
    copy(a,end(a)-1,b);
    
    for(int i=0;i<9;i++)
    cout<<b[i];

}