#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
    int ukuranKetupat = 9;
    int diagonalKetupat = (ukuranKetupat * 2) - 1;
    int baris, kolom;
    int awal, akhir;

    for (baris = 1; baris <= diagonalKetupat; baris++) {
        if (baris == ukuranKetupat) {  // tengah
            awal = 0;
            akhir = diagonalKetupat + 1;
        } else if (baris < ukuranKetupat) {  //atas
            awal = ukuranKetupat - baris;
            akhir = ukuranKetupat + baris;
        } else {  // bwh
            awal = baris - ukuranKetupat;
            akhir = diagonalKetupat - (baris - ukuranKetupat) + 1;
        }
        // if (baris < ukuranKetupat && baris != ukuranKetupat) { //segitiga
        // atas
        //     awal = ukuranKetupat - baris;
        //     akhir = ukuranKetupat + baris;
        // } else if (baris > ukuranKetupat && baris != ukuranKetupat) {
        // //segitiga bawah
        //     awal = baris - ukuranKetupat;
        //     akhir = diagonalKetupat - (baris - ukuranKetupat) + 1;
        // } else { // tengah
        //     awal = 0;
        //     akhir = diagonalKetupat + 1;
        // }
        int bilangan = 0;
        for (kolom = 1; kolom <= diagonalKetupat; kolom++) {
            if (kolom > awal && kolom < akhir) {
                if (kolom > ukuranKetupat) {
                    bilangan--;
                } else {
                    bilangan++;
                }
                cout << setw(3) << right << bilangan;
            } else {
                cout << setw(3) << right << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
