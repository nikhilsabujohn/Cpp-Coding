#include <algorithm>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main() {  
  vector<int> v = { 3,1,2,1,2 };  
  
  replace(v.begin(), v.end(), 1, 10);  
  
  for_each(v.begin(), v.end(),  
    [](int x) { cout << x << ","; });  
      
    return 0;  
}  