#include <iostream>
#include "D3.h"
using namespace std;

int main() {
    char ch1, ch2;
    int n1, n2;
    float f1, f2;
    string s1, s2, t2;
    double d1val, d3double;
    int d3int;

    cout << "Enter data for first B1 and B2 (for D1):" << endl;
    cout << "B1 char: "; cin >> ch1;
    cout << "B1 int: "; cin >> n1;
    cout << "B2 float: "; cin >> f1;
    cout << "B2 string: "; cin >> s1;
    cout << "D1 double: "; cin >> d1val;

    cout << "\nEnter data for second B1 and B2 (for D2):" << endl;
    cout << "B1 char: "; cin >> ch2;
    cout << "B1 int: "; cin >> n2;
    cout << "B2 float: "; cin >> f2;
    cout << "B2 string: "; cin >> s2;
    cout << "D2 text: "; cin >> t2;

    cout << "\nEnter D3 values (int, double): ";
    cin >> d3int >> d3double;

    cout << "\n=== Object creation ===" << endl;
    {
        D3 obj(ch1, n1, f1, s1, d1val,
            ch2, n2, f2, s2, t2,
            d3int, d3double);

        cout << "\nClass D1 (inherits from private B1, public B2)" << endl;
        cout << "Class D2 (inherits from public B1, private B2)" << endl;
        cout << "Class D3 (inherits from private D1, public D2)" << endl;

        cout << "\n--- ShowInfo() demonstration ---" << endl;
        obj.ShowInfo();
    }

    cout << "\n=== Object destruction ===" << endl;
    return 0;
}
