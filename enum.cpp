// "Enumeration Example"
#include<iostream>
using namespace std;
enum Weeks{Sunday=1, Monday=3, Tuesday=2, Wednesday, Thursday, Friday, Saturday}Today;
int main()
{
    Today= Monday;
    cout<<"Day= "<< Today;
    Today= Tuesday;
    cout<<endl<<"Next day= "<< Today;
    Today= Wednesday;
    cout<<endl<<"Next day= "<< Today;
    return 0;
}