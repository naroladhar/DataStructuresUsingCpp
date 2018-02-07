#include<iostream>
#include<cstdlib> /*C Standard General Utilities Library. This header defines several general purpose functions, 
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
		int capacity;
		// check size defined by user
	public:
		stack( int size = MAXSIZE) 
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
	arr= new int [Maxsize];
}
satck::~stack()
{
	delete []arr;
}
bool::isEmpty()
{
	if(top==-1)
	    return 1;
 	else
 	     return 0;
}
bool::isFull()
{
	if(top==Maxsize-1)
           return 1;
        else
       		return 0;
}
	void push(int num)
	{
		if(isFull())
		{
			cout<<"Stack is full"<<endl;
		}
		else
		{
			top++;
			stack[top]=num;
			cout<<"The stack is now"<<stack;
		}
	}
	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			return stack[top--];
		}
	}
	void peek()
	{
		if(isEmpty())
		{
		}


	}
