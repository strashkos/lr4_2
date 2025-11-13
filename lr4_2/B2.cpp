#include "B2.h"

B2::B2(int val) : y(val) {
    cout << "Constructor B2\n";
}

B2::~B2() {
    cout << "Destructor B2\n";
}

void B2::showB2() {
    cout << "B2::y = " << y << endl;
}
