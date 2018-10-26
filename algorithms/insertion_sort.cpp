#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int temp,swap1,j,i;
    for(i=1;i<n;i++)
		{
			temp=arr[i];
			j=i-1;
			while(j>=0 &&arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j=j-1;

            }
            arr[j+1]=temp;

		}

	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}

}
int main()
{
int arr[20],i,n,j,swap1,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    insertion(arr,n);

}
