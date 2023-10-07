//2 Two classes Student and Marksheet that uses a friend function to display student's detail with their marks.
#include<iostream>
using namespace std;
class Marksheet;
class Student{
	string name;
	public:
		void getdata()
		{
			cout<<"Enter Name: ";
			//getline(cin,name);
			cin>>name;
		}
		friend void sathy(Student,Marksheet);
}x;
class Marksheet{
	int marks;
	public:
		void getdata()
		{
			cout<<"Enter marks: ";
			cin>>marks;
		}
		friend void sathy(Student,Marksheet);
}y;
void sathy(Student obj1,Marksheet obj2)
{
	cout<<"Your name is: "<<obj1.name<<endl<<"Your marks is: "<<obj2.marks;	
}
int main()
{
	x.getdata();
	y.getdata();
	sathy(x,y);
	return 0;
}
