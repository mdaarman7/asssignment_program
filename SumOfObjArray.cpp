// Passing object's array[3] and adding their private data member;
#include<iostream>
using namespace std;
class First{
    int num;
    public:
        void getdata()
        {
            cout<<"Enter num: ";
            cin>>num;
        }
        friend void sum(First[]);
}obj[3];
void sum(First a[])
{
    int result=0;
    for(int i=0;i<3;i++)
    {
        result=result+a[i].num;
    }
    cout<<endl<<"The Sum is: "<<result;
}
int main()
{
    int i=0;
    for(i=0;i<3;i++)
    {
        obj[i].getdata();
    }
    sum(obj);
    return 0;
}
