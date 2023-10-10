#include<iostream>
using namespace std;
int main()
{
    int *p,num=0,i=0;
    cout<<"Enter no. of space required: ";
    cin>>num;
    p=new int[num];
    for(i=0; i<num;i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>*(p+i);
    }
    cout<<endl<<"The numbers are: "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<*(p+i)<<endl;
    }
    delete[] p;
    return 0;
}
