// Program to add two complex number using objects with binary operator overloading.
#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imag;
    public:
        void getdata()
        {
            cout<<"Enter real and imaginary part: ";
            cin>>real>>imag;
        }
        Complex operator +(Complex& obj)
        {
            Complex temp;
            temp.real=real+obj.real;
            temp.imag=imag+obj.imag;
            return temp;
        }
        void display()
        {
            if(imag<0)
            {
                cout<<endl<<"The addition of two complex number is: "<<real << imag<<"i";
            }
            else
            {
                cout<<endl<<"The addition of two complex number is: "<<real<<" + "<<imag<<"i";
            }
        }

}num,num1,result;
int main()
{
    num.getdata();
    num1.getdata();
    result=num+num1;
    result.display();
    return 0;
}