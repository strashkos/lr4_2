#pragma once
#include "B1.h"
#include "B2.h"

class D2 : public B1, private B2 {
    string text;
public:
    D2(char c, int n, float ff, string s, string t);
    virtual ~D2();
    void ShowInfo() const override;
};
