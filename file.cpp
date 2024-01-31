// "Readind a file content and displaying in Console Window"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("Sentence.DAT", ios::out | ios::binary);
    if (!file)
    {
        cout << "error";
    }
    else
    {
        file << "I am a Good Boy.";
    }
    file.close();
    fstream file1;
    file1.open("Sentence.DAT", ios::in | ios::binary);
    if (!file1)
    {
        cout << endl
             << "File Not Found......";
    }
    else
    {
        char ch;
        while (file1.get(ch))
        {
            cout << ch;
        }
    }
    file1.close();
    return 0;
}