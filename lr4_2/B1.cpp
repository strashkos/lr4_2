#include "B1.h"

B1::B1(int val) : x(val) {
    cout << "Constructor B1\n";
}

B1::~B1() {
    cout << "Destructor B1\n";
}

void B1::showB1() {
    cout << "B1::x = " << x << endl;
}
