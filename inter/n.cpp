#include<bits/stdc++.h>
using namespace std;

void printWords(string str)
{

	string word,newword;

	stringstream iss(str);

	while (iss >> word)
	{
		reverse(word.begin(),word.end());
		newword.append(word);
		newword.append(" ");
	}
	cout<<"\n"<<newword;

	 for (int i = 0; i < newword.size(); i++) 
	 {
        if (i % 2 == 1) 
		{
            if (newword[i] <= 'Z' && newword[i] >= 'A')
                newword[i] = (newword[i] - 'A' + 'a');
            else if (newword[i] == ' ')
                newword[i] = '*';
            else if (!(newword[i] <= 'z' && newword[i] >= 'a'))
                newword[i] = ':';
        } 
		else 
		{
            if (newword[i] <= 'z' && newword[i] >= 'a')
                newword[i] = (newword[i] - 'a' + 'A');
            else if (newword[i] == ' ')
                newword[i] = '#';
            else if (!(newword[i] <= 'Z' && newword[i] >= 'A'))
                newword[i] = '@';
        }
	}
	cout<<"\n"<<newword;
}
int main()
{
	string s;
	cout<<"Testing :";
	getline(cin, s);
	printWords(s);
	return 0;
}

