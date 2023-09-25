#include<bits/stdc++.h>
using namespace std;
//used to find u1 pattern occurance in u in last line
int main()  
{  
    vector<int>u= {1,3,10,3,10,1,3,3,10,7,8,9,1,3,10};  
    vector<int>u1={1,3,10};  
    vector<int>::iterator ti;  
    ti=std::find_end(u.begin(),u.end(),u1.begin(),u1.end());  
    cout<<(ti-u.begin())<<"\n";  
    return 0;  
}   