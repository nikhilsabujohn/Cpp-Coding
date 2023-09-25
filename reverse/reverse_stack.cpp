#include <bits/stdc++.h>
using namespace std;

void revword(string arg)
{
    stack<char>st;


    for(int i=0; i<arg.length(); i++)
    {
        if(arg[i] !=' ')
        {
            st.push(arg[i]); 
        }
        else
        {   while(st.empty()==false)
            {
            cout<<st.top();
            st.pop();
            }
            cout<<" ";
        }

    }

	while (st.empty() == false) {
		cout << st.top();
		st.pop();
	}
}



int main()
{
 string a;
 cout<<"enter string :";
 getline(cin,a);
 revword(a);
 return 0;
 cout<<a;
}