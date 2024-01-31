// "Copy Constructor Program"
#include<iostream>
using namespace std;
class Test{
    private:
        int a;
    public:
        Test(int d)
        {   
            a=d;
        }
        Test (Test &object)
        {
            a=object.a;
        }
        void display()
        {
            cout<<endl<<"The value of a is : "<<a;

        }
}obj(10);
int main()
{
    Test obj1=obj;
    obj1.display();
    return 0;
}
