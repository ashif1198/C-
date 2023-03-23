#include<bits/stdc++.h>
using namespace std;

void rightrot(int a[],int n,int k)
{
	int b[n],i;
	for(i=0;i<n;i++)
	{
		b[(i+k)%n] = a[i];
	}
	
	for(i=0;i<n;i++)
  		cout<<b[i]<<" ";
}

int leftrot(int a[],int n,int k)
{
	int d[n],i,j=0;
	for(i=k;i<n;i++)
	{
		d[j++] = a[i];
	}
	for(i=0;i<k;i++)
	{
		d[j++] = a[i];
	}
	for(i=0;i<n;i++)
  		cout<<d[i]<<" ";
}



int main()
{
	int n,k,i;
	cout << "Enter the no. of n & k \n";
	cin >>n>>k;
	int a[n];
	cout<<"Enter the value of array a[]:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(1)
	{
		int ch;
		cout<<"\n1.LeftRotation 2.Rightrotation \n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				leftrot(a,n,k);
				break;
			case 2:
				rightrot(a,n,k);
				break;
			case 3:
				exit(0);
				break;
					
		}
	}
	
}
