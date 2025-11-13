#include "D3.h"
#include <iostream>
using namespace std;

D3::D3(char c1, int n1, float f1, string s1, double d1val,
    char c2, int n2, float f2, string s2, string t2,
    int i, double d)
    : D1(c1, n1, f1, s1, d1val),
    D2(c2, n2, f2, s2, t2),
    d3int(i), d3double(d)
{
    cout << "Constructor D3 -> int: " << d3int << ", double: " << d3double << endl;
}

D3::~D3() {
    cout << "Destructor D3" << endl;
}

void D3::ShowInfo() const {
    cout << "D3: (inherits private D1, public D2), int = "
        << d3int << ", double = " << d3double << endl;
}
