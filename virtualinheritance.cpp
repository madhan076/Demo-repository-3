#include<iostream>
using namespace std;
class A{
	public:
		int value;
		A(){
			value = 0;
			cout<<"A's constructor called"<<endl;
		}
};
class B: virtual public A{
	public:
		B(){
			cout<<"B's constructor called"<<endl;
		}
};
class C: virtual public A{
	public:
		C(){
			cout<<"C's constructor called"<<endl;
		}
};
class D: public B,public C{
	public:
		D(){
			cout<<"D's constructor called"<<endl;
		}
		void setValue(int v){
			value=v;
		}
		void show(){
			cout<<"Value:"<<value<<endl;
		}
};
int main()
{
	D obj;
	obj.setValue(50);
	obj.show();
}
