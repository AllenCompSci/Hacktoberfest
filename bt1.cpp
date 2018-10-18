#include<iostream>
#include<cstring>
#include<vector>
#include<conio.h>
using namespace std;

vector<string> result;

void backtrack(string s, int i)
{
	if(i==s.length())
	{
		result.push_back(s);
		return ;	
	}
	backtrack(s, i+1);
	if(isupper(s[i]))
		s[i] = tolower(s[i]);
	else
		s[i] = toupper(s[i]);
	backtrack(s, i+1);
}

int main()
{
	string s;
	int count=0;
	cin>>s;
	backtrack(s,0);
	for(vector<string>::const_iterator i = result.begin(); i!=result.end();++i)
	{
		cout<<*i<<endl;
		count++;	
	}
	cout<<endl<<count;
	getch();
}
