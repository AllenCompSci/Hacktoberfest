//Basics of some string function at C++

#include<iostream>
using namespace std;

int main(){

	char a[] = {'a','b','\0'};
	cout<<a<<endl;
	//output-- ab 
	//without \0 


	char b[] = "Hello World";
	cout<<b <<endl;
	//output-- Hello World

	
	// Take Input 
	char words[100];
	cin>>words;
	cout<<words<<endl;

	
	//Sentence Read till the deleminator
	cin.getline(words,100,'x');
	//prints the words of the line till it encounter x 
	cout<<words<<endl;


	return 0;	
}