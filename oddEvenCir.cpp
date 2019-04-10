#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int> s;

int q[1000];
int front=-1;
int rear=-1;

int n;

void insert()
{

	if(front==(rear+1)%n)
	{
		cout<<"Overflow\n";
		return;
	}
	
	if(front==-1 )
	{
		front=0;
	}

	
	
		rear++;
		int e;
		cout<<"Enter element\n";
		cin>>e;
		rear=rear%n;
		q[rear]=e;
	
}

void del()
{
	if(front==-1)
	{
		cout<<"Overflow\n";
	}
	else
	{
		front++;
		if(front==(rear+1)%n)
		{
			front=-1;rear=-1;
		}
	}
}

void display()
{
	for(int i=front; i!=rear;i=(i+1)%n)
	{
		cout<<q[i]<<" ";
	}

	if(front!=-1)
	cout<<q[rear];
}

void odd()
{
	int arr[n];
	int count=0;
	int counto=0;
	for(int i=front; i!=rear;i=(i+1)%n)
	{
		
		if(q[i]%2)
		arr[counto++]=q[i];
		
		else
		{
			s.push(q[i]);
		}
		
		count++;
		
	}
	
	if(q[rear]%2)
		arr[counto++]=q[rear];
		
		else
		{
			s.push(q[rear]);
		}
		
		count++;
	

	while(!s.empty())
	{
		arr[counto++]=s.top();
		s.pop();
	}
		

	for(int i=0;i<counto;i++)
	cout<<arr[i]<<" ";


}

void toExit()
{
	exit(1);
}

int main()
{

	//int n;
	cin>>n;

while(1)
 {

	cout<<"\n1--insert\n2--delete\n3--display\n4---ODD/EVE\n5---exit\n";
	int c;
	cin>>c;

	switch(c)
	{
		case 1:{insert();break;}
		case 2:{del();break;}
		case 3:{display();break;}
		case 4:{odd();break;}
		case 5:{toExit();break;}
	}
 }


		
		
				


}
