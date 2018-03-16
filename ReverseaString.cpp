#include<iostream>
#include<cstring>
#include<stack>
#define MAXSIZE 20
using namespace std;
void reverse(char *str,int len)
{
	stack<char> s;
	int i;
	
	// Push into a stack
 	for(i = 0; i < len; i++)  
  		s.push(str[i]);
 
 	// Pop from a stack   
 	for(i= 0; i < len; i++)
	{
  		str[i] = s.top();
  		s.pop();
 	}
}
int main()
{
   char str[MAXSIZE];
   cout<<"Enter a string:"<<endl;
   cin>>str;
   int len = strlen(str);
   
   reverse(str, len);
   
   cout <<"After reversing a string \n" << str;
   return 0;
}
