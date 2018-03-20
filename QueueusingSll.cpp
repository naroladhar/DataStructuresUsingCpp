#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;	
}*front=NULL,*end=NULL,*p=NULL,*np=NULL;
class Queuesll
{
	public:
		void push(int value);
		int remove();
		void display();
};
void Queuesll::push(int value)
{
	np = new node;
    np->data = value;
    np->next = NULL;
    if(front == NULL)
    {
        front = end = np;
        end->next = NULL;
    }
    else
    {
        end->next = np;
        end = np;
        end->next = NULL;
    }
}
int Queuesll::remove()
{
	int value;
    if(front == NULL)
    {
        cout<<"empty queue\n";
    }
    else
    {
        p = front;
        value = p->data;
        front = front->next;
        delete(p);
        return(value);
    }
}
void Queuesll::display()
{
	if(front==NULL){
        cout<<"Queue is empty\n"<<endl;
        return;
    }
    struct node *temp=front;
    //will check until NULL is not found
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
//main function
int main()
{
	Queuesll qus;
	do
	{
		int ch,a;
		cout<<"******************QUEUE USING SLL***********************"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.Display"<<endl;	
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				int value;
    			cout<<"Enter the value to be inserted: ";
    			cin>>value;
				qus.push(value);
				qus.display();
				break;
			case 2:
				qus.remove();
				qus.display();
				break;
			case 3:
				qus.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Please re-enter your choice:(Type 1)"<<endl;
		}
		cout<<"Type 1 to continue"<<endl;
	}while(1);
}
