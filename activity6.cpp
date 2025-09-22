#include <iostream>
#include <string.h>
using namespace std;

int main() {
    double num1, num2, result;

   
    cout << "first number: ";
    cin >> num1;
   
    cout << "second number: ";
    cin >> num2;
   
    cout<<"For valid division displays result"<<endl;
    cout <<"For Invalid division displays -1"<<endl<<endl<<endl;

    try {
       
        if (num2 == 0) {
            throw -1;  
        }
       
        result = num1 / num2;
       
       
        cout << "division is: " << result << endl;
    }
    catch (int errorMsg) {  
        cout << errorMsg << endl;  
    }

    return 0;
}
