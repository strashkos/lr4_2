#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2
{
    int d1;
public:
    D1(int a, int b, int c);
    ~D1();
    void showD1();
};
