#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	vector<int>a;
	cout<<"Enter the Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	cout<<"ARRAY IS:"<<endl;
	for(int i:a)
	{
		cout<<i<<" ";
	}
	
	set<int>val;
	for(int i:a)
	{
		val.insert(i);
	}
	cout<<"\nNumber of Distinct value  = "<<val.size();
}
