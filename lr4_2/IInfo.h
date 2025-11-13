#pragma once
#include <iostream>
using namespace std;
class IInfo {
public:
    virtual void ShowInfo() const = 0; 
    virtual ~IInfo() = default;       
};
