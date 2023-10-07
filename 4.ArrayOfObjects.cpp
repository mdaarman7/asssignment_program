// 4. Array Of Objects
// Program to demonstrate the usage of arrays of objects in a library system, where each object represents a book
#include <iostream>
using namespace std;
class Library;
class Book
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
        cin >> id >> name;
    }
    friend class Library;
};
class Library
{
private:
    int num;
public:
    void display()
    {
        Book obj[3];
        for (int i = 0; i < 3; i++)
        {
            obj[i].getdata();
            cout << endl
                 << "Book " << i + 1 << " : " << obj[i].id << endl
                 << "Name : " << obj[i].name;
        }
    }
} test;
int main()
{
    test.display();
    return 0;
}