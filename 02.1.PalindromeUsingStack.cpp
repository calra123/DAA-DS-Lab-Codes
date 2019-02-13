#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	
	string str;
	cin>>str;
	
	stack <char> s2;
	stack <char> s1;
	
	int len=str.size();
	char c;
	
	for(int i=0;i<len;i++)
	{
		c=str[i];
		s1.push(c);
	}
	
	for(int i=0;i<len/2;i++)
	{
		c=s1.top();
		
		s2.push(c);
		
		s1.pop();
	}
		int flag=0;
	
	if(len%2)
	s1.pop();
	
	char ch;
	while(!s1.empty())
	{
	
		c=s1.top();
		ch=s2.top();
		
		if(c==ch)
		{
			s1.pop();
			s2.pop();
			
		}
		
		else
		{
			flag=1;
			break;
		}
		
		
		
	}
	
	if(flag)
	{
		cout<<"NOT a palindrome";
	}
	else
	cout<<"IS a Palindrome";
	
	
	
	


	// your code goes here
	return 0;
}
