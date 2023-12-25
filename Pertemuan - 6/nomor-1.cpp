#include <iostream>
using namespace std;
int main()
{
    int angka;
    int nilaiPencarian;
    bool kondisi;
    do
    {
        cout << "Masukan jumlah array yang diinginkan : ";
        cin >> angka;
        if (angka <= 0)
        {
            cout << "Angka harus bilangan positif. Coba Lagi" << endl;
        }

    } while (angka <= 0);

    // dekralasi jumlah array
    int nilai[angka];

    // memasukan nilai ke dalam array
    for (int i = 0; i < angka; i++)
    {
        cout << "Indeks ke - " << i << " : ";
        cin >> nilai[i];
    }

    // Mencari nilai terbesar
    int nilaiTerbesar = nilai[0];

    for (int i = 0; i < angka; i++)
    {
        if (nilai[i] > nilaiTerbesar)
        {
            nilaiTerbesar = nilai[i];
        }
    }

    // Menampilkan nilai Terbesar
    cout << "Nilai Terbesar yang dimasukkan adalah " << nilaiTerbesar << endl;

    //
    cout << "Masukan Nilai yang ingin di cari : ";
    cin >> nilaiPencarian;

    for (int i = 0; i < angka; i++)
    {
        if (nilaiPencarian == nilai[i])
        {
            cout << nilaiPencarian << " Merupakan nilai yang berada di dalam array pada indeks " << i << endl;
            kondisi = true; // Mengubah kondisi menjadi true karena nilai ditemukan
            break;          // Keluar dari loop karena nilai sudah ditemukan
        }
    }

    // Menampilkan pesan jika nilai tidak ditemukan
    if (!kondisi)
    {
        cout << "Nilai yang anda masukkan tidak berada di dalam array." << endl;
    }
}
