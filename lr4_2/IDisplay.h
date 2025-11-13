#pragma once
#include <iostream>
using namespace std;

class IDisplay {
public:
    virtual void display() = 0;
    virtual ~IDisplay() = default;
};
