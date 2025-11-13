#pragma once
#include <iostream>
#include <string>
#include "IInfo.h"
using namespace std;

class B2 : public IInfo {
protected:
    float f;
    string str;
public:
    B2(float ff = 0, string s = "");
    virtual ~B2();
    void ShowInfo() const override;
};
