#include<iostream>
using namespace std;
class Test{
	public:
		void display();
};

void Test::display(){
	cout<<"Hello from Test class!"<<endl;
}

int main()
{
	Test t;
	t.display();
	return 0;
}
