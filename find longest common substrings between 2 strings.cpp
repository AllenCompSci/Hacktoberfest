//TRY EXAMPLE OF STRINGS AS "LCLC"  AND  "CLCL"

#include <bits/stdc++.h>
using namespace std;

//using DP we done this
//bottom up is good than top down

void seeAndCall(string &s1,string s2){

	int len1=s1.size();	int len2=s2.size();
	int max=INT_MIN;//initilaze with min of c++ value

	//we could also write string result[1000] = "\0" also initilaize with null value in string array
	string result[1000]="";	  //this is way to initilaize array of result with empty values.

	int match[50][50];
	int k=0;

	for(int i=0;i<len1;i++){

		for(int j=0;j<len2;j++){

			if(s1[i]==s2[j]){

				if(i==0||j==0)	match[i][j]=1;

			else	match[i][j]= match[i-1][j-1] + 1;

			if(max<match[i][j]){
				k=0;	
				max=match[i][j];

				result[k] = s1.substr(i-max+1,i+1);
				//k++;	//NO need of this

			}
		if(match[i][j]==max){
			k=1;
			result[k]=s1.substr(i-max+1,i+1);
			//k++;	//no need for this also
		}	

			}

			else match[i][j]=0;
		}

	}	
	for(int i=0;i<k+1;i++)
		cout<<result[i]<<endl;
}

int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;

	seeAndCall(s1,s2);

	return 0;
}
