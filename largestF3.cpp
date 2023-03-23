#include<iostream>

using namespace std;

class MAX{
	
	public :
		float a,b,c,max =0;
		
		float Result (){
			if(a>b>c)
			{
				max = a;
			}
			else if (b > c)
			{
				max = b ;
			}
			else
			{
				max = c;
			}
			return max;
		}
};

int main()
{
	MAX r;
	cout<<"a = " ;
	cin >> r.a;
	cout <<"b = ";
	cin >> r.b;
	cout <<"c = ";
	cin >> r.c;
	cout << "Largest of 3 No. = " << r.Result();
}
