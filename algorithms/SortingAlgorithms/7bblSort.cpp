#include <iostream>

using namespace std;

void bblSort(int a[], int n)
{
	int j= 0;
	int i;
	int t;
	while(j < n-1)
	{
		//bubble(a,n);
		i = n-1;
		while(i > j)
		{
			if(a[i] < a[i-1])
			{
				//swap(a,i,i-1);
				t=a[i];
				a[i]=a[i-1];
				a[i-1]=t;
			}
			i = i-1;
		}
		j = j+1;
	}
}

void show(int a[], int n)
{
	int i = 0;
	while(i < n)
	{
		cout << a[i] << ", ";
		i = i+1;
	}
	cout << endl;
}

int main()
{
	int arr[] = {22,66,44,27,967,34,2,90,4567,21,75,9,44};

	show(arr, sizeof(arr)/sizeof(int));
	bblSort(arr, sizeof(arr)/sizeof(int));
	show(arr, sizeof(arr)/sizeof(int));
	
	return 0;
}