
#include<iostream>
#include<stdio.h>
 /*C Standard General Utilities Library. This header defines several general purpose functions, 
					including dynamic memory management, random number generation, communication with the environment, 
					integer arithmetics, searching, sorting and converting*/
#define MAXSIZE 100 //or const  int MAXSIZE=100

using namespace std;

class stack
	/* objective: create a class for implementing Stack using arrays
		input parameters: none
		output value: none
		description: class definition
		approach: class defines data members and member function of the stack class
	*/
	{
		int *arr; 
		// for dynamic array
		int top;
		// check size defined by user
	public:
		stack() ;
		//constructor to create array dynamically
		~stack();
		//destructor to delete dynamically created array
		void push(int &);
		int pop();
		int peek();
		int size();
	// current size of stack
		bool isEmpty();
		bool isFull();
};
stack::stack()
{
	top=-1;
	arr= new int [MAXSIZE];
}
stack::~stack()
{
	delete []arr;
}

bool stack::isEmpty()
{
	if(top==-1)
	    return true;
 	else
 	     return false;
}
bool stack::isFull()
{
	if(top==MAXSIZE-1)
           return true;
        else
       	   return false;
}
void stack::push(int & num)
{
	if(isFull())
	{
		cout<<"Stack is full"<<endl;
	}
	else
	{
		top++;
		arr[top]=num;
	}
}
int stack::pop()
{
	if(!isEmpty())
	{
		return arr[top--];
	}
}
int stack::peek()
{
	if(!isEmpty())
	{
		return arr[top];
	}
	
}
int stack::size()
{
	if(!isEmpty())
	{
		return top+1;
	
	}
}
int main()
{
	stack st;
	a:
		int ch;
		cout<<"Choose any choice:"<<endl;
		cout<<"\n1.Push:"<<endl;
		cout<<"\n2.Pop:"<<endl;
		cout<<"\n3.Peek:"<<endl;
		cout<<"\n4.Size:"<<endl;
		cout<<"\n5.eXIT:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nenter the el to be pushed";
				int temp;
				cin>>temp;
				st.push(temp);
				break;
			case 2:
				cout<<st.pop();
				break;
			case 3: 
				cout<<st.peek();
				break;
			case 4:
				cout<<st.size();
				break;
			case 5: exit(0);
					

			default:
				cout<<"\nPlease re-enter the choice:"<<endl;
		}
		goto a;
	return 0;						 		
}
