//RECURSION-LEXICOGRAPHICAL ORDER LIKE DICTIONARY --> 01 ,1 ,10 ,2 ,20 ,3 ,30 ,4 ,45 ,55......

#include <bits/stdc++.h>
using namespace std;
	
//call to my compare function

bool compare(string s1,string s2){

	if(s1[0]<s2[0]){

		return s1<s2;   ///desc order return 
}
	else{
		return s1<s2;   	
	}
}

int main(){
	string s[1000];
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){

	//Under cstring header file
	//create any integer to string
  
	      stringstream ss;
        	      ss<<i;
        	     string str;
        	     ss>>str;

 	     s[i]=str;
	}
	
	//Inbuilt sort function

	sort(s,s+n+1,compare);

	for(int i=0;i<=n;i++){
		cout<<s[i]<<" ";
	}
 
 return 0;
}