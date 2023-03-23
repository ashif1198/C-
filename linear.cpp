#include<bits/stdc++.h>
using namespace std;
int linear(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			return i;
		}
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter the no. of element:"<<endl;
	cin>>n;
	cout<<"Enter the value 0 and 1"<<endl;
	int a[n];
	for (int i=0;i<n;i<i++)
	{
		cin>>a[i];
	}
	int k;
	cout<<"Enter the value which I want to find in array:"<<endl;
	cin>>k;
	
	int ans =linear(a,n,k);
	if(ans)
	{
		cout<<"ELEMENT INDEX IS "<<ans+1;
	}
	else
	{
		cout<<"ELEMENT NOT FOUND"<<endl;
	}
}
