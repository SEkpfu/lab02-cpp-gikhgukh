#include <iostream>
#include <string>
using namespace std;

int main() {
    int god;
    cout << "Vvesti nomer goda: ";
    cin >> god;

    string zh[] = {
        "krisi", "korovi", "tigra", "zaytsa", "drakona", "zmei", "loshadi", "ovsi", "obezyani", "kuritsy", "sobaki", "svinki"
    };
//Разница от 2020 года
    int offset = (god - 2020) % 12;


    if (offset < 0) {
        offset += 12;
    }

    cout << god << " god" " - god " << zh[offset] << "." << endl;

    return 0;
}
