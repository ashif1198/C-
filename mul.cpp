#include<iostream>

using namespace std ;

class multiply{
	
	public:
		float n1;
		float n2;
		
		float mul()
		{
			return n1 * n2;
		}
};

int main()
{
	multiply m;
	cout << "Enter two no. for multiplication :" << endl;
	cin >> m.n1 >>m.n2;
	cout << "RESULT = " << m.mul();
}
