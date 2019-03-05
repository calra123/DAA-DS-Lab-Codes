#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*int min(int a, int b)
{
	if(a<b)
	return a;
	else
	return b;
}*/

struct s{
	float ratio;
	int cost;
	int wt;
};

int main() {

	int mwt;
	cin>>mwt;

	int n;
	cin>>n;
	
	s carry[n];
	
	for(int i=0;i<n;i++)
	{	cin>>carry[i].cost>>carry[i].wt;
		carry[i].ratio=(float)carry[i].cost/carry[i].wt;
	}
	
	int mini=carry[0].ratio;
	for(int i=0;i<n;i++)                        //sorting using selection sort (on the basis of ratio)
	{
		mini=i;
		
		for(int j=i+1;j<n;j++)
		{
			if(carry[mini].ratio>carry[j].ratio)
			mini=j;
		}
		
		s temp=carry[i];
		carry[i]=carry[mini];
		carry[mini]=temp;
	}
	
	int j=n-1;
	int take=0;
	
	float profit=0;
	while(j>=0 && take<mwt)                   //selecting items, making greedy choices
	{	
	  int	yo=min(carry[j].wt,mwt-take);      //whole or fractional depending on the remaning capacity(max weight-items taken)
    
		take+=yo;                              //adding max price/ratio items
		
		profit+=(float)(carry[j].cost*yo)/(float)carry[j].wt;   //calc profit !!! fractional profit
		
		//cout<<take<<" "<<profit<<endl;
		
		j--;
	}

	
	for(int i=0;i<n;i++)
	cout<<carry[i].ratio<<" "<<carry[i].cost<<" "<<carry[i].wt<<endl;
	
	cout<<take<<" "<<profit;
	
	
	
	// your code goes here
	return 0;
}
