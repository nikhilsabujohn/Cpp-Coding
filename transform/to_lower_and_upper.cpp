#include<bits/stdc++.h>
using namespace std;
int case_insensitive_match(string s1, string s2) {
   //convert s1 and s2 into lower case strings
   transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   cout << s1 << " " << s2;
   if(s1.compare(s2) == 0)
      return 1; //The strings are same
   return 0; //not matched
}
main() {
   string s1, s2;
   s1 = "Hello WORLD";
   s2 = "heLLO worLD";
   if(case_insensitive_match(s1, s2)) {
      cout << "Strings are same";
   }else{
      cout << "Strings are not same";
   }
}