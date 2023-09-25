#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
define max 1000;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size,i,
    cin>>size;
    int a[size];  
    for(i=0;i<size;i++)
        cin>>a[i];
    for(i=size;i>=0;i--)
        cout<<a[i];
    return 0;
}
