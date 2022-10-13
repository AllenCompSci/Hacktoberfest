#include <iostream>

using namespace std;

void combine(int a[], int s, int m, int e)
{
	int *buffer = new int [e+1];
	
	int k = s;
	while(k <= e)
	{
		buffer[k] = a[k];
		k = k + 1;
	}
	
	int i = s;
	int j = m+1;
	k = s;
	while(i <= m && j <= e)
	{
		if(buffer[i] <= buffer[j])
		{
			a[k] = buffer[i];
			i = i + 1;
		}
		else
		{
			a[k] = buffer[j];
			j = j + 1;
		}
		k = k + 1;
	}
	while(i <= m)
	{
		a[k] = buffer[i];
		i = i + 1;
		k = k + 1;
	}
	while(j <= e)
	{
		a[k] = buffer[j];
		j = j + 1;
		k = k + 1;
	}
	
	delete[] buffer;
}

void mrgSort(int a[], int s, int e)
{
	if (s == e)
	{
		return;
	}
	int m = (s+e)/2;
	mrgSort(a, s, m);
	mrgSort(a, m+1, e);
	combine(a,s,m,e);
}

void mrgSort(int a[], int n)
{
	mrgSort(a,0,n-1);
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
	int arrSize = sizeof(arr)/sizeof(int);

	show(arr, arrSize);
	mrgSort(arr, arrSize);
	show(arr, arrSize);
	
	return 0;
}