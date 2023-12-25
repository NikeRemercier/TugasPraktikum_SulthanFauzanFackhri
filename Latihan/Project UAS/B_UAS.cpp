#include <iostream>
#include <ctime>

using namespace std;

struct pesawat
{
    int jenis_penerbangan;
    string domestik;
    string internasional;
    string maskapai;
    int jumlah;
    bool penerbangan;
};

// fugsi array penerbangan
void tampilkanArray(string array[], int ukuran)
{
    for (int i = 0; i < ukuran; ++i)
    {
        cout << i + 1 << ". " << array[i] << "\n";
    }
    cout << endl;
}

// fungsi array maskapai
void tampilkanArray_mas(string array[], int ukuran) // MASKAPAI
{
    for (int i = 0; i < ukuran; ++i)
    {
        cout << i + 1 << ". " << array[i] << "\n";
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

// fungsi informasi pembayaran
void informasiPembayaran(const string nama, const string no, const string penerbangan_domestik, const string penerbangan_internasional, bool isDomestik, const string maskapai_pesawat, const int jumlah, const int harga)
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
    cout << "No. Identitas : " << no << endl;
    if (isDomestik)
    {
        cout << "Penerbangan Domestik : " << penerbangan_domestik << endl;
    }
    else
    {
        cout << "Penerbangan Internasional : " << penerbangan_internasional << endl;
    }
    cout << "Maskapai : " << maskapai_pesawat << endl;
    cout << "Jumlah Tiket : " << jumlah << endl;
    cout << "Harga Tiket : " << harga << endl; // harga disini mengambil int harga global yang berada di dalam main
    cout << "Harga Pembayaran : " << harga * jumlah << endl; 
    cout << "Tanggal Pembelian : " << tanggal << "\n";
    cout << "Waktu Pembelian: " << waktu << "\n";
    cout << "Kode Pembayaran : " << kodeUnik << "\n";
    cout << "================================\n";

    do // perulangan jika kode pembayaran yang dimasukan salah maka akan terus mengulang dan jika benar maka akan selesai
    {
        cout << "Konfirmasi Kode Pembayaran : ";
        cin >> kode_pembayaran;
        if (kode_pembayaran != kodeUnik)
        {
            cout << "Kode Pembayaran yang dimasukkan salah. Coba lagi." << endl;
        }

    } while (kode_pembayaran != kodeUnik);
    cout << "\nTransaksi Berhasil. Keselamatan Anda adalah Prioritas Kami.\n";
}

// fungsi untuk menyimpan harga tiket
int hargaTiket(const string penerbangan_domestik, const string penerbangan_internasional)
{
    int harga = 0; // int harga untuk fungsi (lokal)
    if (!penerbangan_internasional.empty())                                                                                                
    {
        if (penerbangan_internasional == "MEDINAH")
        {
            harga = 1000000;
        }
        if (penerbangan_internasional == "QATAR")
        {
            harga = 1500000;
        }
        if (penerbangan_internasional == "TOKYO")
        {
            harga = 2000000;
        }
        if (penerbangan_internasional == "SYDNEY")
        {
            harga = 2500000;
        }
        if (penerbangan_internasional == "SEOUL")
        {
            harga = 3000000;
        }
        if (penerbangan_internasional == "BANGKOK")
        {
            harga = 3500000;
        }
        if (penerbangan_internasional == "KUALA LUMPUR")
        {
            harga = 4000000;
        }
        if (penerbangan_internasional == "SINGPORE")
        {
            harga = 4500000;
        }
        if (penerbangan_internasional == "SHANGHAI")
        {
            harga = 5000000;
        }
        if (penerbangan_internasional == "HONGKONG")
        {
            harga = 5500000;
        }
    }
    else if (!penerbangan_domestik.empty()) // For domestic flights
    {
        if (penerbangan_domestik == "JAKARTA")
        {
            harga = 1000000;
        }
        if (penerbangan_domestik == "BANDUNG")
        {
            harga = 1500000;
        }
        if (penerbangan_domestik == "BOGOR")
        {
            harga = 2000000;
        }
        if (penerbangan_domestik == "BALI")
        {
            harga = 2500000;
        }
        if (penerbangan_domestik == "PADANG")
        {
            harga = 3000000;
        }
        if (penerbangan_domestik == "PONTIANAK")
        {
            harga = 3500000;
        }
        if (penerbangan_domestik == "SOLO")
        {
            harga = 4000000;
        }
        if (penerbangan_domestik == "BALIKPAPAN")
        {
            harga = 4500000;
        }
        if (penerbangan_domestik == "MALANG")
        {
            harga = 5000000;
        }
        if (penerbangan_domestik == "ACEH")
        {
            harga = 5500000;
        }
    }
    return harga;
}

int main()
{
    string nama, no, kode;
    int harga; // int harga untuk main (global)  
    pesawat flights;
    bool dataCorrect = false;
    string penerbangan_domestik[10] = {"JAKARTA", "BANDUNG", "BOGOR", "BALI", "PADANG", "PONTIANAK", "SOLO", "BALIKPAPAN", "MALANG", "ACEH"}; // Array penerbangan_domestik
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
        cin >> flights.jumlah;
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
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 5" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[1])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 4" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[2])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 3" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[3])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 2" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[4])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 1" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[5])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 4" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[6])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 3" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[7])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 2" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[8])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 1" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.domestik == penerbangan_domestik[9])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 5" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        do
        {
            cout << "\nEnter passenger information:\n";
            // Implement input for passenger information

            // Step 4: Display confirmation
            dataCorrect = isDataCorrect();
        } while (!dataCorrect);
        informasiPembayaran(nama, no, flights.domestik, "", true, flights.maskapai, flights.jumlah, harga);
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
            cout << "Masukan Maskapai yang Anda inginkan(Gunakan Huruf KAPITAL): ";
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
        cin >> flights.jumlah;
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
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.internasional << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 6" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[1])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 9" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[2])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 9" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[3])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 7" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[4])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 8" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[5])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 7" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[6])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 9" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[7])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 7" << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[8])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 6" << endl;
        }
        else if (flights.internasional == penerbangan_internasional[9])
        {
            harga = hargaTiket(flights.domestik, flights.internasional);

            // Display the ticket price based on the calculated harga
            cout << "Harga Tiket Penerbangan ke " << flights.domestik << " Rp. " << harga << endl;

            // Calculate and display the total amount to be paid
            cout << "Total yang Anda Bayar: " << harga * flights.jumlah << endl;
            cout << "No. Gate = 8" << endl;
        }
        informasiPembayaran(nama, no, "", flights.internasional, false, flights.maskapai, flights.jumlah, harga);
        break;

    default:
        cout << "Pilihan Tidak Ada. Harap Coba Lagi!!" << endl;
        break;
    }
    return 0;
}