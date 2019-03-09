#include<iostream>
using namespace  std;

int main()
{

	int n,m;
	cin>>n>>m;

	int addr=2000;
	int size=2;

int arr[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>arr[i][j];
	}

for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<arr[i][j]<<" ";

cout<<endl;
	}



int num=n+2*(n-1);

int rowSpan[num];

int col[num];

int k=0;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(abs(j-i)<=1)
		{
			rowSpan[k++]=arr[i][j];
		}
	}
}

k=0;

for(int j=0;j<m;j++)
{
	for(int i=0;i<n;i++)
	{
		if(abs(j-i)<=1)
		{
			col[k++]=arr[i][j];
		}
	}
}

	
int a,b;
cout<<"Enter index :\n";
cin>>a>>b;

int count=-1;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(abs(j-i)<=1)
		{
			
			count++;

			if(i==a && j==b)
			goto here;
		}
	}
}

here:
int count1=-1;

for(int j=0;j<n;j++)
{
	for(int i=0;i<n;i++)
	{
		if(abs(j-i)<=1)
		{
			count1++;
			if(i==a && j==b)
			goto y;
		}
	}
}
y:
cout<<"Row-major"<<endl;

cout<<"The element is ";
cout<<rowSpan[count]<<endl;

cout<<"Address is ";
cout<<2000+count*2<<endl;

for(int i=0;i<num;i++)
cout<<rowSpan[i]<<" ";	
cout<<endl;

cout<<"COl-major"<<endl;
cout<<"The element is ";
cout<<col[count1]<<endl;

cout<<"Address is ";
cout<<2000+count1*2<<endl;


for(int i=0;i<num;i++)
cout<<col[i]<<" ";	
	
return 0;

}

