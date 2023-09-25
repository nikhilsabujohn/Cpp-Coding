#include<bits/stdc++.h>
using namespace std;


int main()

{  
    int arr[7] = {2,4,6,5,10,3,14};  
    any_of(arr,arr+6, [](int k){return k%2;})?  
    cout <<"There are elements which exist in the table of 2":  
    cout<<"No elements in the table of 2 exists";  
    return 0;  
} 