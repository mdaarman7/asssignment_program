// "Early and Late Binding Example"
#include<iostream>
using namespace std;
class Base{
    public:
        virtual void display()
        {
            cout<<"Base display dunction is Called.";
        }
        void print()
        {
            cout<<endl<<"Base Print Function is Called.";
        }
};
class Derived: public Base{
    public:
        void display()
        {
            cout<<endl<<"Derived class Called";
        }
        void print()
        {
            cout<<endl<<"Derived print function is called.";
        }
};
int main()
{
    Base *ptr;
    Derived obj;
    ptr=&obj;
    ptr->display();         //  late binding
    ptr->print();           //  Early binding
    return 0;
}