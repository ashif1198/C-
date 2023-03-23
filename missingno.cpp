#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the value:"<<endl;
	cin>>n;
	int sum=0,input;
	for(int i=0;i<n-1;i++)
	{
		cin>>input;
		sum += input;
	}
	cout<<"Result = "<<(n*(n+1))/2-sum;
}
