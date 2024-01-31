// "Default Argument with 4 Cases"
#include<iostream>
using namespace std;

void sum(int a=10,float b=5.5)
{
    cout<<"a+b="<<a+b;
}


int main()
{
    sum();       // Case 1
    sum(5,10.5); // Case 2
    sum(5);      // Case 3
    sum(6.5);    // Case 4
    return 0;
}