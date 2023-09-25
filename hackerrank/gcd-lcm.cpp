#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a*b)/__gcd(a, b);
}

// Function to find the LCM of an array of numbers
int lcmArray(vector<int> arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

// Function to find the GCD of an array of numbers
int gcdArray(vector<int> arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = __gcd(result, arr[i]);
    }
    return result;
}

// Function to find the integers between two arrays
int betweenTwoArrays(vector<int> arr1, vector<int> arr2) {
    // Find the LCM of the first array
    int lcm1 = lcmArray(arr1);

    // Find the GCD of the second array
    int gcd2 = gcdArray(arr2);

    int count = 0;

    // Check for all the numbers between LCM and GCD
    for (int i = lcm1; i <= gcd2; i += lcm1) {
        if (gcd2 % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    // Example arrays
    vector<int> arr1 = {2, 4};
    vector<int> arr2 = {16,32,96};

    int count = betweenTwoArrays(arr1, arr2);

    cout << "Total count: " << count << endl;

    return 0;
}
