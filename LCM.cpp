#include<iostream>

using namespace std;

class GCD{
	public:
		int n1,n2,i,R,L,LCM;
		
		int HCF()
		{
			if (n1 > n2)
			{
				L = n1;
			}
			else
			{
				L = n2;
			}
			for(i=1 ; i<L;i++)
			{
				if (n1 % i == 0 && n2 % i == 0)
				{
					R = i;
				}
			}
			LCM = (n1 * n2)/R;
			return LCM;
		}
};

int main()
{
	GCD g;
	cout << "enter two no.:"<<endl;
	cin >> g.n1 >> g.n2;
	cout << "LCM = "<<g.HCF();
	
}
