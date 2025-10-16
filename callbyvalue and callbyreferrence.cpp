#include<iostream>
using namespace std;

void callByvalue(int x)
{
	x=x+10;
	cout<<"Inside callByvalue function,x="<< x << endl;
}
void callByreference(int &y)
{
	y=y+10;
	cout<<"Inside callByreference funtion,x="<< y << endl;
}
int main()
{
	int a=5;
	int b=9;
	cout<<"Before call By value,a="<<a<<endl;;
	callByvalue(a);
	cout<<"After call By value,a="<<a<<endl;
	
	cout<<"\nBefore call By referencevalue,b="<<b<<endl;
	callByreference(b);
	cout<<"After call By referencevalue,b="<<b<<endl;
}
