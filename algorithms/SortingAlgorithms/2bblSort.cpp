#include <iostream>

using namespace std;

void swap(int a[], int x, int y)
{
	int t=a[x];
	a[x]=a[y];
	a[y]=t;
}

void bubble(int a[], int n)
{
	int i = n-1;
	while(i > 0)
	{
		if(a[i] < a[i-1])
		{
			swap(a,i,i-1);
		}
		i = i-1;
	}
}

void bblSort(int a[], int n)
{
	int i= 0;
	while(i < n-1)
	{
		bubble(a,n);
		i = i+1;
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