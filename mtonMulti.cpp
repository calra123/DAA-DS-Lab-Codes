#include<iostream>
using namespace std;

int main()
{

	cout<<"Enter a number\n";
	int n;
	cin>>n;
	cout<<"Enter the second number\n";
	int m;
	cin>>m;

	int temp=m;
	
	int count=0;
	int flag=0;

	if(m%n==0)
	{
		int rem=m/n;
		
		while(rem!=1)
		{
			if(rem%2==0)
			{
				rem=rem/2;
				count++;
			}
			else if(rem%3==0)
			{
			
				rem=rem/3;
				count++;
			}
			
			else
			{
				cout<<"NOt possible\n";
				flag=1;
				count=-1;
				break;
			}
		}
	}

	else
	{

		cout<<"Not possible\n";
	}
cout<<"No of steps ";
cout<<count<<endl;


}

