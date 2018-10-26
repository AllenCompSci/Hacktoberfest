#include<iostream>
using namespace std;
#define ll long long int
long long int c=0LL;
void merge(long long int ar[],long long int start,long long int mid,long long int end)
{
   
    long long int temp[end-start+1];
    ll k=0;
    ll p=start,q=mid+1;
    for(ll i=start;i<=end;i++)
    {
        if(p>mid)
        temp[k++]=ar[q++];
        else if(q>end)
        temp[k++]=ar[p++];
        else if(ar[p]<=ar[q])
        temp[k++]=ar[p++];
        else if(ar[p]>ar[q])
        {
        //cout<<p<<" "<<q<<endl;  
        
        long long int rem=mid-p+1;
      //  cout<<rem<<endl;
        c=c+rem;
        temp[k++]=ar[q++];
        
        }
    }
    for(ll z=0;z<k;z++)
    {
        ar[start++]=temp[z];
    }
}
void merge_sort(ll ar[],ll start,ll end)
{
    if(start<end)
    {
        ll mid=(start+end)/2;
        merge_sort(ar,start,mid);
        merge_sort(ar,mid+1,end);
        merge(ar,start,mid,end);
    }
}
int main()
{
    ll n;
    cin>>n;
    ll ar[n+1];
    for(ll i=1;i<=n;i++)
    cin>>ar[i];
    merge_sort(ar,1,n);
    //for(int i=1;i<=n;i++)
    //cout<<ar[i]<<" ";
    cout<<c<<endl;
}