// "Multiple Inheritance Example"
#include <iostream>
using namespace std;
class Son1
{
    private:
        int pocket_money;
    public:
        Son1()
        {
            pocket_money = 100;
        }
        int return_son1_money()
        {
            return pocket_money;
        }
};
class Son2
{
    private:
        int pucket_money;

    public:
        Son2()
        {
            pucket_money = 300;
        }
        int return_son2_money()
        {
            return pucket_money;
        }
};
class Father: public Son1, public Son2
{
    private:
        int total_money=1000;
    public:
        void left_money()
        {
            cout<<endl<<"Father Money Left: "<<total_money-return_son1_money()-return_son2_money();
        }
}tran;
int main()
{
    tran.left_money();
    return 0;
}