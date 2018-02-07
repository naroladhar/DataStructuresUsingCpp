//GCD Algorithm
#include<iostream>
using namespace std;
int main()
{
	int m,n,x,y;
	cout<<"Enter value for n:";
	cin>>n;
	cout<<"Enter value for m:";
	cin>>m;
	x=n;
	y=m;
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	}
	cout<<"The greatest common divisor is "<<x<<endl;
	return 0;
}
