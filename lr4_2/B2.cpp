#include "B2.h"

B2::B2(float ff, string s) : f(ff), str(s) {
    cout << "Constructor B2 -> float: " << f << ", string: " << str << endl;
}

B2::~B2() {
    cout << "Destructor B2" << endl;
}

void B2::ShowInfo() const {
    cout << "B2: float = " << f << ", string = " << str << endl;
}
