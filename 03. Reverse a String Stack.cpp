#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverses(stack<char> s){
	
	while(!s.empty())
	{
	cout<<s.top();
	s.pop();
	}
}

int main() {
	
	stack <char> s;
	
	char c;
	
	string str;
	cin>>str;
	int len1=str.size();
	for(int i=0;i<len1;i++)
	{
		c=str[i];
		s.push(c);
	}
	
	int len= s.size();
	
	reverses(s);
	//cout<<len;
	// your code goes here
	return 0;
}
