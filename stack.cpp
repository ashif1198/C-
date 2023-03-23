#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *top = NULL;
int isempty()
{
	if (top == NULL)
		return true;
	else
		return false;
}
void push(int val)
{
	node *ptr =new node();
	ptr->data = val;
	ptr->next = top;
	top = ptr;
}

void pop()
{
	if(isempty())
	{
		cout << "\nStack is empty\n";
	}
	else
	{
		node *ptr = top;
		top = top->next;
		delete(ptr);
	}
}

void showTop()
{
	if(isempty())
	{
		cout << "\nStack is emoty\n";	
	}	
	else
	{
		cout << "TOP ELEMENT OF STACK IS = " << top->data;
	}
}

void displayStack()
{
	if(isempty())
	{
		cout << "\nStack is Empty\n";
	}
	else
	{
		node *t = top;
		Cout << "\nSTACK ELEMENT\n";
		while(t)
		{
			cout << t->data <<"\n";
			t = t->next;
		}
		cout<<"\n";
	}
}

int main()
{

 int choice, flag=1, value;

 //Menu Driven Program using Switch
 while( flag == 1)
 {
 cout<<"\n1.Push 2.Pop 3.showTop 4.displayStack 5.exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: showTop();
         break;
 case 4: displayStack();
         break;
 case 5: flag = 0;
         break;
 }
}
}

