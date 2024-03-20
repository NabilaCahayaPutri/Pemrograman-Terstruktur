#include <iostream>
using namespace std;

int main(){
    int num = 10;
    double dbl = 3.14;
    float flt = 2.5f;

ip = &num;
dp = &dbl;
fp = &flt;
ch = &chr;

cout << "Integer value: " << *ip << ", memory address: " << ip << endl;
cout << "Double value: " << *dp << ", memory address: " << dp << endl;
cout << "Float value: " << *fp << ", memory address: " << fp << endl;
cout << "Char value: " << *ch << ", memory address: " << (void*)ch << endl;
}