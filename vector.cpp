#include<iostream>
#include<vector>
class Test{
    private:
        std::string name;
        int id;
    public:
        Test(std::string n,int ID)
        {
            name=n;
            id=ID;
        }
        std::string display()
        {
            return name;
        }

};
int main()
{
    std::vector<Test> v;
    Test obj1("Aarman",5),obj2("Mausham",8);
    v.push_back(obj2);
    v.push_back(obj1);
    for(int i=0;i<v.size();i++)
    {
        std::cout<<"Student "<<i+1<<": "<<v[i].display()<<std::endl;
    }
    // std::cout<<obj.display();
    return 0;
}