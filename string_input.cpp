// "Input for a Sentence or more words."
#include<iostream>
using namespace std;
int main()
{
    string name;
    //char name[40];
    cout<<"Enter your name: ";
    //cin.getline(name,40);
    getline(cin,name);
    cout<<endl<<name;
    return 0;
}