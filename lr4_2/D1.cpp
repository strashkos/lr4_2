#include "D1.h"
#include <iostream>
using namespace std;

D1::D1(char c, int n, float ff, string s, double dd)
    : B1(c, n), B2(ff, s), d1(dd) {
    cout << "Constructor D1 -> double: " << d1 << endl;
}

D1::~D1() {
    cout << "Destructor D1" << endl;
}

void D1::ShowInfo() const {
    cout << "D1: (inherits private B1, public B2), double = " << d1 << endl;
}
