#include<iostream>
int value=100;
namespace number{
	int value=400;
}
int main()
{
	int value=600;
	std::cout<<"Local variable: "<<value<<std::endl;
	std::cout<<"Global variable: "<<::value<<std::endl;
	std::cout<<"Namsepace value: "<<number::value<<std::endl;
	return 0;
}
