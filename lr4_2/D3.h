#pragma once
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 {
    int d3int;
    double d3double;
public:
    D3(char c1, int n1, float f1, string s1, double d1val,
        char c2, int n2, float f2, string s2, string t2,
        int i, double d);
    virtual ~D3();
    void ShowInfo() const override;
};
