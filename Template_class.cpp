// Class Template Example with this pointer
#include<iostream>
using namespace std;
template <typename T>
class Test{
    T x;
    T y;
    public:
        Test(T x,T y)
        {
            this->x=x;
            this->y=y;
        }
        T return_sum()
        {
            return x+y;
        }
};
int main()
{
    Test <int>obj(5,10);
    int sum=obj.return_sum();
    cout<<sum;
    return 0;
}