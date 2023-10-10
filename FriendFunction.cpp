#include<iostream>
using namespace std;
class Second;
class First{
    int x;
    int y;
    public:
        void getdata()
        {
            cout<<"Enter First x and y: ";
            cin>>x>>y;
        }
        friend void add(First,Second);
}f;
class Second{
    int x;
    int y;
    public:
        void getdata()
        {
            cout<<"Enter Second x and y: ";
            cin>>x>>y;
        }
        friend void add(First,Second);
}s;
void add (First f1,Second s1)
{
    cout<<"The sum of two complex number(x+iy) is: "<<f1.x+s1.x<<" + i"<<f1.y+s1.y;
}
int main()
{
    f.getdata();
    s.getdata();
    add(f,s);
    return 0;
}