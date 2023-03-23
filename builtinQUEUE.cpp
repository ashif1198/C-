#include<bits/stdc++.h>
using namespace std;

int displayQueue(queue<int>q)
{
	if(q.empty())
	{
		cout << "\nQUEUE IS EMPTY\n";
	}
	else
	{
		int n = q.size();
		cout<<"\nQUEUE ELEMENT IS\n";
		while(n)
		{
			cout << q.front() << endl;
			q.pop();
			n--;
		}
	}
}


int main()
{
 int choice, value;
 queue<int>q;
 while(1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          q.push(value);
          break;
  case 2: q.pop();
          break;
  case 3: 
  		  if(q.empty())
  		  {
  		  	cout << "\n QUEUE IS EMPTY\n";
		  }
		  else
		  	cout<<"\nFRONT ELEMENT OF QUEUE = "<<q.front()<<endl;	
          break;
  case 4:
  		  if(q.empty())
  		  {
  		  	cout << "\n QUEUE IS EMPTY\n";
		  }
		  else
		  	cout<<"\nREAR ELEMENT OF QUEUE = "<<q.back()<<endl;	
          break;
  case 5: displayQueue(q);
          break;
  case 6: exit(0);
          break;
  }
 }

 return 0;
}
