#pragma once
#include <iostream>
using namespace std;

class B2 {
protected:
    int y;
public:
    B2(int val = 2);
    virtual ~B2();
    void showB2();
};
