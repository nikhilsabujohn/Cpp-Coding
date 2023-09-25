#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,6,8,9,0};
    int *b=adjacent_find(begin(a), end(a));
    cout<<*b;

}