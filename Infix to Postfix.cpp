#include <iostream>
#include<bits/stdc++.h>

using namespace std;


stack<int>s;

int open(char a)
{
	if(a=='('||a=='{'||a=='[')
	return 1;
	
	else
	return 0;
}

int close(char a)
{
	if(a==')'||a=='}'||a==']')
	return 1;
	
	else
	return 0;
}
int sign(char a)
{
	if(a=='^')
	return 1;
	else if(a=='*' || a=='/')
	return 2;
	else if(a=='+'|| a=='-')
	return 3;
	
	else
	return 0;
}
int symbol(char a)
{
	int c=a-'0';
	if(c>=0 && c<=9)
	return 1;
	
	else
	return 0;
}


int main() {
	
	
	string str;
	cin>>str;
	

	int len=str.size();
	
	
	//cout<<endl<<len;
	
	//	cout<<str;
		
	char output[len];
	int k=0;
	
	for(int i=0;i<len;i++)
	{
		if(open(str[i]))
		{
			s.push(str[i]);
		}
		else if(close(str[i]))
		{
			char key=str[i];
			while(!open(s.top()))               //till stack's top is not an open bracket
			{
				if(sign(s.top()))
				{
					output[k++]=s.top();
				}
				s.pop();
				
			}
			s.pop();                          //popping the open bracket
		}
		
		else if(symbol(str[i]))
		{
			output[k++]=str[i];
		}
		else if(sign(str[i]))
		{
			while(sign(str[i])>=sign(s.top()) && !open(s.top()))        //if a smaller priority sign then output/pop higher and equal priority
			{
				output[k++]=s.top();
				s.pop();
			}
			s.push(str[i]);
		}
	}
	
	for(int i=0;i<k;i++)
	cout<<output[i]<<" ";
	
	
	
	// your code goes here
	return 0;
}
