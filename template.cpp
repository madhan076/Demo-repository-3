#include<iostream>
using namespace std;
template<typename T>
void swapvalues(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}

int main()
{
	int x=10, y=20;
	double p=3.5, q=9.8;
	
	cout<<"Before swapping: x="<<x<<", y="<<y<<endl;
	swapvalues(x,y);
	cout<<"After swapping: x="<<x<<", y="<<y<<endl;
	
	cout<<"\nBefore swapping: p="<<p<<", q="<<q<<endl;
	swapvalues(p,q);
	cout<<"After swapping: p="<<p<<", q="<<q<<endl;
}
