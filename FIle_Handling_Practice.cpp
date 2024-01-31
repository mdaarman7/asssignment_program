// "File Handing For Writing and Reading from a File using Class and Object"
#include<iostream>
#include<fstream>
using namespace std;
class Test{
    private:
        char name[50];
        int age;
        char add[50];
    public:
        void getdata()
        {
            cout<<"Enter Name ,age and address: ";
            cin.getline(name,50);
            cin>>age;
            cin.ignore();
            cin.getline(add,50);
            cout<<endl;
        }
        void display()
        {
            cout<<endl<<"Name: "<<name;
            cout<<endl<<"Age: "<<age;
            cout<<endl<<"Address: "<<add;
            cout<<endl;
        }
};
int main()
{   
    Test obj[5],obj1[5];
    int i=0;
    fstream file;
    file.open("Input.DAT",ios::out|ios::binary);
    if(!file)
    {
        cout<<"Error";
    }
    else
    {
        for(i=0;i<5;i++)
        {
            obj[i].getdata();
        }
        file.write((char*)&obj,sizeof(obj));
    }
    file.close();
    fstream file1;
    file1.open("Input.DAT",ios::in|ios::binary);
    if(!file1)
    {
        cout<<endl<<endl<<"NO file found";
    }
    else
    {
        file1.read((char*)&obj1,sizeof(obj1));
        for(i=0;i<5;i++)
        {
            obj1[i].display();
        }
        // obj1.display();
    }
    file1.close();
    return 0;
}