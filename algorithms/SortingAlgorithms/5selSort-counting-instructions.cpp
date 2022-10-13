#include <iostream>
#include <cstdlib>

using namespace std;

int count = 0;

void swap(int a[], int x, int y)
{
	::count++; // count next line
	int t=a[x];
	::count++; // count next line
	a[x]=a[y];
	::count++; // count next line
	a[y]=t;
}

int locOfSmallest(int a[], int s, int e)
{
	::count++; // count next line
	int i = s;
	::count++; // count next line
	int j = i;
	::count++; // count next line
	while(i <= e)
	{
		::count++; // count next line
		if(a[i] < a[j])
		{
			::count++; // count next line
			j = i;
		}
		::count++; // count next line
		i = i+1;
		::count++; // count while condition test 
	}
	::count++; // count next line
	return j;
}

void selSort(int a[], int n)
{
	::count++; // count next line
	int i= 0;
	::count++; // count next line
	while(i < n-1)
	{
		::count++; // count next line
		int j = locOfSmallest(a,i,n-1);
		swap(a, i, j); // it has its own count
		::count++; // count next line
		i = i+1;
		::count++; // count while condition test 
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

void fillArray(int a[], int n)
{
	int i = 0;
	while(i < n)
	{
		a[i] = rand()%99999+rand()%99;
		i = i+1;
	}
}

int main()
{
	::count = 0 ; // global variable
	
	int arr[100000]; 
	fillArray(arr, sizeof(arr)/sizeof(int));

	//show(arr, sizeof(arr)/sizeof(int));
	selSort(arr, sizeof(arr)/sizeof(int));
	//show(arr, sizeof(arr)/sizeof(int));
	
	cout << "Steps taken during sorting are " << ::count << endl;
	
	return 0;
}