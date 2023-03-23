#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s,e,c;
	int n;
	cout<<"\nEnter the no. of element\n";
	cin>>n;
	
	int a[n];
	cout << "Enter the element in array"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	c=0;
	for(s=0,e=n-1;s<=e;)
	{
		if(a[s]==a[e])
		{
			s++;
			e--;
		}
		else if(a[s]>a[e])
		{
			e--;
			a[e] += a[e+1] ;
			c++;	
		}
		else
		{
			s++;
			a[s]+=a[s-1];
			c++;
			
		}
	}
	cout<<"COUNT OF MINIMUM OPERATION IS "<<c;
	
	
}
