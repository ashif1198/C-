#include<iostream>

using namespace std;

class complex{
	
	public:
		float real;
		float imag;
		
		void input()
		{
			cout << "Enter the real and imaginery no. :";
			cin >> real;
			cin >> imag;
		}
		
		complex operator - (complex c2)
		{ 
		    complex temp;
		    temp.real = real - c2.real;
		    temp.imag = imag - c2.imag;
		    
		    return temp;
		}
		
		void output()
		{
			if (imag <= 0 )
			{
				cout <<"Output Complex number: "<< real << imag << "i";
			}
			else
			{
				cout << "Output Complex number: " << real << "+" << imag << "i";
			}
		}
};

int main()
{
	complex c1,c2,result;
	
	cout << "Enter the first complex no."<<endl;
	c1.input();
	cout << "Enter the seconde complex no. :"<<endl;
	c2.input();
	
	result = c1 - c2;
	
	result.output();	
}
