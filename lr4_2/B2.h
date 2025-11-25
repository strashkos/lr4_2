#pragma once
#include <iostream>
#include <string>
using namespace std;

class B2 {
protected:
    float f;
    string str;
public:
    B2(float ff = 0, string s = "");
    virtual ~B2();
    virtual void ShowInfo() const;
};
