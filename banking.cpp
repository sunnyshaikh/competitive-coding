#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

static long accno = 800123450;

class Bank
{
    private:
        long acno = accno;
        string name;
        string actype;
        long amt;
    public:
        void setter(long, string, long);
        void getter();
        void set_actype();
        void withdraw(long);
        void deposit(long);
        long balance();
        void check_details();
};

void Bank::setter(long acno, string name, long amt)
{
    this->acno = acno;
    this->name = name;
    this->amt = amt;
    set_actype();
    accno++;
}

void Bank::set_actype()
{
    int choice;
    cout << "\nChoose accoutn type: ";
    cout << "\n1 Savings";
    cout << "\n2 Current";
    cout << "\n3 Fixed";
    cout << "\n4 Recurring\n";
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch(choice)
    {
        case '1':
            this->actype = "Saving";
            break;
        case '2':
            this->actype = "Current";
            break;
        case '3':
            this->actype = "Fixed";
            break;
        case '4':
            this->actype = "Recurring";
            break;
    }
}

void Bank::getter()
{
    cout << "\nYour account no: " << this->acno;
    cout << "\nYour name: " << this->name;
    cout << "\nYour account type: " << this->actype;
    cout << "\nBalance: " << this->amt;
    cout << endl;
}

void help()
{
    cout << "Helpline guide:";
    cout << "\n---------------------------";
    cout << "\nEnter 1 to create new account";
    cout << "\nEnter 2 to see your account details";
    cout << "\nEnter 3 to withdraw amount";
    cout << "\nEnter 4 to deposit amount";
    cout << "\nEnter 5 to check Balanace";
    cout << "\nEnter 6 for help";
    cout << "\nEnter 0 to exit\n";
}

int main()
{
    cout << setw(100) << "\n\n\n\n\n\n\n\n\nWelcome to CPP Bank";
    Sleep(5000);
    system("cls");

    help();

    Bank bank;
    
    int choice;
    string name;
    long amt;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "\nEnter account holder name: ";
                cin >> name;
                cout << "\nEnter amount: ";
                cin >> amt;
                bank.setter(accno, name, amt);     
                break;
        
            case 2:
                bank.getter();
                break;
        }
        cout << "Do you wish to access more(1 / 0): ";
        cin >> choice;
        if(choice == 1)
            continue;
        else
            exit(0);
    }while(choice != 0);

    return 0;
}