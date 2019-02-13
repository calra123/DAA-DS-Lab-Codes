#include<iostream>
using namespace std;

int top=-1;
void display(int *stack)
{
    cout<<"The elements are:\n";
    for(int i=top;i>=0;i--)
    cout<<stack[i]<<endl;
}

int peak(int *stack)
{
    if(top<0)
    cout<<"No more elemets \n";
    else
    cout<<stack[top]<<endl;
}

int empty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

int Full(int size)
{
    if(top==size-1)
    return 1;
    else 
    return 0;
}
int push(int *stack, int size)
{
    if(Full(size))
    {cout<<"\n OOps Overflow \n";}
    else
    {
        int e;
        cin>>e;
        top++;
        stack[top]=e;
        
        display(stack);
    }
    
}

int pop(int *stack)
{
    if(empty())
    {cout<<"\n OOps Underflow \n";}
    else
    {
        cout<<stack[top]<<"will be deleted \n";
        top=top-1;
    
    display(stack);
    }
    
    
return 0;
}
        
    
int main()
{


cout<<"Enter the size\n";
int size;
cin>>size;
int flag=0;
int stack[size];
    
   while(1)
   {
        cout<<"Press\n 1 to Add \n 2 to Delete\n 3 to peak \n 4 to exit\n";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:{ push(stack,size);break;}
            case 2:{ pop(stack); break;}
            case 3:{ peak(stack); break; }
            case 4:{flag=1; break;}
            
        }
        
        if(flag==1)
        {
            flag=0;
            break;
            
        }
          
    
    
    }
    
    return 0;
}
