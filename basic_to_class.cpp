// "Basic to Class Type Conversion"
#include<iostream>
using namespace std;
class Test{
    private:
        int a;
    public:
        Test()
        {
            a=0;
        }
        Test(int c)
        {
            a=c;
        }
        void display()
        {
            cout<<endl<<"The value of a is: "<<a;
        }
        
}obj;
int main()
{
    int b=90;
    obj=b;
    obj.display();
    return 0;
}
