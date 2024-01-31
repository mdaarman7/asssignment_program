//1. "Factorial of a number."
#include<iostream>
using namespace std;
inline int fact(int m)
{
    int res=1;
    while(m>0)
    {
        res=res*m;
        m--;
    }
    return res;
}
int main()
{
    int factorial=0,num=0;
    cout<<"Enter a number for factorial: ";
    cin>>num;
    factorial=fact(num);
    cout<<endl<<"The Factorial of "<<num<< " is: "<<factorial;
    return 0;
}
