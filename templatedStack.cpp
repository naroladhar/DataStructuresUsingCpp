#include<iostream>
#include<stdio.h>
#include<cstring>>
#include<cstdlib>
 /*C Standard General Utilities Library. This header defines several general purpose functions, 
					including dynamic memory management, random number generation, communication with the environment, 
					integer arithmetics, searching, sorting and converting*/
#define MAXSIZE 100 //or const  int MAXSIZE=100

using namespace std;
template <class S>
class stack
	/* objective: create a class for implementing Stack using arrays
		input parameters: none
		output value: none
		description: class definition
		approach: class defines data members and member function of the stack class
	*/
	{
		S *arr; 
		// for dynamic array
		int top;
		// check size defined by user
	public:
		stack() ;
		//constructor to create array dynamically
		~stack();
		//destructor to delete dynamically created array
		void push(int &);
		S pop();
		S peek();
		int size();
		int display();
	// current size of stack
		bool isEmpty();
		bool isFull();
};
template<class S>
stack<S>::stack()
{
	top=-1;
	arr= new int [MAXSIZE];
}
template<class S>
stack<S>::~stack()
{
	delete []arr;
}
template<class S>
bool stack<S>::isEmpty()
{
	if(top==-1)
	    return true;
 	else
 	     return false;
}
template<class S>
bool stack<S>::isFull()
{
	if(top==MAXSIZE-1)
           return true;
        else
       	   return false;
}
template<class S>
void stack<S>::push(int & num)
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
template <class S>
S stack<S>::pop()
{
	if(!isEmpty())
	{
		return arr[top--];
	}
}
template<class S>
S stack<S>::peek()
{
	if(!isEmpty())
	{
		return arr[top];
	}
	
}
template<class S>
int stack<S>::size()
{
	if(!isEmpty())
	{
		return top+1;
	
	}
}
template<class S>
int stack<S>::display()
{
	while(!isEmpty())
	{
		cout<<arr[top];
		arr[top--];
	}
}
int main()
{
	a:
		stack<int> st;
		
		int ch;
		cout<<"1.Push:"<<endl;
		cout<<"2.Pop:"<<endl;
		cout<<"3.Peek:"<<endl;
		cout<<"4.Size:"<<endl;
		cout<<"5.Display:"<<endl;
		cout<<"6.EXIT:"<<endl;
		cout<<"Choose any choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter the element to be pushed:";
				int temp;
				cin>>temp;
				st.push(temp);
				break;
			case 2:
				cout<<"\n After Popping: ";
				cout<<st.pop()<<endl;
				break;
			case 3: 
				cout<<"\n The top element is ";
				cout<<st.peek()<<endl;
				break;
			case 4:
				cout<<"\n The size of the stack is ";
				cout<<st.size()<<endl;
				break;
			case 5:
				cout<<"\n The stack holds: ";
				st.display();
				break;
			case 6: 
				exit(0);
			default:
				cout<<"\nPlease re-enter the choice:";
		}
		goto a;
	return 0;						 		
}
