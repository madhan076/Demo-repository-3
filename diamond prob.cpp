#include<iostream>
using namespace std;
class A{
	public:
		int value;
};
class B:public A{
	
};
class C:public A{
};
class D:public B,public C{
	public:
		void setValues(int v1,int v2){
			B::value=v1;
			C::value=v2;
		}
		void display()
		{
			cout<<"B's value:"<<B::value<<endl;
			cout<<"C's value:"<<C::value<<endl;
		}
};
int main(){
	D obj;
	obj.setValues(10,20);
	obj.display();
}
