// CopyConstructor
#include<iostream>
using namespace std;
class Test{
    int a;
    int b;
    public:
        Test(int c)
        {
            a=c;
        }
        void display()
        {
            cout<<"the value of a is: "<<a;
        }
        Test(Test &obj)
        {
            a=obj.a;
        }
}obj(10);
int main()
{
    //obj.display();
    Test obj1=obj;
    obj1.display();
    return 0;
}