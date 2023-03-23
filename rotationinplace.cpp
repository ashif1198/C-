#include<iostream>
using namespace std;

int gcd(int a,int b)
{
 if(b==0)
  return a;
 else
  return gcd(b, a%b);
}

int rotationinplace(int a[],int n,int k)
{
	int temp,i,j,d;
	for(i=0;i<gcd(n,k);i++)
	{
		temp = a[i];
		j=i;
		while(1)
		{
			d = (j+k) % n;
			if(d==i)
			{
				break;
			}
			a[j] = a[d];
			j=d;
		}
		a[j] = temp;
	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout <<a[i]<< " ";
	}
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
	
	rotationinplace(a,n,k);
	display(a,n);
}

