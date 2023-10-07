/* 5. Arrays of an Object
-> Design a C++ program that creates an array of objects representing geometric shapes (circle,rectangle, triangle)
and calculates the total area of all shapes in the array*/
#include<iostream>
using namespace std;
class Shape{
	private:
		float radius=0,length=0,breadth=0,base=0,height=0,area=0;
	public:
		void circle()
		{
			cout<<endl<<"Enter radius : ";
			cin>>radius;
			area=3.14*radius*radius;
			cout<<endl<<"Area of circle : "<<area;
		}
		void rectangle()
		{
			cout<<endl<<"Enter length and Breadth: ";
			cin>>length>>breadth;
			area=length*breadth;
			cout<<endl<<"Area of rectangle : "<<area;
		}
		void triangle()
		{
			cout<<endl<<"Enter base and height: ";
			cin>>base>>height;
			area=0.5*base*height;
			cout<<endl<<"Area of triangle : "<<area;
		}
	friend void totalarea(Shape[]);
}shape1[3];
void totalarea(Shape x[])
{
	float tot=0;
	tot=x[0].area+x[1].area+x[2].area;
	cout<<endl<<"Total area : "<<tot;
}
int main()
{
	shape1[0].circle();
	shape1[1].rectangle();
	shape1[2].triangle();
	totalarea(shape1);
	return 0;
}
