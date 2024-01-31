// 3. Friend function(withdraw) to withdraw the amount.
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int balance;
    int amt;

public:
    BankAccount()
    {
        balance = 15000;
        cout << "Your Balance: " << balance;
    }
    void getdata()
    {
        cout << endl
             << "Enter amount to withdraw: ";
        cin >> amt;
    }
    friend void withdraw(BankAccount);
};
void withdraw(BankAccount temp)
{
    cout << endl
         << "The withdrawn amount is: " << temp.amt;
    cout << endl
         << "Balance Left: " << temp.balance - temp.amt;
}
int main()
{
    BankAccount amount;
    amount.getdata();
    withdraw(amount);
    return 0;
}
