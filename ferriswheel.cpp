#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	cout<<"Enter childrens weight"<<endl;
	
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	int sum = 0,c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum = a[i] + a[j];
			if(sum <= x)
			{
				c++;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<c;
}
