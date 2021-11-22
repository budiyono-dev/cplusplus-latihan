#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
    int ukuranDiamon = 9;
    int loop = (ukuranDiamon * 2) - 1;
    int baris;
    int kolom;
    int cetak = 0;
    int awal, akhir;

    for (baris = 1; baris <= loop; baris++) {
        if (baris < ukuranDiamon && baris != ukuranDiamon) {
            awal = ukuranDiamon - baris;
            akhir = ukuranDiamon + baris;
        } else if (baris > ukuranDiamon && baris != ukuranDiamon) {
            awal = baris - ukuranDiamon;
            akhir = loop - (baris - ukuranDiamon) + 1;
        } else {
            awal = 0;
            akhir = loop + 1;
        }
        cetak = 0;
        for (kolom = 1; kolom <= loop; kolom++) {
            if (kolom > awal && kolom < akhir) {
                if (kolom > ukuranDiamon) {
                    cetak--;
                } else {
                    cetak++;
                }
                cout << setw(3) << right << cetak;
            } else {
                cout << setw(3) << right << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
