// Program of Prefix and Postfix Overloading Operator.
#include<iostream>
using namespace std;
class Complex_Number{
    private:
        int x;
        int y;
    public:
        Complex_Number ()
        {
            cout<<"Enter x and y: ";
            cin>>x>>y;
        }
        void operator ++ ()
        {
            x=x+5;
            y=y+5;
        }
        void operator ++ (int)
        {
            x=x+5;
            y=y+5;
        }
        void display()
        {
            //cout<<endl<<"x: "<<x<<endl<<"y: "<<y;
            cout<<endl<<x<<" + i"<<y<<endl;
        }
}obj;
int main()
{
    ++obj;      //Prefix Overloading Operator
    obj.display();
    obj++;      //Postfix Overloading Operator
    obj.display();
    return 0;
}