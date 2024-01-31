// 1. Static Data Member
// "Program to add or remove books from the inventory."
#include <iostream>
using namespace std;
class Book
{
private:
    static int totnum;
    int no_book;

public:
    static void showvalue()
    {
        cout << "totnum: " << totnum;
    }
    void add()
    {
        cout << "Enter No. of Books you want to add: ";
        cin >> no_book;
        totnum = totnum + no_book;
        cout<<endl<<"Number of Book after adding: "<<totnum;
    }
    void remove()
    {
        cout << "Enter No. of Books you want to remove: ";
        cin >> no_book;
        totnum = totnum - no_book;
        cout<<endl<<"Number of Book after removing: "<<totnum;
    }
};
int Book::totnum = 10;
int main()
{
    Book first;
    int num;
flag:
    first.showvalue();
    cout << endl
         << "1. Add" 
         << endl
         << "2. Remove";
    cout << endl
         << "Choose one:";
    cin >> num;
    if (num == 1)
    {
        first.add();
    }
    else if (num == 2)
    {
        first.remove();
    }
    else
    {
        cout << endl
             << "Enter Valid Input!!!";
        goto flag;
    }

    return 0;
}