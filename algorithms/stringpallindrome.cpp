#include<bits/stdc++.h>
using namespace std;
int  main()
{   int ctr=0;
	string s1;
	cin>>s1;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=s1[i+1])
		ctr++;
	}
	ctr=ctr+1;
	long p=ctr;
	long long n= 2*((p*(p-1))/2);
	cout<<n<<endl;
}
