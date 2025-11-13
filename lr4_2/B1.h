#pragma once
#include <iostream>
using namespace std;

class B1 {
protected:
    int x;
public:
    B1(int val = 1);
    virtual ~B1();
    void showB1();
};
