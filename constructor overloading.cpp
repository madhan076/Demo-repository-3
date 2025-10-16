#include<iostream>
using namespace std;

class student{
	public:
		int rollno;
		string name;
		
		public:
			student()
			{
				rollno = 121;
				name="unknown";
			}
			
			student(int r,string n)
			{
				rollno = r;
				name = n;
			}
			
			void display()
			{
				cout<<"RollNo: "<<rollno<<",Name: "<<name<<endl;
			}
};
int main()
{
	student s1;
	s1.display();
	student s2(122,"madhan");
	s2.display();
}
