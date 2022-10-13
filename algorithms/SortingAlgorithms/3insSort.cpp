#include <iostream>

using namespace std;

void insertIth(int a[], int n, int i)
{
	int key = a[i];
	int j = i-1;
	while(j >= 0 && a[j] > key)
	{
		a[j+1] = a[j];
		j = j-1;
	}
	a[j+1] = key;
}

void insSort(int a[], int n)
{
	int i = 1; // second element
	while(i < n)
	{
		insertIth(a,n,i);
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
	int arrSize = sizeof(arr)/sizeof(int);

	show(arr, arrSize);
	insSort(arr, arrSize);
	show(arr, arrSize);
	
	return 0;
}