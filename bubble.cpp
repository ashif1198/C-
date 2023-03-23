#include<bits/stdc++.h>
using namespace std;

int printarray(vector<int>&a)
{
	int i;
	cout<<"\nAfter the Selection Sort:\n";
	for(int i:a)
		cout<<i<<" ";
}

int bubblesort(vector<int>&a, int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1] )
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
	}
	printarray(a);
}

int main()
{
	int n,t;
	cout <<"Enter the no. of array:\n";
	cin>>n;
	vector<int>a;
	int i;
	
	cout<<"Enter the element of array:\n";
	for(i=0;i<n;i++)
	{
		cin>>t;
		a.push_back(t);
	}
	
	cout<<"\nBefore the Selection Sort:\n";
	for(int i:a)
		cout<<i<<" ";
	
	
	bubblesort(a,n);
}
