#include<iostream>

using namespace std;

class Fact{
	public:
		int F(int n)
		{
		if (n>=1)
		{
			return n * F(n-1);
		}
		else
		{
			return 1;
		}
		}
	
};

int main()
{
	Fact A;
	int n;
	cout << "Enter the No.:";
	cin >> n;
	cout << "Factorial = "<<A.F(n);
}
