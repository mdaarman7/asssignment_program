// "Concatinate First name and Last name using Binary operator Overloading"
#include<iostream>
using namespace std;
class Test{
    private:
        string name;
    public:
        void getdata()
        {
            cout<<"Enter First name: ";
            cin>>name;
        }
        void setdata()
        {
            cout<<"Enter Last Name: ";
            cin>>name;
        }
        void display()
        {
            cout<<endl<<"Full name is: "<<name;
        }
        Test operator + (Test &obj)
        {
            Test object;
            object.name=name + " " + obj.name;
            return object;
        }
};
int main()
{
    Test First,Second,Full;
    First.getdata();
    Second.setdata();
    Full=First+Second;
    Full.display();
    return 0;
}