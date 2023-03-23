#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,k,count=0;
	cout<<"Enter the value of n,m,k"<<endl;
	cin>>n>>m>>k;
	
	int a[n],b[m];
	
	cout<<"Enter the desired apartment size of each applicant."<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the size of each apartment Avalaible"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(((a[j]-b[i]<=k) && (a[j]-b[i])>=-k) && b[i]!=-1)
			{
				count++;
				b[i]=-1;
				break;
			}
		}
	}
	
	cout<<count<<endl;
}
