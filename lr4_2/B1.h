#pragma once
#include <iostream>
using namespace std;

class B1 {
protected:
    char ch;
    int num;
public:
    B1(char c = ' ', int n = 0);
    virtual ~B1();
    virtual void ShowInfo() const;
};
