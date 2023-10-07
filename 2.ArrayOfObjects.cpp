// 2. Arrays of Objects
// Program to sort an array of an object of a user defined class based on name.
#include<iostream>
#include<cstring>
using namespace std;
class Test{
    private:
        char name[20];
        int age;
    public:
        void getdata()
        {
            cin>>name>>age;
        }
    friend void check(Test[]);
}obj[5],result;
void check(Test m[])
{
    int i=0,j=0,k=0;
    Test temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            k=strcmp(m[i].name,m[j].name);
            if(k>0)
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
        }
    }
    cout<<endl<<"Ascending Order according to Name are listed below "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<endl<<endl<<"Name: "<<m[i].name<<endl<<"Age: "<<m[i].age;
    }
}
int main()
{
    int i=0;
    for ( i = 0; i < 5; i++)
    {
        cout<<"Enter Name and Age of person "<< i+1<<" :";
        obj[i].getdata();
    }
    check(obj);
    return 0;
}