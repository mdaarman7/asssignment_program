// "Binary Operator Overloading (+)"
#include<iostream>
using namespace std;
class Test{
    private:
        int x;
    public:
    Test()
    {
         x=90;
    }
    Test operator + (Test &obj)
    {
        Test obj1;
        obj1.x=x+obj.x;
        return obj1;
    }
    void display()
    {
        cout<<endl<<"x: "<<x;
    }
}sum,a,b;
int main()
{
    sum=a+b;
    sum.display();
    return 0;
}