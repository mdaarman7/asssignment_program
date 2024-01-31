//1. "Implementation of friend function that calculates and returns the area of circle with private data members for radius"
#include<iostream>
using namespace std;
class Circle{
	int radius;
	public:
		void getdata()
		{
			cout<<"Enter radius: ";
			cin>>radius;
		}
		friend float area(Circle);
		
}obj;
float area(Circle m)
{
	return 3.14*m.radius*m.radius;
}
int main()
{
	obj.getdata();
	float r=area(obj);
	cout<<"The area is: "<<r;
	return 0;
}
