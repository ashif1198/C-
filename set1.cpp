#include <iostream>
#include <set>
#include<vector>
using namespace std; 
int main()
{
	int temp,n;
  	vector<int>a;
  	cout << "Enter the size of array:\n";
  	cin >> n;
  	cout << "Enter the Value of array:\n";
  	for(int i=0;i<n;i++)
  	{
  		cin >> temp;
  		a.push_back(temp);
	}
	set<int>b;
	for(int j=0;j<a.size();j++)
	{
		b.insert(a[j]);
	}
	for(auto i : b)
	{
		cout << i << " ";
	}
    return 0;
}
