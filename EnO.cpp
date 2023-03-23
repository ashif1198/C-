#include<iostream>

using namespace std;

class check{
	
	public:
		int n;
		
		int CEO(){
			
			if ( n % 2 == 0)
			{
				cout << "Its A positive no.";
		    }
		    else
		    {
		    	cout << "Its a odd No.";
			}
		}
}C;

int main()
{
	cout << "Enter the no.:"<<endl;
	cin >> C.n;
	C.CEO();
	
}
