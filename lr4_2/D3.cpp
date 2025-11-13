#include "D3.h"
#include <iostream>
using namespace std;

D3::D3(int a, int b, int c, int d, int e, int f) :
    D1(a, b, c), D2(d, e, f), d3(99) {
    cout << "Constructor D3\n";
}

D3::~D3() {
    cout << "Destructor D3\n";
}

void D3::showAll() {
    cout << "D3::d3 = " << d3 << endl;
    showD2(); 
}
