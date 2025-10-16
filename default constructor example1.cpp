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
			rollno="24B11DS002";
			year=2;
		}
};
int main()
{
	student s1;
	cout<<"Name of the student: "<<s1.name<<endl;
	cout<<"My rollno is: "<<s1.rollno<<endl;
	cout<<"Year is: "<<s1.year<<endl;
}
