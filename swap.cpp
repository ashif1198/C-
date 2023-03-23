#include<iostream>

using namespace std;

class swap{
	 public:
	 	int a,b,temp;
	 	
	 	int result ()
	 	{
	 		temp = a;
	 		a=b;
	 		b=temp;
	 		return a,b;
		 }
}ashif;

int main()
{
	cout<<"Enter two no. :";
	cin >> ashif.a >>ashif.b;
	cout << "Before Swap:" << endl;
	cout << "a = " << ashif.result() << endl << "b = " << ashif.result() << endl;
	cout << "After swap :"<<endl;
	cout << "a = " << ashif.result() << endl;
	cout << "b = " << ashif.result() <<endl;
}
