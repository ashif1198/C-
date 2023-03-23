#include<iostream>
#include <bits/stdc++.h>
using namespace std ;

class Amstrong{
	
	public:
		int n;
		int AAM()
	{
		int m = n,temp,result;
		while (n != 0)
		{
			temp = n % 10;
			result += pow(temp,3);
			n = n / 10;
		}
		
		if (m == result)
		{
			cout << "Entered No. is Amstrong";
		}
		else
		{
			cout << "Entered no. is not a Amstrong";
		}
	}
	
	
};


int main()
{
	Amstrong a;
	cout << "Enter the no.:";
	cin >> a.n;
	a.AAM();
}
