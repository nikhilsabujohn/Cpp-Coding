#include <algorithm>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main() {  
  vector<string> v;
  string a="nikhil";
  v.push_back(a);
  
  replace(v.begin(), v.end(),"i",1 );  
}