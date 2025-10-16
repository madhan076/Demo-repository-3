#include<iostream>
using namespace std;
class student{
	public:
		string name;
		string rollno;
		int year;

		student()
		{
			name="madhan";
			rollno="24b11ds002";
			year = 2;
		}
};
int main()
{
	student s1;
	cout<<s1.name<<endl;
	cout<<s1.rollno<<endl;
	cout<<s1.year<<endl;
}
