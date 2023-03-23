#include<bits/stdc++.h>
using namespace std;

void displayStack(stack<int>s)
{
	int n = s.size();
	for(int i=0;i<n;i++)
	{
		cout<<s.top()<<"\n";
		s.pop();
	}
	cout<<"\n";
}

int main()
{

 int value;
 stack<int>s;
 int choice;
 //Menu Driven Program using Switch
 while( 1)
 {
 cout<<"\n1.Push 2.Pop 3.showTop 4.displayStack 5.exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         s.push(value);
         break;
 case 2: s.pop();
         break;
 case 3: 
 		 cout << "\nTOP E:EMENT OF STACK = "<<s.top()<<endl;
         break;
 case 4: displayStack(s);
         break;
 case 5: exit(0);
         break;
 default:cout<< "\nCHOSE NUMBE IS NOT CORRECT\n";
 }
}
}

