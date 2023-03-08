#include <iostream>
#include <string>

using namespace std;

class Account 
{
public:
    string account_type;
    double balance;

    Account(string type, double balance) 
    {
        account_type = type;
        this->balance = balance;
    }

    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposit successful." << endl;
    }

    void withdraw(double amount) 
    {
        if (amount > balance) 
        {
            cout << "Insufficient balance." << endl;
        } 
        else 
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
    }

    void display_balance() 
    {
        cout << "Account type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account 
{
public:
    SavingsAccount(double balance) : Account("Savings", balance) {}
    

    void add_interest() 
    {
        double interest_rate = 0.05;
        double interest = balance * interest_rate;
        balance += interest;
        cout << "Interest added. New balance: " << balance << endl;
    }

};

int main() 
{
    string account_choice;
    double balance;

    cout << "Welcome to our bank!" << endl;
    cout << "Please choose an account type: (savings/current)" << endl;
    cin >> account_choice;

    if (account_choice == "savings") 
    {
        cout << "Enter initial balance for savings account (must be at least $1000): ";
        cin >> balance;

        if (balance >= 1000) 
        {
            SavingsAccount s_a(balance);
            s_a.display_balance();

            string operation_choice;
            double operation_amount;
            cout << "Please choose an operation: (deposit/withdraw/add interest)" << endl;
            cin >> operation_choice;

            if (operation_choice == "deposit") 
            {
                cout << "Enter deposit amount: ";
                cin >> operation_amount;
                s_a.deposit(operation_amount);
            } 
            else if (operation_choice == "withdraw") 
            {
                cout << "Enter withdrawal amount: ";
                cin >> operation_amount;
                s_a.withdraw(operation_amount);
            } 
            else if (operation_choice == "add interest") 
            {
                s_a.add_interest();
            } 
            else 
            {
                cout << "Invalid operation choice. Please choose 'deposit', 'withdraw', or 'add interest'." << endl;
            }

            s_a.display_balance();
        } 
        else 
        {
            cout << "Initial balance must be at least $1000 for a savings account." << endl;
        }
    } 
    else if (account_choice == "current") 
    {
        cout << "Enter initial balance for current account (must be at least $5000): ";
        cin >> balance;

        if (balance >= 5000) 
        {
            Account c_a("Current", balance);
            c_a.display_balance();
         
            string operation_choice;
            double operation_amount;
            cout << "Please choose an operation: (deposit/withdraw)" << endl;
            cin >> operation_choice;

            if (operation_choice == "deposit") 
            {
                cout << "Enter deposit amount: ";
                cin >> operation_amount;
                c_a.deposit(operation_amount);
            } 
            else if (operation_choice == "withdraw") 
            {
                if (c_a.balance - operation_amount < 5000) 
                {
                    cout << "You cannot withdraw money because there is less money in your account than the minimum balance." << endl;
                } 
                else 
                {
                    cout << "Enter withdrawal amount: ";
                    cin >> operation_amount;
                    c_a.withdraw(operation_amount);
                }
            } 
            else 
            {
                cout << "Invalid operation choice. Please choose 'deposit', 'withdraw'" << endl;
            }
        } 
        else 
        {
            cout << "Initial balance must be at least $5000 for a current account." << endl;
        }
    } 
    else 
    {
        cout << "Invalid account choice. Please choose 'savings' or 'current'." << endl;
    }

    return 0;
}
