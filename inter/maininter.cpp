#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cout<<"\n Enter String:";
    getline(cin, s);
    string t = "";

    // step 1;
    stack < char > st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ')
            st.push(s[i]);
        else {
            while (st.size() > 0) {
                t += st.top();
                st.pop();
            }
            t += ' ';
        }
    }
    while (st.size() > 0) {
        t += st.top();
        st.pop();
    }

    // step 2, 3, 4;
    for (int i = 0; i < t.size(); i++) {
        if (i % 2 == 1) {
            if (t[i] <= 'Z' && t[i] >= 'A')
                t[i] = (t[i] - 'A' + 'a');
            else if (t[i] == ' ')
                t[i] = '*';
            else if (!(t[i] <= 'z' && t[i] >= 'a'))
                t[i] = ':';
        } else {
            if (t[i] <= 'z' && t[i] >= 'a')
                t[i] = (t[i] - 'a' + 'A');
            else if (t[i] == ' ')
                t[i] = '#';
            else if (!(t[i] <= 'Z' && t[i] >= 'A'))
                t[i] = '@';
        }
    }
    cout<<"\n Modified String:";
    cout << t;
    cout<<endl;
}