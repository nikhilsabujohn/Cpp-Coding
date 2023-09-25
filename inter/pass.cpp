#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"\n Enter Password:";
    cin >> s;

    int valid = 1;

    if (s.size() < 8)
        valid = 0;
    if (!(s[0] <= 'Z' && s[0] >= 'A'))
        valid = 0;

    int num = 0, symbol = 0;

    for (auto x: s) {
        if (x <= '9' && x >= '0')
            num = 1;
        if (x == '@' || x == '$' || x == '%' || x == '&')
            symbol = 1;
    }

    if (num == 0 || symbol == 0)
        valid = 0;

    if (valid)
        cout << "\n True";
    else
        cout << "\n False";
}