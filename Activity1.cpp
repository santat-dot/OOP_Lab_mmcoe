#include<iostream>
#include<string>
using namespace std;

class bank {
public:
    string name;
    string actype;
    int ac_no;
    double balance;

    void accept();
    void display();
    void deposite();
    void withdraw();

    bank(string n, string accty, int acnum, double bal) {  //Parameterized constructor
        name = n;  
        actype = accty;
        ac_no = acnum;
        balance = bal;
    }

    bank() {}  // Default constructor
};

void bank::accept() {  //accept function to accept the values
    cout << "enter your name:\n";
    cin >> name;

    cout << "Enter account type:\n";
    cin >> actype;

    cout << "Enter your account number:\n";
    cin >> ac_no;

    cout << "Enter the balance:\n";
    cin >> balance;
}

void bank::display() {   //display function to display the values
    cout << "Name: " << name << endl;
    cout << "Account Type: " << actype << endl;
    cout << "Account No: " << ac_no << endl;
    cout << "Balance: " << balance << endl;
}

void bank::withdraw() {    //withdraw calculations and displays the total balance 
    double amount;
    cout << "Enter the withdraw amount:\n";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient balance!\n";
    } else {
        balance -= amount;
        cout << "balance: " << balance << endl;
    }
}

void bank::deposite() {   //deposite calculations and displays the total balance 
    double dep;
    cout << "Enter the deposit amount:\n";
    cin >> dep;

    balance += dep;
    cout << "balance: " << balance << endl;
}

int main() {    //main function
    string n, accty;
    double balance;
    int acnum, opt;

    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter account number: ";
    cin >> acnum;
    cout << "Enter account type: ";
    cin >> accty;
    cout << "Enter balance: ";
    cin >> balance;

    bank obj1(n, accty, acnum, balance);

    do {
        cout << "\nMenu:\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "Enter your opt: ";
        cin >> opt;

        switch (opt) {    //switch case to check the conditions
            case 1:
                obj1.display();
                break;
            case 2:
                obj1.deposite();
                break;
            case 3:
                obj1.withdraw();
                break;

            default:
                cout << "Invalid opt.\n";
                break;
        }
    } while (opt != 3);

    return 0;
}
