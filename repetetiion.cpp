#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cout<<"Enter the string:"<<endl;
	getline(cin, s);
	cout<<"String is : "<<s<<endl;
	int count = 0;
	int temp=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
			temp = count+1;
		}	
		else
			count = 0;
	}
	cout<<"REPETETION VALUE = "<<temp;
}
