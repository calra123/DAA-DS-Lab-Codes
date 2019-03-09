#include<iostream>
#define n 5
using namespace std;

int front=-1;
int rear=-1;

int q[n];

int isEmpty()
{
if(front ==-1 )

	return 1;
else if(front>rear)
	return 2;
else
	return 0;
}

int isFull()
{
	if(rear==n-1)
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
	front=front+1;
	for(int i=front;i<=rear;i++)
	cout<<q[i]<<" ";
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
		rear=rear+1;
		q[rear]=e;

		for(int i=front;i<=rear;i++)
		cout<<q[i]<<" ";


		cout<<endl;
	}

}	
int main()
{
	cout<<" 1 for Inserting \n 2 for Deleting \n"<<endl;
	int i;
	

	while(1)
	{
	cin>>i;
	switch(i)
	{
		case 1:{Enqueue();break;}
		case 2:{Dequeue();break;}

	}

	}


return 0;


}
	
