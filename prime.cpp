#include<iostream>

using namespace std;

class prime{
	public:
		int n;
	void input()
	{
		cin >> n;	
	}	
	int p()
	{
		int i,count = 0;
		for(i=1;i<=n/2;i++)
		{
			if ( n % i == 0)
			{
				count ++;
			}
		}
		if (count == 1)
		{
			cout << "Its a Prime no.";
		}
		else
		{
			cout << "Its not a prime no.";
		}
	}
};


int main()
{
	prime n1;
	cout << "Enter the no.:";
	n1.input();
	n1.p();
	
}
