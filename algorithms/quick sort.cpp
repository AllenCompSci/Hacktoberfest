#include<iostream>
using namespace std;
void swap1(int *a,int *b)
{

    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int part(int arr[],int l,int h)
{
    int temp;
int pivot=arr[h];
int i=l-1;
for(int j=l;j<=h-1;j++)
{
if(arr[j]<=pivot)
{
i++;
swap1(&arr[i],&arr[j]);
}}
swap1(&arr[i+1],&arr[h]);
return(i+1);}
void quick(int arr[],int l,int h)
{
if(l<h)
{
int p1=part(arr,l,h);
quick(arr,l,p1-1);
quick(arr,p1+1,h);
}}
int main()
{
int arr[10];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
quick(arr,0,n-1);
for(int i=0;i<n;i++)
{

    cout<<arr[i]<<"\t";
}
}
