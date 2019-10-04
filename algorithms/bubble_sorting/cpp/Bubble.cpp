#include <iostream>
#define parr(arr,s) for(int i=0;i<s;cout<<arr[i++]<<" ");cout<<endl;
#define sarr(arr,s) for(int i=0;i<s;cin>>arr[i++]);

using namespace std;

void bubble(int arr[],int n){
	for(int i=0;i<n-1;i++){
	int flag=0;
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			swap(&arr[j],&arr[j+1]); 
			flag=1;
		} 
	}
	if(flag==0) break;
	}		
}

int main(){
	int arr[5];
	sarr(arr,5);

	bubble(arr,5);

	parr(arr,5);
}