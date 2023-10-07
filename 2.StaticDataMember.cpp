// Program to demonstrate the usage of a static data member to maintain count of objects created for a particular class.
#include <iostream>
using namespace std;
class Test
{
    static int num;
public:
    Test()
    {
        num += 1;
    }
    static void display()
    {
        cout << "Number of object created: " << num;
    }
};
int Test::num = 0;
int main()
{
    Test obj1[5];
    obj1[0].display();
    return 0;
}