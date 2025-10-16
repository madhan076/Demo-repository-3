#include<iostream>
namespace madhan{
	int value=98;

void show(){
	std::cout<<"value from show:"<<value<<std::endl;
}
}

using namespace madhan;
int main(){
	std::cout<<value<<std::endl;
	show();
	return 0;
}
