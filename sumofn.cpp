#include<iostream>

using namespace std;

class Sum{
	
	public :
		int i,n,sum=0;
		
		int SumCal()
		{
			for(i=1;i<=n;i++)
			{
				sum  =  sum + i;
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
