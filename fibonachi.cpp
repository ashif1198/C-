#include<iostream>

using namespace std;

class Fib{
	public :
		int n1 = 1 ,n2 = 1 ,newterm,n;
		int i;
		int fibonachi ()
		{
			cout << "FIBONACHI SERIES :"<<endl;
			for(i=0;i<n;i++)
			{
				if (i == 0)
				{
					cout << n1<<",";
					continue;
				}
				if (i==1)
				{
					cout << n2 ;
					continue;
				}
					newterm = n1 + n2;
					n1 = n2;
					n2 = newterm;
					
					cout <<"," <<6 newterm;
			}
		}
};

int main()
{
	Fib f;
	cout <<"Enter the limit of Fibonachi :"<<endl;
	cin >> f.n;
	f.fibonachi();
}
