#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "1234567789009975";
    unsigned long long int num = stoull(str);
    cout << "The integer value is: " << num << endl;
    return 0;
}
