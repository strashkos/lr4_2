#include "D2.h"
#include <iostream>
using namespace std;

D2::D2(int a, int b, int c) : B1(a), B2(b), d2(c) {
    cout << "Constructor D2\n";
}

D2::~D2() {
    cout << "Destructor D2\n";
}

void D2::showD2() {
    cout << "D2::d2 = " << d2 << endl;
    showB1(); 
}
