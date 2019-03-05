//To select maximum number of activities (jobs) [Not maximum duration]
#include <iostream>
#include<string>
using namespace std;

struct activity
{
	int stime;
	int etime;
	string aname;
} ;


int main() {
	
	int n;
	cin>>n;
	activity a[n];
	
	activity temp;
	
	for(int i=0;i<n;i++)
	cin>>a[i].aname>>a[i].stime>>a[i].etime;
	
	
	for(int i=0;i<n;i++)                  //Sorting using selection sort (on the basis of end time)
	{
		int	min=i;
		int	j=i+1;
		while(j<n)
		{
			if(a[j].etime<a[min].etime)
			min=j;
			
			j++;
		}
		
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
  
	int count=1;                          //Event ending first is selected by default
	int last_ac=0;
	cout<<a[last_ac].aname<<" ";
	for(int i=1;i<n;i++)
	{
		if(a[last_ac].etime<=a[i].stime)    //Checking for clashes
		{
			count++;
			last_ac=i;                         //Storing index of last selected activity to check clashes with further ones
			cout<<a[i].aname<<" ";
		}
	}
	cout<<endl<<count<<endl;                //Number of activities selected
	for(int i=0;i<n;i++)
	cout<<a[i].aname<<" "<<a[i].stime<<" "<<a[i].etime<<endl;

	return 0;
}
