#pragma once
#include "B1.h"
#include "B2.h"

class D2 : public B1, private B2 {
    int d2;
public:
    D2(int a, int b, int c);
    ~D2();
    void showD2();
};
