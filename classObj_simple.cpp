// "Asking User id and name of book and displaying it using Class and Object"
#include <iostream>
using namespace std;
class Library
{
private:
    int id;
    char name[20];

public:
    void getdata()
    {
        cout << endl
             << "Enter id and name of the book: ";
        fflush(stdin);
        cin >> id;
        cin.getline(name,20);
    }
    void display()
    {
        cout << endl
             << "Book : " << id << endl
             << "Name : " << name;
    }
} test[3];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        test[i].getdata();
    }
    for (int i = 0; i < 3; i++)
    {
        test[i].display();
    }
    return 0;
}