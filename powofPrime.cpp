#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p;
	cout<<"\nENTER THE VALUE OF N & P\n";
	cin>>n>>p;
	int x=0;
	while(n)
	{
		n=n/p;
		x=x+n;
	}
	cout<<"\nLARGEST POWER OF PRIME"<<endl;
	cout<<x;
}
