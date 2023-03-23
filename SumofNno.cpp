#include<iostream>

using namespace std;

class Sum{
	
	public :
		int i,j,n,sum=0;
		
		int SumCal()
		{
			cout << "Enter the values :" <<endl;
			for(i=1;i<=n;i++)
			{
				cin >> j;
				sum  =  sum + j;
			}
			return sum;
		}
};

int main()
{
	Sum S;
	cout << "enter the value of n :" << endl;
	cin >> S.n;
	cout << "Sum = " << S.SumCal();
}
