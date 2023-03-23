#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of array "<<endl;
	cin>>n;
	int even=1,odd=1;
	int a[n];
	a[0]=1;
	a[1]=1;
	
	for(int i=2;i<n;i++)
	{
		if(i%2==0)
		{
			a[i]= even * 2;
			even = a[i];
		}
		else
		{
			a[i] = odd * 3;
			odd = a[i];
		}
	}
	cout<<"\nSERIES IS:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	int k;
	cout<<"\nNth position:"<<endl;
	cin>>k;
	cout<<"Value = ";
	cout<<a[k];
}
