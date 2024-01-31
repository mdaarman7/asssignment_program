// "Ambiguity Problem Solution"
#include <iostream>
using namespace std;
class A
{
private:
    int a;
public:
    A()
    {
        a=100;
        
    }
    void show_data()
    {
        cout << endl
             << a;
    }
};
class B : virtual public A{};
class C : virtual public A{};
class D : public B, public C
{
public:
    void calculate_data()
    {
        show_data();             
    }
};
int main()
{
    D obj;
    obj.calculate_data();
    return 0;
}