#include<bits/stdc++.h>
using namespace std;


int printarray(vector<int>&a)
{
	int i;
	cout<<"\nAfter the Selection Sort:\n";
	for(int i:a)
		cout<<i<<" ";
}
int insertionsort(vector<int>&a,int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(key<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = key;
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
	
	
	insertionsort(a,n);
}
