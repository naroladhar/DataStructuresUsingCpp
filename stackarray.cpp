#include<iostream>
#include<cstdlib>
#define Maxsize 100
using namespace std;
class stack
{
	int array[Maxsize];
	int top=-1;
	
	bool isEmpty()
	{
		if(top==-1)
		 return 1;
 	    else
 	     return 0;
	}
	bool isFull()
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
			cout<<"The stack is now"<<stack
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
}
int main()
{
	int ch,num;
	cout<<"1.Push"<<endl<<"2.Pop"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		Case 1:
			cout<<"Enter the number:"<<endl;
			cin>>num;
			push(num);
		Case 2:
			pop();
	}
	return 0;
}
