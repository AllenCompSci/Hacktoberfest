#include <iostream>

using namespace std;

void swap(int a[], int x, int y)
{
	int t=a[x];
	a[x]=a[y];
	a[y]=t;
}

int locOfSmallest(int a[], int s, int e)
{
	int i = s;
	int j = i;
	while(i <= e)
	{
		if(a[i] < a[j])
		{
			j = i;
		}
		i = i+1;
	}
	return j;
}

void selSort(int a[], int n)
{
	int i= 0;
	while(i < n-1)
	{
		int j = locOfSmallest(a,i,n-1);
		swap(a, i, j);
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
	selSort(arr, sizeof(arr)/sizeof(int));
	show(arr, sizeof(arr)/sizeof(int));
	
	return 0;
}