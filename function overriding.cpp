#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void draw(){
			cout<<"Drawing a generic shape"<<endl;
		}
};

class Circle: public Shape{
	public:
		void draw() override
		{
			cout<<"Drawing a circle"<<endl;
		}
};

class Rectangle: public Shape{
	public:
		void draw() override
		{
			cout<<"Drawing a Rectangle"<<endl;
		}
};

int main()
{
	Shape* s;
	
	Circle c;
	Rectangle r;
	Shape base;
	
	s=&c;
	s->draw();
	
	s=&r;
	s->draw();
	
	s=&base;
	s->draw();
}
