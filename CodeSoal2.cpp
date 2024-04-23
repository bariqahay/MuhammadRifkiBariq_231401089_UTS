#include <iostream>
using namespace std;

int main() {
    int angka;
    while (angka != -1) {
        cout << "Masukkan nilai (masukkan -1 untuk mengakhiri)";
        cin >> angka;
        if (angka < 2 || angka > 10) {
            cout << "Inputan tidak memenuhi batas";
            break;
        }
        else {
            for(int i = 0; i < angka; ++i) {
                for(int j = 0; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            int angkaa;
            angkaa = angka;
            for(int i = angka; i > 0; --i) { //baris
                for(int k = 0; k < angkaa; k++) {
                    cout << " ";
                }
                for(int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
                angkaa++;
            }
        }
    }
    return 0;
}
