#include<iostream>
using namespace std;
class Test{
    private:
        int a;
    public:
        Test()
        {
            cout<<"Enter value for a: ";
            cin>>a;
        }
        void operator ++()
        {
            a=a+5;
        }
        void operator ++(int)
        {
            a=a-10;
        }
        void display()
        {
            cout<<endl<<"The value of a is: "<<a;
        }
}obj;
int main()
{
    ++obj;
    obj.display();      //  prefix Operator
    obj++;
    obj.display();      //  postfix Operator
    return 0;
}