#include <iostream>
using namespace std;

int main() {
    float angka1, angka2, angka3;

    cout<<"Masukkan angka pertama \t: ";
    cin >> angka1;

    cout << "Masukkan angka kedua \t: ";
    cin >> angka2;

    cout << "Masukkan angka ketiga \t: ";
    cin >> angka3;

    float angka_terbesar;

    if (angka1 >= angka2 && angka1 >= angka3) {
        angka_terbesar = angka1;
    } else if (angka2 >= angka1 && angka2 >= angka3) {
        angka_terbesar = angka2;
    } else {
        angka_terbesar = angka3;
    }

    cout<<"Angka terbesar di antara ketiga angka tersebut adalah : "<<angka_terbesar<<endl;

    return 0;
}
