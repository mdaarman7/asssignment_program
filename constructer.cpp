#include<iostream>
using namespace std;
class First{
    float celsius;
public:
    First(float x)
    {
        celsius=x;
    }
    float calculate()
    {
        float fahrenhite;
        fahrenhite=(celsius*1.8)+32;
        return fahrenhite;
    }
    
};
int main()
{
    float input,result;
    cout<<"Enter temperature in celsius: ";
    cin>>input;
    First obj(input);
    result=obj.calculate();
    cout<<"The Temperature in Fahrenhite is: "<<result;
    return 0;
}
