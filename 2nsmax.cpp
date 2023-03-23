#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cout<<"\n ENTER THE SIZE OF ARRAY\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max =0,smax=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
	}
	cout<<"\n2nd Largest element is = "<<smax;
}
