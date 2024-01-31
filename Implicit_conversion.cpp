//Create a C++ program that demonstrates implicit type conversion by adding an integer and a floating-point number.
#include<iostream>
using namespace std;
class kist{
	private :
		int a;
		int b;
		float c;
		float d;
		int inte;
		float floate;
		float ram;
		public :
			void setvalue()
			{
				cout<<"Enter a integer number : ";
				cin>>a>>b;
			}
			void setvalve()
			{
				cout<<"Enter a float number : ";
				cin>>c>>d;
			}
		
			void intu()
			{
				floate=a+b;
				ram=floate;
				cout<<"The sum is "<<ram<<endl;
			}
			void floatu()
			{
				inte=c+d;
				cout<<"The sum is "<<inte;
			}
}obj1;
int main()
{
	obj1.setvalue();
	obj1.setvalve();
	obj1.intu();
	obj1.floatu();
    float num;
    cin>>num;
    cout<<endl<<"The number is "<<num;
	return 0;
}