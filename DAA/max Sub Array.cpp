#include<iostream>
using namespace std;

int crossing(int *arr,int s,int e,int mid)
{
	int clmax,clsum,crmax,crsum;

	clmax=clsum=arr[mid];
	for(int i=mid-1;i>=s;i--)
	{
		clsum+=arr[i];
		if(clsum>clmax)
		{
			clmax=clsum;
		}
	}

	crmax=crsum=arr[mid+1];
	for(int i=mid+2;i<=e;i++)
	{
		crsum+=arr[i];
		if(crsum>crmax)
		{
			crmax=crsum;
		}
	}
	
	return crmax+clmax;	


}

int sub(int s,int e,int *arr)
{

	if(s>=e)
	return arr[s];

	int mid=(s+e)/2;
	

	int lsum=sub(0,mid,arr);
	int rsum=sub(mid+1,e,arr);
	
	int crosum=crossing(arr,s,e,mid);

	return (max(lsum,max(rsum,crosum)));

}


int main()

{

	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
	cin>>arr[i];

	int val=sub(0,n-1,arr);

	cout<<val<<endl;

return 0;
}

