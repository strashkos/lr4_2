#pragma once
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 {
    int d3;
public:
    D3(int a, int b, int c, int d, int e, int f);
    ~D3();
    void showAll();
};
