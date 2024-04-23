#include <iostream>
using namespace std;

int main() {
    cout << "Masukkan Nilai (masukkan -1 untuk mengakhiri)" << endl;
    float number = 0, hasilakhir = 0, number1 = 0;
    int i = 0;
    while(number != -1) {
        ++i;
        cout << "Nilai ke-" << i << ": ";
        cin >> number;
        if (number != -1) 
            number1 += number;
    }
    if (i > 1) {
        hasilakhir = number1 / (i - 1);
        cout << "Nilai Rata-rata: " << hasilakhir;
    } else {
        cout << "Tidak ada data yang dimasukkan.";
    }
    return 0;
}
