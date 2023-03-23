#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void beginsert ();
void lastinsert ();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void mid_ele_dis();
void reverse();
int main ()
{
    int choice = 0;
    while(1)
    {
        cout <<"\n\n*********Main Menu*********\n";
        cout << "\nChoose one option from the following list ...\n";
        cout<<"\n===============================================\n";
        cout << "\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Middle Element Dispaly \n10.Reverse the linked List \n11.Exit\n";
    	cout << "\nEnter your choice?\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
            	beginsert();
            	break;
            case 2:
           	 	lastinsert();
            	break;
            case 3:
            	randominsert();
            	break;
            case 4:
            	begin_delete();
            	break;
            case 5:
            	last_delete();
            	break;
            case 6:
            	random_delete();
            	break;
            case 7:
            	search();
            	break;
            case 8:
            	display();
            	break;
            case 9:
            	mid_ele_dis();
            	break;
            case 10:
            	reverse();
            	break;
            case 11:
            	exit(0);
            	break;
            default:
            	cout << "Please enter valid choice..";
        }
    }
}


void beginsert()
{
    node *ptr = new node();
    int item;
    if(ptr == NULL)
    {
        cout<<"\nOVERFLOW";
    }
    else
    {
        cout<<"\nEnter value\n";
        cin>>item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "\nNode inserted";
    }

}
void lastinsert()
{
    node *ptr = new node();
    node *temp = head;
    int item;
    if(ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter value?\n";
        cin >>item;
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            cout<<"\nNode inserted";
        }
        else
        {
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            cout <<"\nNode inserted";

        }
    }
}
void randominsert()
{
    int i,loc,item;
    node *ptr = new node();
	node *temp = head;
    if(ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter element value";
        cin>> item;
        ptr->data = item;
        cout << "\nEnter the location after which you want to insert ";
        cin >> loc;
        for(i=0;i<loc-1;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                cout << "\ncan't insert\n";
                return;
            }

        }
        ptr ->next = temp ->next;
        temp ->next = ptr;
        cout<<"\nNode inserted";
    }
}
void begin_delete()
{
    node *ptr = new node();
    if(head == NULL)
    {
        cout<<"\nList is empty\n";
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        cout<<"\nNode deleted from the begining ...\n";
    }
}
void last_delete()
{
    node *ptr = new node();
	node *ptr1;
    if(head == NULL)
    {
        cout << "\n list is empty";
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        cout << "\nOnly node of the list deleted ...\n";
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        cout << "\nDeleted Node from the last ...\n";
    }
}
void random_delete()
{
    node *ptr;
	node *ptr1;
    int loc,i;
    cout << "\n Enter the location of the node after which you want to perform deletion \n";
    cin>>loc;
    ptr=head;
    for(i=0;i<loc;i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if(ptr == NULL)
        {
            cout<<"\nCan't delete";
            return;
        }
    }
    ptr1 ->next = ptr ->next;
    free(ptr);
    cout << "\nDeleted node %d "<<loc+1;
}

//SEARCHING ELEMENT IN LINKED LIST

void search()
{
    node *ptr = new node();
    int item,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
        cout<<"\nEmpty List\n";
    }
    else
    {
        cout<<"\nEnter item which you want to search?\n";
        cin>>item;
        while (ptr!=NULL)
        {
            if(ptr->data == item)
            {
                cout<<"item found at location %d "<<i+1;
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr -> next;
        }
        if(flag==1)
        {
            cout << "Item not found\n";
        }
    }

}

//DISPLAY VALUE

void display()
{
    node *ptr = new node();
    ptr = head;
    if(ptr == NULL)
    {
        cout<<"Nothing to print";
    }
    else
    {
        cout << "\nprinting values . . . . .\n";
        while (ptr!=NULL)
        {
            cout << ptr->data <<" ";
            ptr = ptr -> next;
        }
    }
}


//PRINT MIDDLE ELEMENT OF LINIKED LIST

void mid_ele_dis()
{
	node *s= head;
	node *f = head;
	if (head == NULL)
	{
		cout << "List is overflow:\n";
	}
	else
	{
		while(f!=NULL && f->next != NULL)
		{
			s=s->next;
			f=f->next->next;
		}
		cout<<"Middle Element is : "<<s->data;
	}
}

//Reverse Linked List

void reverse()
{
	node *c,*p,*n;
	c= head;
	p=NULL;
	if (head == NULL)
	{
		cout << "List is Empty:\n";
	}
	else if(head->next == NULL)
	{
		cout<<"Reverse is\n"<<head->data;
	}
	else
	{
		while(c!=NULL)
		{
			n = c->next;
			c->next = p;
			p=c;
			c=n;
		}
		head = p;
 	}
 	Cout<<"AFTER REVERSING THE LINKED LIST\n";
 	display();
}



