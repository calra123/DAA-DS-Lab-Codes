//Stack as a Linked Structure

#include<iostream>
using namespace  std;

struct node
{
	int data;
	node *next;
};

node *top=NULL;
void toDisplay()
{
	node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}

void toInsert()
{
	

	node *z = new node;
	cin>>z->data;
	if(top==NULL)
	{
		top=z;
		z->next=NULL;
		toDisplay();
		return;
	}	
	
	
	
	z->next=top;
	
	
	

	
	top=z;

	toDisplay();
	
	
	
}

void toDelete()
{
	if(top==NULL)
	{	cout<<"Underflow\n";
		return;

	}
	
	
	node *temp;
	temp=top;
	top=top->next;
	temp->next=NULL;
	delete(temp);
	
	toDisplay();

}

void toPeek()
{
}


int main()
{
	

	while(1)
	{
		cout<<"\n1--insert\n2--delete\n3--display\n4---peek\n5---exit\n";
		int x;
		cin>>x;
		switch(x)
		{
			case 1:{toInsert();break;}
			case 2:{toDelete();break;}
			
			case 3:{toDisplay();break;}
			case 4:{toPeek();break;}
			case 5:{exit(1);break;}
		}
	}

}
									

