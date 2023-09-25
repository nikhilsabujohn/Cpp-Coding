#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) 
{
int count1=0,count2=0,count3=0;
int n=arr.size();
cout<<n<<"\n";
for(int i=0;i<sizeof(arr);i++)
{
    if(arr[i]>0)
        count1++;
    else if(arr[i]<0)
        count2++;
    else
        count3++;     
}
if (count1>0)
    cout<<count1;
if(count2>0)
    cout<<count2;
if(count3>0)
    cout<<count3;

}

int main()
{   
    int n,a;
    cout<<"enter size :";
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a;
       arr.push_back(a);
    }

    plusMinus(arr);
}