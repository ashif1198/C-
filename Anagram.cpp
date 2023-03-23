#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


bool isAngram(string A, string B)
{
	int n1,n2,i;
	n1=A.length();
	n2= B.length();
	if(n1!=n2)
	{
		return false;	
	}	
	else
	{
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		transform(A.begin(), A.end(), A.begin(), ::tolower);
		 transform(B.begin(), B.end(), B.begin(), ::tolower);
		for(i=0;i<n1;i++)
		{
			if (A[i] != B[i])
			{
				return false;
			}
		}	
		return true;
	}
}

int main()
{
	string A,B;
	bool ans;
	cout << "Enter the First String:\n";
	cin >>A;
	cout << "Enter the Second String:\n";
	cin >> B;
	ans = isAngram(A,B);
	if(ans == 1)
	{
		cout << "Words are anagrams";
	}
	else
	{
		cout << "Words are not anagrams";
	}
}
