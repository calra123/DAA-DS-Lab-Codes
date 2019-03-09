#include<iostream>
using namespace  std;

int main()
{

	int n,m;		//no of rows and columns
	cin>>n>>m;

	int addr=2000;		//base address 
	int size=2;		//size assumed to be taken by an integer

int arr[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)	//array input in 2d matrix
		cin>>arr[i][j];
	}

for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<arr[i][j]<<" ";

cout<<endl;
	}



int num=(n*(n+1))/2;				//no of elements in upper triangular

int row[num];					// 1D array for row major

int col[num];					//1D array for col major

int k=0;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i<=j)			//condition for upper triangular
		{
			row[k++]=arr[i][j];	//storing the elemnts
		}
	}
}

k=0;

for(int j=0;j<m;j++)
{
	for(int i=0;i<n;i++)
	{
		if(i<=j)
		{
			col[k++]=arr[i][j];
		}
	}
}

	
int a,b;
cout<<"Enter index :\n";
cin>>a>>b;							//index we want to locate

int count=-1;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i<=j)
		{
			
			count++;			//calculating the index based on the condition

			if(i==a && j==b)		//breaking when i and j is equal to the index of the given element
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
		if(i<=j)
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
cout<<row[count]<<endl;

cout<<"Address is ";
cout<<2000+count*2<<endl;

for(int i=0;i<num;i++)
cout<<row[i]<<" ";	
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

