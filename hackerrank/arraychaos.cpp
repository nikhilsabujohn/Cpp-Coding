#include<bits\stdc++.h>
using namespace std;


void min(vector<int> n)
{   int count=0;
    for(int i=n.size()-1;i>=0;i--)
    {
        if(n[i]-(i+1)>2)
            cout<<"Too Chaotic";
    for(int j=max(0,n[i]-2);j<i;j++){
        if(n[j]>n[i])
            count++;
            cout<<count<<"\n";

    }
    }
cout<<count;
}


int main()
{
    vector<int> n;
    int size;
    cin >> size;
    int num;
    for (int i = 0; i < size;i++)
    {
        cin>>num;
        n.push_back(num);
    }

    min(n);
}