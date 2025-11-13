#include "B1.h"

B1::B1(char c, int n) : ch(c), num(n) {
    cout << "Constructor B1 -> char: " << ch << ", int: " << num << endl;
}

B1::~B1() {
    cout << "Destructor B1" << endl;
}

void B1::ShowInfo() const {
    cout << "B1: char = " << ch << ", int = " << num << endl;
}
