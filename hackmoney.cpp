#include<bits/stdc++.h>

using namespace std;
bool hack(int n, int c)
{
	if(c==n)
	{
		return true;
	}
	else if(c>n)
	{
		return false;
	}
	else
	{
		return hack(n,c*10) || hack(n,c*20);
	}
}
int main()
{
	int n,c;
	cout<<"Enter the money YOu Want to Hack"<<endl;
	cin >> n;
	c = 1;
	int ans = hack(n,c);
	if(ans)
	{
		cout <<"\nPOSSIBLE"<<endl;
	}
	else
	{
		cout<<"\nNOT POSSIBLE"<<endl;
	}
}
