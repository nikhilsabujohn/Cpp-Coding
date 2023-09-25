#include<bits/stdc++.h>
using namespace std;


int pairs(vector<int> v,int k)
{
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j]-v[i]==k)
                count++;
        }
    }
    return count;
}

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter size :";
    cin>>n;
    cout<<"enter elements :\n";
    for(int i=0; i<n; i++)
    {
        int x=0;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter diff :";
    int k=0;
    cin>>k;
    int result=pairs(v,k);
    cout<<"result : "<<result<<endl;
    return 0;
}