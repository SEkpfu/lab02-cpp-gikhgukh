#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cout << "Vvesti chislo x: ";
    cin >> x;
    double n;
    double pi = M_PI;

    if (x > 2 && x <= 5) {
        n = 5.5 + x * x * x;
    }
    else if (x > 5) {
        n = cos(pi / 2 + pi * x);
    }
    else if (x <= 2) {
        n = 2 / (x - 3) + pow(abs(x + 1), 0.5);
    }
    cout << "n = " << n << endl;

    return 0;
}