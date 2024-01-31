//3.Create a C++ class BankAccount with private data members for account balance.
//Implement a friend function withdraw that allows you to withdraw money from the 
//account while maintaining proper validation.
#include<iostream>
using namespace std;
class bankaccount{
	private:
		int balance;
		int with;
		public:
			void setvalue()
			{
				cout<<"Enter your bank balance: ";
				cin>>balance;
			}
			void withdraw()
			{
				cout<<"How many amount you want to withdraw : ";
				cin>>with;
                balance-=with;
			}

			void showvalue()
			{
				cout<<"Your current bank balance is "<<balance;
			}
			friend void withdraw(bankaccount map1);
}obj1;
void withdraw(bankaccount map1)
{
    map1.withdraw();
    map1.showvalue();
	// obj1.balance=map1.balance-map1.with;
}
int main()
{
	obj1.setvalue();
	withdraw(obj1);

	return 0;
}