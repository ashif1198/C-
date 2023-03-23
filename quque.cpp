#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *front = NULL;
node *rear = NULL;

int isempty()
{
	if(front == NULL && rear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int  enqueue(int val)
{
	node *ptr = new node();
	ptr->data = val;
	ptr->next = NULL;
	
	if(front == NULL && rear == NULL)
	{
		front = ptr;
		rear = ptr;
	}
	else
	{
		rear->next = ptr;
		rear = ptr;
	}
}

int dequeue()
{
	if(isempty())
	{
		cout << "\nQUEUE IS EMPTY\n";
	}
	else if(front == rear)
	{
		free(front);
		front = rear  = NULL;
	}
	else
	{
		node *ptr = front;
		front = front->next;
		free(ptr);
	}
}

int showfront()
{
	if(isempty())
	{
		cout << "\nQUEUE IS EMPTY\n";
	}
	else
	{
		cout<<"\nFront element of QUEUE = "<<front->data<<endl;
	}
}

int displayQueue()
{
	if(isempty())
	{
		cout << "\nQUEUE IS EMPTY\n";
	}
	else
	{
		node *ptr = front;
		cout<<"\nQUEUE ELEMENT IS\n";
		while(ptr)
		{
			cout << ptr->data << endl;
			ptr=ptr->next;
		}
	}
}


int main()
{
 int choice, value;
 while(1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: showfront();
          break;
  case 4: displayQueue();
          break;
  case 5: exit(0);
          break;
  }
 }

 return 0;
}
