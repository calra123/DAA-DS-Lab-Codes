#include<iostream>
int arr[100];
using namespace std;
int n;

void recBub(int i,int a,int b)
{

	
	int temp;
	if(b==n-i)
	return ;
	if(arr[a]>arr[b])
	{
		temp=arr[a];
		arr[a]=arr[b];
		arr[b]=temp;
	}

	for(int k=0;k<n;k++)
	cout<<arr[k]<<" ";
	cout<<endl;
	recBub(i,a+1,b+1);


	
}




int main()
{

	
	cin>>n;

	
	for(int i=0;i<n;i++)
	cin>>arr[i];

	for(int i=0;i<n-1;i++)
	{

	 recBub(i,0,1);

	}

	

}
