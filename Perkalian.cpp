#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int baris, kolom;
    cout << "Baris : ";
    cin >> baris;
    cout << "kolom : ";
    cin >> kolom;
    cout << endl;

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            cout << i*j << "\t";
        }
        cout << endl;
    }

    return 0;
}
