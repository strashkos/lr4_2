#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2 {
    double d1;
public:
    D1(char c, int n, float ff, string s, double dd);
    virtual ~D1();
    void ShowInfo() const override;
};
