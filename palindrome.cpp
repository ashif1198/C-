#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool ispalindrome(string a)
{
	string p = a;
	reverse(p.begin(),p.end());
	if(a==p)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}


int main()
{
	string s;
	cout << "Enter the string"<<endl; 
	getline(cin,s);
	int ans = ispalindrome(s);
	if(ans == 1)
	{
		cout << "String is Palindrome";
	}
	else
	{
		 cout << "String is not Palindrome:";
	}
}
	


