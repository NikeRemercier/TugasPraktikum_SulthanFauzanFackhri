#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

// ... (your existing code)

void generatePembayaran(const string nama, const string penerbangan, const string maskapai)
{
    srand(time(0));
    int randomNum = rand() % 10000;
    string kodeUnik = to_string(randomNum);

    time_t now = time(0);
    tm *ltm = localtime(&now);

    string tanggal = to_string(1900 + ltm->tm_year) + '-' +
                     to_string(1 + ltm->tm_mon) + '-' +
                     to_string(ltm->tm_mday);

    string waktu = to_string(ltm->tm_hour) + ':' +
                   to_string(ltm->tm_min) + ':' +
                   to_string(ltm->tm_sec);

    string kode_pembayaran;

    cout << "===== Informasi Pembayaran =====\n";
    cout << "Nama Pelanggan : " << nama << "\n";
    cout << "Tanggal : " << tanggal << "\n";
    cout << "Waktu : " << waktu << "\n";
    cout << "Kode Pembayaran : " << kodeUnik << "\n";
    cout << "================================\n";

    do
    {
        cout << "Konfirmasi Kode Pembayaran : ";
        cin >> kode_pembayaran;

        if (kode_pembayaran == kodeUnik)
        {
            cout << "Kode Pembayaran yang dimasukkan salah. Coba lagi." << endl;
        }

    } while (kode_pembayaran == kodeUnik);

    cout << "\nTransaksi Berhasil. Keselamatan Anda adalah Prioritas Kami.\n";
}

int main()
{
    // ... (your existing code)

    // After obtaining the necessary information, call the automatic payment generation
    generatePembayaran(nama, flights.domestik, flights.maskapai);

    return 0;
}
