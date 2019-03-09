#include<iostream>
#define n 5
using namespace std;

int front=-1;
int rear=-1;

int q[n];

int isEmpty()
{
//if((front%n)==(rear+1)%n)
if(front==-1)
	return 1;

else
	return 0;
}

int isFull()
{
	if((rear+1)%n==front)
	return 1;
	else
	return 0;
}

void Dequeue()
{
	if(isEmpty()==1)
	cout<<"Empty";
	
	else if(isEmpty()==2)
	cout<<"Underflow";
	
	else
	{
	cout<<q[front]<<" will be deleted";
	front=(front+1)%n;
	if(front==(rear+1)%n)
	{
		front=-1;
		rear=-1;
	}

	for(int i=front;i!=rear;i=(i+1)%n)
	cout<<q[i]<<" ";
	if(front!=-1) cout<<q[rear];
	}

	
}

void Enqueue()
{
	
	

	if(isFull())
	cout<<"Q is full";
	

	else
	{
		if(rear==-1)
		front=0;

		int e;
		cin>>e;
		rear=(rear+1)%n;
		q[rear]=e;

		for(int i=front;i!=rear;i=(i+1)%n)
		cout<<q[i]<<" ";
		if(front!=-1) 
		cout<<q[rear];


		cout<<endl;
	}

}	
int main()
{
	
	int i;
	cout<<" 1 for Inserting \n 2 for Deleting \n"<<endl;

	while(1)
	{
//cout<<" 1 for Inserting \n 2 for Deleting \n"<<endl;
	cin>>i;
	switch(i)
	{
		case 1:{Enqueue();break;}
		case 2:{Dequeue();break;}

	}

	}


return 0;


}
	

