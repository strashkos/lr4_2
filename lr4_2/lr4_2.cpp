#include <iostream>
#include "D3.h"
#include "IDisplay.h"
using namespace std;

class MyClass : public IDisplay {
public:
    void display() override {
        cout << "Hello from interface IDisplay\n";
    }
};

int main() {
    cout << "=== Create D3 object ===\n";
    D3 obj(1, 2, 3, 4, 5, 6);
    obj.showAll();

    cout << "\n=== Interface example ===\n";
    MyClass m;
    m.display();

    return 0;
}
