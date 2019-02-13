#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	stack<int> s;
	
	
	
	int max1=-1;
	int max2=-1;
	int n;
	cin>>n;
	
	int num;
	
	for(int i=0;i<n;i++)
	{
		cin>>num;
		s.push(num);
		
	}
	
	max1=-1;
	while(!s.empty())				//runs until the stack is empty
	{
		if(s.top()>=max1)			//is true when top element is greater than max1
		{
			max2=max1;				//the previous becomes the new 2nd max
			max1=s.top();
			
		//	cout<<max1<<" , ";
			
		}
		
		if(s.top()<max1 && s.top()>max2)		//if the top element is greater than
												// 2nd maximum
			max2=s.top();
		
		s.pop();
		
	}
	
	cout<<"2nd Maximum is : "<<max2<<"\n1st Maximum is: "<<max1;
	
	cout<<endl;
	// your code goes here
	return 0;
}
