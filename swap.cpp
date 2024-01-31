// "Swap two variable using Template"
#include<iostream>
using namespace std;
template<typename T>
void Swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"Enter a and b: ";
    cin>>x>>y;
    Swap<int>(x,y);
    cout<<"Value after swapped: a= "<<x;
    cout<<endl<<"b= "<<y;
    return 0;
}