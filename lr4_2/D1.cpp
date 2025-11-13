#include "D1.h"
#include <iostream>
using namespace std;

D1::D1(int a, int b, int c) : B1(a), B2(b), d1(c) {
    cout << "Constructor D1\n";
}

D1::~D1() {
    cout << "Destructor D1\n";
}

void D1::showD1() {
    cout << "D1::d1 = " << d1 << endl;
    showB2();
}
