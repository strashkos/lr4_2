#pragma once
#include <iostream>
#include "IInfo.h"
using namespace std;

class B1 : public IInfo {
protected:
    char ch;
    int num;
public:
    B1(char c = ' ', int n = 0);
    virtual ~B1();
    void ShowInfo() const override;
};
