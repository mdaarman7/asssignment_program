// "Class to Class Type Conversion"
#include<iostream>
using namespace std;
class Test{
    private: 
        int a;
        int b;
    public:
        Test(int c,int d)
        {
            a=c;
            b=d;
        }
        int returna()
        {
            return a;
        }
        int returnb()
        {
            return b;
        }
};
class Tasty{
    private:
        int x;
        int y;
    public:
        Tasty()
        {
            x=0;
            y=0;
        }
        Tasty(Test obj)
        {
            x=obj.returna();
            y=obj.returnb();
        }
        void display()
        {
            cout<<endl<<"The value of x is"<<x<< << y are: "<<x<< " "<<y;   
        }
};
int main()
{
    Test obj(50,100);
    Tasty object;
    object=obj;
    object.display();
    return 0;
}