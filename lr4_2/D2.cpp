#include "D2.h"
#include <iostream>
using namespace std;

D2::D2(char c, int n, float ff, string s, string t)
    : B1(c, n), B2(ff, s), text(t) {
    cout << "Constructor D2 -> text: " << text << endl;
}

D2::~D2() {
    cout << "Destructor D2" << endl;
}

void D2::ShowInfo() const {
    cout << "D2: (inherits public B1, private B2), text = " << text << endl;
}
