// Program to demonstrate the usage of a static data member to maintain count of objects created for a particular class.
#include <iostream>
using namespace std;
class Test
{
    static int num;
    int num1;
public:
 /*   Test()
    {
        num += 1;
    }*/
    void getdata()
    {
        cout<<"Enter num1: ";
        cin>>num1;
    }
    // static void display()
    // {
    //     cout << "Number of object created: " << num;
    // }
    void result()
    {
        cout<<"Sum is : "<<num+num1;
    }
};
int Test::num = 50;
int main()
{
    // Test obj1[5];
    //obj1[0].display();
    // obj1[0].getdata();
    // obj1[0].result();
    Test obj;
    obj.getdata();
    obj.result();

    return 0;
}