#include<iostream>
namespace Mynamespace{
	int value=43;
	void show()
	{
		std::cout<<"value: "<<value<<std::endl;
	}
}

int main()
{
	std::cout<<Mynamespace::value<<std::endl;
    Mynamespace::show();
	return 0;
}
