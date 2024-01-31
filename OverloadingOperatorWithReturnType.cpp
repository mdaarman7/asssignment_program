// Overloading Operator with Return Type.
#include<iostream>
using namespace std;
class Complex_Number{
    private:
        int x,y;
    public:
        Complex_Number()
        {
            x=0;
            y=0;
        }
        Complex_Number operator ++()
        {
            Complex_Number obj;
            obj.x=++x;
            obj.y=++y;
            return obj;
        }
        Complex_Number operator ++(int)
        {
            Complex_Number obj;
            obj.x=++x;
            obj.y=++y;
            return obj;
        }
        void getdata()
        {
            cout<<"Enter x and y: ";
            cin>>x>>y;
        }
        void display()
        {
            cout<<endl<<endl<<x<<" + i"<<y;
        }
};
int main()
{
    Complex_Number obj1,result;
    obj1.getdata();
    result=++obj1;
    result.display();
    result=obj1++;
    result.display();
    return 0;
}