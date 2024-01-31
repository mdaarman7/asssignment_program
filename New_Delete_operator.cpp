// New and Delete Operator for Both variable and array
#include<iostream>
using namespace std;
int main()
{
    //For variable
    int *ptr;
    ptr=new int;
    *ptr=5; 
    cout<<"The value of an variable is: "<<*ptr;
    delete ptr;
    //For array
    int *ptr1,size,i;
    cout<<endl<<"Enter the size for an array: ";
    cin>>size;
    ptr1=new int[size];
    for(i=0;i<size;i++)
    {
        cout<<"Enter num "<<i+1<<" : ";
        cin>>*(ptr1+i);
    }
    cout<<"The values are listed below: ";
    for(i=0;i<size;i++)
    {
        cout<<endl<<*(ptr1+i);
    }
    delete[] ptr1;

    return 0;
}