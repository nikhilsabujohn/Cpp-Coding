
#include<bits\stdc++.h>

using namespace std;
int main()
{ 
    string para;
  

  vector<string> paragraph;
  vector<string> paragraph2;
  int n=paragraph.size(); 

  cout<<"Enter paragraph :";
  getline(cin, para);
  paragraph.push_back(para);

  for(int i=0; i<paragraph.size(); i++)
  {
    cout<<paragraph[i];
  }


}