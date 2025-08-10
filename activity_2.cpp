#include<iostream>
using namespace std;
class employee{
private:
string name,dep,address;
int emp_id,date,con_no;
static int count;

public:
void accept();
inline void display(); 
employee(){
cout<<"you are in default costructor"<<endl;
name="sanket";
dep="IT";
address="mmcoe";
emp_id=13244;
date=3243;
con_no=4355;
count++; // constructor count increment
display();
cout<<endl<<endl;
}

employee(string n , string d , string add, int id ,int con,int dat){
cout<<"you are in parameterised costructor";
name=n;
dep=d;
address=add;
emp_id=id;
date=dat;
con_no=con;
count++; // constructor count increment
cout<<endl<<endl;
}

employee(const employee &e){
cout<<"You are in copy constructor"<<endl;
name = e.name;
dep = e.dep;
address = e.address;
emp_id = e.emp_id;
date = e.date;
con_no = e.con_no;
count++; // constructor count increment
}

~employee(){
count--; // destructor count decrement
cout<<"\n\nYou are in destructor. Remaining objects: " << count << endl;
}

// static function to get count (optional)
static int getCount() {
    return count;
}

};  

// Initialize static member
int employee::count = 0;

void employee::accept() {
  cout << "Enter the name of employee: \n";
  cin>> name ;
  cout<<"enter the department of employee: \n";
  cin>> dep;
  cout<<"enter the contact address:";
  cin>>address;
  cout<<"enter the employee ID :\n";
  cin>>emp_id;
  cout<<"enter the contact no.:\n";
  cin>>con_no;
  cout<< "enter the date of joining :\n";
  cin>>date;
}

void employee::display(){
  cout<<"name:"<<name<<endl;
  cout<<"department:"<<dep<<endl;
  cout<<"address "<<address<<endl;
  cout<<"employee ID:"<<emp_id<<endl;
  cout<<"contact no :"<<con_no<<endl;
  cout<<"date of joining:"<<date<<endl;
}

int main(){
employee c;

cout<<endl<<endl;
employee c2("sanskar", "comp" , "mmcoe", 1000 ,2345,5481);
c2.display();
cout<<endl;

{
employee c3(c2);
cout<<"You are in copy constructor"<<endl;
c3.display();
}

// Dynamic memory allocation
employee* e1 = new employee("Amit", "EXTC", "Pune", 2002, 4567, 1010);
e1->display();
delete e1; // count will reduce

return 0;

}

