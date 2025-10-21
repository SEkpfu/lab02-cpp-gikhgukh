#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Vvesti chislo: ";
    cin >> n;

    if (n % 10 == 1) {
        if (n % 100 != 11){
            cout << "On sel na " << n << " stul" << endl;
        }
    }
    else if (n % 10 >= 2 & n % 10 <= 4) {
        if (n % 100 != 12 & n % 100 != 13 & n % 100 != 14){
            cout << "On sel na " << n << " stula" << endl;
        }
    }
    if (n % 100 == 11) {
        cout << "On sel na " << n << " stulyev" << endl;
    }
    if (n % 100 == 12) {
        cout << "On sel na " << n << " stulyev" << endl;
    }
    if (n % 100 == 13) {
        cout << "On sel na " << n << " stulyev" << endl;
    }
    if (n % 100 == 14) {
        cout << "On sel na " << n << " stulyev" << endl;
    }
    else if (n % 100 != 11 & n % 100 != 12 & n % 100 != 13 & n % 100 != 14) {
        cout << "On sel na " << n << " stulyev" << endl;
    }
    return 0;
}