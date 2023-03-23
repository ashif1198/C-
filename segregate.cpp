#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"enter the length of array;"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the value 0 and 1"<<endl;
	for (int i=0;i<n;i<i++)
	{
		cin>>a[i];
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == 0)
		{
			c++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i<c)
		{
			a[i]=0;
		}
		else
		{
			a[i]=1;
		}
	
	}
	cout<<"SEGREGATE 0 AND 1"<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
}
