#include <iostream>
using namespace std;

class shape {
public:
float x, y;
void get_data(){
cout << "2 values: ";
cin >> x >> y;
}
virtual void displayArea() = 0;
};

class triangle : public shape {
public:
void displayArea(){
cout << "Area for Triangle" << 0.5 * x * y << endl;
}
};

class rectangle : public shape {
public:
void displayArea(){
cout<<"Area for Rectangle :" << x * y << endl;
}
};
int main(){
shape* ptr;
triangle t;
rectangle r;
ptr = &t;
ptr->get_data();
ptr->displayArea();
ptr = &r;
ptr->get_data();
ptr->displayArea();
return 0;
}
