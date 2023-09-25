#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of vector array";
    cin>>n;
    int a;
    vector<int> numbers;

    cout<<"Number :";
    
    for(int i=0; i<n; i++)
    {   
        cin>>a;
        numbers.push_back(a);
    }


    cout<<"array : \n";
    //use also this dude
    /*for(int i=0; i<numbers.size(); i++)
    {
        cout<<" "<<numbers[i];
    }*/

for(const int i : numbers)
    {
        cout<<i<<" ";
    }

}