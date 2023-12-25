#include <iostream>
#include <ctime>

using namespace std;

struct pesawat
{
    int jenis_penerbangan;
    string domestik;
    string internasional;
    string maskapai;
    int harga;
    bool penerbangan;
};

void tampilkanArray(string array[], int ukuran)
{
    for (int i = 0; i < ukuran; ++i)
    {
        cout << array[i] << "\n";
    }
    cout << endl;
}
void tampilkanArray_mas(string array[], int ukuran) // MASKAPAI
{
    for (int i = 0; i < ukuran; ++i)
    {
        cout << array[i] << "\n";
    }
    cout << endl;
}

bool sertifkes()
{
    char sertif;
    cout << "Apakah Anda memiliki sertifikat Kesehatan? (Y/N): ";
    cin >> sertif;
    return (sertif == 'Y' || sertif == 'y');
}

bool pasvisa()
{
    char pasvis;
    cout << "Apakah Anda memiliki Paspor dan Visa? (Y/N): ";
    cin >> pasvis;
    return (pasvis == 'Y' || pasvis == 'y');
}

bool isDataCorrect()
{
    char response;
    cout << "Apakah Data yang dimasukkan sudah benar? (Y/N): ";
    cin >> response;
    return (response == 'Y' || response == 'y');
}

string generatePaymentCode()
{
    // Dapatkan waktu saat ini
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // Buat kode pembayaran berdasarkan tanggal dan waktu
    string paymentCode =
        to_string(1900 + ltm->tm_year) +
        to_string(1 + ltm->tm_mon) +
        to_string(ltm->tm_mday) +
        to_string(ltm->tm_hour) +
        to_string(ltm->tm_min) +
        to_string(ltm->tm_sec);
    return paymentCode;
}

string nama;
string no, kode;

int main()
{
    pesawat flights;
    bool dataCorrect = false;
    string penerbangan_domestik[10] = {"JAKARTA", "BANDUNG", "BOGOR", "BALI", "PADANG", "PONTIANAK", "SOLO", "BALIKPAPAN", "MALANG", "ACEH"};               // Array penerbangan_domestik
    string penerbangan_internasional[10] = {"MEDINAH", "QATAR", "TOKYO", "SYDNEY", "SEOUL", "BANGKOK", "KUALA LUMPUR", "SINGPORE", "SHANGHAI", "HONGKONG"}; // Array penerbangan_internasional
    string maskapai_pesawat[5] = {"GARUDAINDONESIA", "WINGSAIR", "LIONAIR", "BATIKAIR", "CITILINK"};

    cout << "------------------------------------------------------------------" << endl;
    cout << "                  SELAMAT DATANG DI TIKET.IO" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "\nPilih Penerbangan" << endl;
    cout << "1. Penerbangan Domestik" << endl;
    cout << "2. Penerbangan Internasional" << endl;

    cout << "\nMasukan pilihan penerbangan : ";
    cin >> flights.jenis_penerbangan;

    switch (flights.jenis_penerbangan)
    {
    case 1:
        cout << "\nANDA MEMILIH PENERBANGAN DOMESTIK" << endl;
        cout << "Tujuan Penerbangan Domestik :\n";
        tampilkanArray(penerbangan_domestik, 10);
        do
        {
            flights.penerbangan = true; // Tetapkan ke true di awal setiap iterasi loop
            cout << "Masukan Penerbangan Domestik yang dituju (Gunakan Huruf KAPITAL) : ";
            cin >> flights.domestik;
            for (int i = 0; i < 10; ++i) // Mengecek apakah nilai penerbangan domestik berada dalam array penerbangan_domestik
            {
                if (flights.domestik == penerbangan_domestik[i])
                {
                    flights.penerbangan = false;
                    break;
                }
            }
            if (flights.penerbangan)
            {
                cout << "Penerbangan Domestik yang dituju tidak ada. Coba lagi." << endl;
            }
        } while (flights.penerbangan); // Akhir dari perulangan

        cout << "Maskapai Pesawat yang tersedia :\n";
        tampilkanArray_mas(maskapai_pesawat, 5);
        do
        {
            flights.penerbangan = true; // Tetapkan ke true di awal setiap iterasi loop
            cout << "Masukan Maskapai yang Anda inginkan (Gunakan Huruf KAPITAL) : ";
            cin >> flights.maskapai;

            for (int i = 0; i < 5; ++i) // Mengecek apakah nilai maskapai berada dalam array maskapai
            {
                if (flights.maskapai == maskapai_pesawat[i])
                {
                    flights.penerbangan = false;
                    break;
                }
            }
            if (flights.penerbangan)
            {
                cout << "Maskapai yang dipilih tidak ada. Coba lagi." << endl;
            }
        } while (flights.penerbangan); // Akhir dari perulangan

        cout << "\nMasukkan Nama anda: ";
        cin >> nama;
        cout << "Masukaan No. Identitas anda: ";
        cin >> no;
        cout << "Masukkan Jumlah tiket yang anda diinginkan: ";
        cin >> flights.harga;
        sertifkes();
        cout << endl;
        cout << "-----------------------------TIKET.IO-----------------------------" << endl;
        cout << "---------------------------" << flights.domestik << "-------------------------------" << endl;
        cout << "---------------------------" << flights.maskapai << "-------------------------------" << endl;
        cout << "Nama : " << nama << endl;
        cout << "No. Identitas : " << no << endl;
        cout << "Penerbangan Domestik yang dituju adalah " << flights.domestik << endl;
        cout << "Maskapai yang dipilih adalah " << flights.maskapai << endl;

        if (flights.domestik == penerbangan_domestik[0])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 1.000.000";
            cout << "\nTotal yang Anda Bayar: " << 1000000 * flights.harga;
            cout << "\nNo. Gate = 5" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[1])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 1.500.000";
            cout << "\nTotal yang Anda Bayar: " << 1500000 * flights.harga;
            cout << "\nNo. Gate = 4" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[2])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 2.000.000";
            cout << "\nTotal yang Anda Bayar: " << 2000000 * flights.harga;
            cout << "\nNo. Gate = 3" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[3])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 2.500.000";
            cout << "\nTotal yang Anda Bayar: " << 2500000 * flights.harga;
            cout << "\nNo. Gate = 2" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[4])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 3.000.000"; //
            cout << "\nTotal yang Anda Bayar: " << 3000000 * flights.harga;
            cout << "\nNo. Gate = 1" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[5])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 3.500.000";
            cout << "\nTotal yang Anda Bayar: " << 3500000 * flights.harga;
            cout << "\nNo. Gate = 4" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[6])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 4.000.000";
            cout << "\nTotal yang Anda Bayar: " << 4000000 * flights.harga;
            cout << "\nNo. Gate = 3" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[7])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 4.500.000";
            cout << "\nTotal yang Anda Bayar: " << 4500000 * flights.harga;
            cout << "\nNo. Gate = 2" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[8])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 5.000.000";
            cout << "\nTotal yang Anda Bayar: " << 5000000 * flights.harga;
            cout << "\nNo. Gate = 1" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[9])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. 5.500.000";
            cout << "\nTotal yang Anda Bayar: " << 5500000 * flights.harga;
            cout << "\nNo. Gate = 5" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        do
        {
            cout << "\nEnter passenger information:\n";
            // Implement input for passenger information

            // Step 4: Display confirmation
            dataCorrect = isDataCorrect();
        } while (!dataCorrect);
        break;

    case 2:
        cout << "\nANDA MEMILIH PENERBANGAN INTERNASIONAL" << endl;
        cout << "\nTujuan Penerbangan Internasional :\n";
        tampilkanArray(penerbangan_internasional, 10);
        do
        {
            flights.penerbangan = true; // Tetapkan ke true di awal setiap iterasi loop
            cout << "Masukan Penerbangan Internasional yang dituju(Gunakan Huruf KAPITAL): ";
            cin >> flights.internasional;

            for (int i = 0; i < 10; ++i) // Mengecek apakah nilai internasional berada dalam array penerbangan_internasional
            {
                if (flights.internasional == penerbangan_internasional[i])
                {
                    flights.penerbangan = false;
                    break;
                }
            }
            if (flights.penerbangan)
            {
                cout << "Penerbangan Internasional yang dituju tidak ada. Coba lagi." << endl;
            }
        } while (flights.penerbangan); // Akhir dari perulangan

        cout << "Maskapai Pesawat yang tersedia :\n";
        tampilkanArray_mas(maskapai_pesawat, 5);
        do
        {
            flights.penerbangan = true; // Tetapkan ke true di awal setiap iterasi loop
            cout << "\nMasukan Maskapai yang Anda inginkan(Gunakan Huruf KAPITAL): ";
            cin >> flights.maskapai;

            for (int i = 0; i < 5; ++i) // Mengecek apakah nilai maskapai berada dalam array maskapai
            {
                if (flights.maskapai == maskapai_pesawat[i])
                {
                    flights.penerbangan = false;
                    break;
                }
            }
            if (flights.penerbangan)
            {
                cout << "Maskapai yang dipilih tidak ada. Coba lagi." << endl;
            }
        } while (flights.penerbangan); // Akhir dari perulangan

        cout << "\nMasukkan Nama anda: ";
        cin >> nama;
        cout << "Masukaan No. Identitas anda: ";
        cin >> no;
        cout << "Masukkan Jumlah tiket yang anda diinginkan: ";
        cin >> flights.harga;
        sertifkes();
        pasvisa();
        cout << endl;
        cout << "-----------------------------TIKET.IO-----------------------------" << endl;
        cout << "----------------------" << flights.internasional << "--------------------------" << endl;
        cout << "----------------------" << flights.maskapai << "--------------------------" << endl;
        cout << "Nama : " << nama << endl;
        cout << "No. Identitas : " << no << endl;
        cout << "Penerbangan Internasional yang dituju adalah " << flights.internasional << endl;
        cout << "Maskapai yang dipilih adalah " << flights.maskapai << endl;
        if (flights.internasional == penerbangan_internasional[0])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 1.000.000";
            cout << "\nTotal yang Anda Bayar: " << 1000000 * flights.harga;
            cout << "\nNo. Gate = 6" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[1])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 1.500.000";
            cout << "\nTotal yang Anda Bayar: " << 1500000 * flights.harga;
            cout << "\nNo. Gate = 9" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[2])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 2.000.000";
            cout << "\nTotal yang Anda Bayar: " << 2000000 * flights.harga;
            cout << "\nNo. Gate = 9" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[3])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 2.500.000";
            cout << "\nTotal yang Anda Bayar: " << 2500000 * flights.harga;
            cout << "\nNo. Gate = 7" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[4])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 3.000.000"; //
            cout << "\nTotal yang Anda Bayar: " << 3000000 * flights.harga;
            cout << "\nNo. Gate = 8" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[5])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 3.500.000";
            cout << "\nTotal yang Anda Bayar: " << 3500000 * flights.harga;
            cout << "\nNo. Gate = 7" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[6])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 4.000.000";
            cout << "\nTotal yang Anda Bayar: " << 4000000 * flights.harga;
            cout << "\nNo. Gate = 9" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[7])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 4.500.000";
            cout << "\nTotal yang Anda Bayar: " << 4500000 * flights.harga;
            cout << "\nNo. Gate = 7" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[8])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 5.000.000";
            cout << "\nTotal yang Anda Bayar: " << 5000000 * flights.harga;
            cout << "\nNo. Gate = 6" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[9])
        {
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. 5.500.000";
            cout << "\nTotal yang Anda Bayar: " << 5500000 * flights.harga;
            cout << "\nNo. Gate = 8" << endl;
        }
        break;
    default:
        cout << "Pilihan Tidak Ada. Harap Coba Lagi!!" << endl;
        break;
    }

    string kode_pembayaran = generatePaymentCode();
    cout << "Kode Pembayaran : " << kode_pembayaran << endl;
    do
    {
        cout << "Konfirmasi Kode Pembayaran : ";
        cin >> kode;
        if (kode != kode_pembayaran)
        {
            cout << "kode Pembayaran Salah. Coba lagi." << endl;
        }
    } while (kode != kode_pembayaran);
    cout << "Transaksi Berhasil. Keselamatan Anda adalah Prioritas Kami." << endl;

    return 0;
}