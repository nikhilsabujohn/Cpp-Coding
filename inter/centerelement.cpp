#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"\n Enter the size of array:";
    cin >> n;

    int a[n];
    cout<<"\n Enter array elements:";
    for (auto &x: a)
        cin >> x;

    sort(a, a + n);
    int ans;

    if (n % 2)
        ans = a[n / 2];
    else
        ans = (a[n / 2 - 1] + a[n / 2 - 1]) / 2;

    cout << "\n Center Element is:"<< ans << endl;
}