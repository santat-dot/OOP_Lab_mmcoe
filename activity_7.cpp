#include <iostream>
using namespace std;


double divide(double a, double b) {
    if (b == 0) {
        throw -1;
    }
    return a / b;
}

int main() {
    double num1, num2, result;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "For valid division displays result" << endl;
    cout << "For Invalid division displays -1" << endl << endl;

    try {
        result = divide(num1, num2);  
        cout << "Division is: " << result << endl;
    }
    catch (int errorMsg) {
        cout << errorMsg << endl; 
    }

    return 0;
}
