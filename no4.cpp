#include <iostream>
using namespace std;
class BankAccount 
{
public:
    int accountNumber;
    string accountHolderName;
    float balance;
    void display() 
	{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};
int main()
{
    BankAccount account;
    account.accountNumber = 123456;
    account.accountHolderName = "Rahul";
    account.balance = 5000;
    account.display();
    return 0;
}
