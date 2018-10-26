#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,n,j,swap;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp=arr[0];
	for(j=0;j<n;j++)
	{
		for(i=1;i<n;i++)
		{
			if(temp>arr[i])
			{
				swap=temp;
				temp=arr[i];
				arr[i]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
