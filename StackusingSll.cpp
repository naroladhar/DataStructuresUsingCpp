#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*top=NULL;
class Stacksll
{
	int count,maxnum;
	public:
		void push(int value);
		void pop();
		void display();	
};
void Stacksll::push(int value)
{
    if(count == maxnum)
            cout<<"stack is full";
    else
    {
        struct node *newTop = new node;
        if(top == NULL)
        {       
            newTop->data = value;
            newTop->next = NULL;
            top = newTop;
            count++;
        }
        else
        {
            newTop->data = value;
            newTop->next = top;
            top = newTop;
            count++;
        }
    }
    cout<<"Element Inserted at top"<<endl;
}
void Stacksll::pop()
{
	if(top == NULL)
            cout<< "nothing to pop";
    else
    {
        struct node * old = top;
        top = top->next;
        count--;
        delete(old);
    }
}
void Stacksll::display()
{
 struct node *temp;
    if (top == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = top;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
	Stacksll sts;
	do
	{
		int ch,a;
		cout<<"******************STACK USING SLL***********************"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Display"<<endl;	
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				int value;
    			cout<<"Enter the value to be inserted: ";
    			cin>>value;
				sts.push(value);
				sts.display();
				break;
			case 2:
				sts.pop();
				sts.display();
				break;
			case 3:
				sts.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Please re-enter your choice:(Type 1)"<<endl;
		}
		cout<<"Type 1 to continue"<<endl;
	}while(1);
}
