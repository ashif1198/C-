#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the Length:"<<endl;
	cin>>n;
	int i,j,k=1;
	cout<<"OUTPUT"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<k++;
		}
		cout<<endl;
		j=0;
	}
	int l=n,m;
	for(i=0;i<n;i++)
	{
		m=k-l;
		k=k-l;
		l--;
		for(j=i;j<n;j++)
		{
			cout<<m++;
		}
		cout<<endl;
	}
}
