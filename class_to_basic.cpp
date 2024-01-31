// "Class To Basic Type Conversion"
#include "iostream"
using namespace std;
class Test
{
    private:
        int a;
public: 
    Test()
    {
        int a=0;
    }
    operator int() //casting operator
    {
        a = 100;
        return a;
    }
};
int main()
{
    Test obj;
    int num;
    num = obj;
    cout << "Num= " << num;
    return 0;
}