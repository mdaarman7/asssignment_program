//2. Program to sort an array of object with age.
#include<iostream>
using namespace std;
class student{
	private:
		int age;
		char name[30];
	public:
		void get()
		{
			cout<<"enter name and age of student: ";
			cin>>name>>age;
		}
		int get_age()
        {
            return age;
        }
		void display()
		{
			cout<<endl<<"Name:"<<name<<"\tAge: "<<age;
		}
};
int main()
{
	student s[3],temp;
	int i=0,j=0,result;
	for(i=0;i<3;i++)
	{
		s[i].get();
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i].get_age()>s[j].get_age())
			{
				temp=s[j];
				s[j]=s[i];
				s[i]=temp;
			}
		}
	}
	cout<<"The ascending order of Student according to age is listed below. "<<endl;
	for(i=0;i<3;i++)
	{
		s[i].display();
	}
	return 0;
}