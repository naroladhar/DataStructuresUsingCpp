#include<iostream> //preprocesing directive for input and output
using namespace std;
#include<stack> //predefined stack class
int main()
{
	stack<int> obj,obj1;
	int noe,i=0;
	cout<<"Enter no. of elements:";
	cin>>noe;
	
	if(obj.empty())
	{
		cout<<"before pushing"<<"\n";
		cout<<"Stack obj is empty"<<"\n";
	}
	while(i<noe)
	{
		int no;
		cout<<"Enter a number:";
		cin>>no;
		obj.push(no);
		i++;
	}	
	if(obj.empty())
	{
		cout<<"after pushing\n";
		cout<<"Stack obj is empty\n";
	}
	while(!obj.empty())
	{
		int first=obj.top();
		cout<<first<<",";
		obj.pop();
	}
	if(obj1.empty())
	{
		cout<<"\nStack obj1 is empty";
	}
	return 0;
}
