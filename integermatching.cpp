#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r1,r2;
	cout<<"r1 and r2"<<endl;
	cin>>r1>>r2;
	int c;
	for(int i=r1;i<=r2;i++)
	{
		if((i%11)!=0 && (i%111) !=0 )
		{
			c++;
		}
	}
	cout<<"Result = "<<c;
}
