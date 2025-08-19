#include <iostream>
using namespace std;

class staff_m {
protected:
string names, depr;
int id;
public:
void accept1();
void display1();
};
void staff_m::accept1() {
cout << "Enter your names : ";
cin >> names;
cout << "Enter your dept. : ";
cin >> depr;
cout << "Enter your ID : ";
cin >> id;
}
void staff_m::display1() {
cout << "The names is : \n" << names << endl;
cout << "The names of the dept. is :\n" << depr << endl;
cout << "Your ID is : " << id << endl;
}

class teacher : public staff_m {
private:
int experiance;
string sub;
public:
void accept2();
void display2();
};
void teacher::accept2() {
accept1();
cout << "Enter your subject : ";
cin >> sub;
cout << "Enter your experiance : ";
cin >> experiance;
}
void teacher::display2() {
display1();
cout << "The subject is :\n" << sub << endl;
cout << "The experiance is :\n" << experiance << endl;
}

class supportstaff_m : public staff_m {
private:
string aos;
public:
void accept3();
void display3();
};
void supportstaff_m::accept3() {
accept1();
cout << "Enter the area of support : ";
cin >> aos;
}
void supportstaff_m::display3() {
display1();
cout << "The area of support : " << aos << endl;
}
int main() {
int choice;
do {
cout << "\nMenu Driven\n";
cout << "1. Enter Teacher Details\n";
cout << "2. Enter Supporting staff_m Details\n";
cout << "3. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1: {
int n;
cout << "Enter the number of Teachers: ";
cin >> n;
teacher t[n];
for (int i = 0; i < n; i++) {
cout << "\nEnter details for Teacher " << i + 1 << "\n";
t[i].accept2();
}
for (int i = 0; i < n; i++) {
cout << "\nDetails of Teacher " << i + 1 << "\n";
t[i].display2();
}
break;
}
case 2: {
int n;
cout << "Enter the number of Supporting staff_m: ";
cin >> n;
supportstaff_m s[n];
for (int i = 0; i < n; i++) {
cout << "\nEnter details for Supporte staff members " << i + 1 << "\n";
s[i].accept3();
}
for (int i = 0; i < n; i++) {
cout << "\nDetails of Support staff members " << i + 1 << "\n";
s[i].display3();
}
break;
 }

default:
cout << "Invalid choice.";
}
} while (choice != 3);
return 0;
}
