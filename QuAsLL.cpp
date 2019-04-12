#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *front=NULL;
node *rear=NULL;


void display()
{
	node *temp=front;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
	
		temp=temp->next;
	}

}

void toDelete()
{
	if(front==NULL)
	{
		cout<<"Underflow\n";
		return;
	}		

	node * temp;
	temp=front;
	if(front==rear)
	{
		rear=NULL;
	}
	front=front->next;
	delete(temp);
	
	display();
}
void toInsert()
{
	node *z= new node;
	
	cout<<"Enter data\n";
	cin>>z->data;
	
	z->next=NULL;

	if(rear==NULL)
	{
		front=z;
		rear=z;
		return;
	}
	
	node *temp=front;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=z;
	rear=z;

	display();
	
}
	
	




int main()
{
    while(1)
    {
        int x;
        cout<<"\n\n\nChoose"<<endl;
        cout<<"1. Insert an element"<<endl;
        cout<<"2. Delete an element"<<endl;
	cout<<"3. Display all elements"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>x;
        switch(x)
        {


        case 1: toInsert();break;
        case 2: toDelete();break;
	case 3: display();break;
        case 4: exit(1);break;


        }

    }

return 0;

}


