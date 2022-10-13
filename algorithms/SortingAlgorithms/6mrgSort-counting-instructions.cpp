#include <iostream>
#include <cstdlib>

using namespace std;

int count = 0;

void combine(int a[], int s, int m, int e)
{
	::count++; // count next line
	int *buffer = new int [e+1];
	
	::count++; // count next line
	int k = s;
	::count++; // count next line
	while(k <= e)
	{
		::count++; // count next line
		buffer[k] = a[k];
		::count++; // count next line
		k = k + 1;
		::count++; // count while condition test
	}
	
	::count++; // count next line
	int i = s;
	::count++; // count next line
	int j = m+1;
	::count++; // count next line
	k = s;
	::count++; // count next line
	while(i <= m && j <= e)
	{
		::count++; // count next line
		if(buffer[i] <= buffer[j])
		{
			::count++; // count next line
			a[k] = buffer[i];
			::count++; // count next line
			i = i + 1;
		}
		else
		{
			::count++; // count next line
			a[k] = buffer[j];
			::count++; // count next line
			j = j + 1;
		}
		::count++; // count next line
		k = k + 1;
		::count++; // count while condition test
	}
	::count++; // count next line
	while(i <= m)
	{
		::count++; // count next line
		a[k] = buffer[i];
		::count++; // count next line
		i = i + 1;
		::count++; // count next line
		k = k + 1;
		::count++; // count while condition test 
	}
	::count++; // count next line
	while(j <= e)
	{
		::count++; // count next line
		a[k] = buffer[j];
		::count++; // count next line
		j = j + 1;
		::count++; // count next line
		k = k + 1;
		::count++; // count while condition test 
	}
	
	::count++; // count next line
	delete[] buffer;
}

void mrgSort(int a[], int s, int e)
{
	::count++; // count next line
	if (s >= e)
	{
		::count++; // count next line
		return;
	}
	::count++; // count next line
	int m = (s+e)/2;
	mrgSort(a, s, m);  // it has its own count
	mrgSort(a, m+1, e);  // it has its own count
	combine(a,s,m,e);  // it has its own count
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

void fillArray(int a[], int n)
{
	int i = 0;
	while(i < n)
	{
		a[i] = rand()%99999+rand()%99;
		i = i+1;
	}
	cout << endl;
}

int main()
{
	::count = 0 ; // global variable
	
	int arr[100000];
	int arrSize = sizeof(arr)/sizeof(int);
	fillArray(arr, arrSize);

	//show(arr, arrSize);
	mrgSort(arr, arrSize);
	//show(arr, arrSize);

	cout << "Steps taken during sorting are " << ::count << endl;
	
	return 0;
}