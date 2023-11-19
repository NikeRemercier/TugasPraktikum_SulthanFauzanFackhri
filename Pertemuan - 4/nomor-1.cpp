#include <iostream>
using namespace std;

void bilangan();

int main()
{
    bilangan();
}

void bilangan()
{
    int batas, bilangan, jumlah;

    cout << "Pilih Bilangan" << endl;
    cout << "1. Bilangan Ganjil" << endl;
    cout << "2. Bilangan Genap" << endl;
    cout << "3. Bilangan Prima" << endl;

    cout << "Masukan angka untuk menghitung Bilangan yang diinginkan : ";
    cin >> bilangan;

    switch (bilangan)
    {
    case 1:
        cout << "BILANGAN GANJIL" << endl;
        do
        {
            cout << "Masukan Batas Bilangan Ganjil : ";
            cin >> batas;
            if (batas <= 0)
            {
                cout << "Batas Bilangan harus lebih dari nol. Coba lagi." << endl;
            }
        } while (batas <= 0);
        cout << "Batas Bilangan Ganjil adalah " << batas << endl;

        cout << "Bilangan Ganjil dari 1 dan " << batas << " adalah ";
        for (int i = 1; i <= batas; i += 2)
        {
            cout << " " << i;
            jumlah = jumlah + i;
        }

        cout << "\nHasil dari penjumlahan bilangan Ganjil adalah " << jumlah << endl;

        cout << "Faktor bilangan Ganjil dari 1 dan " << batas << " adalah: ";
        for (int i = 1; i <= batas; i++)
        {
            if (batas % i == 0)
            {
                cout << " " << i;
            }
        }
        break;

    case 2:
        cout << "BILANGAN GENAP" << endl;
        do
        {
            cout << "Masukan Batas Bilangan Genap : ";
            cin >> batas;
            if (batas <= 0)
            {
                cout << "Batas Bilangan harus lebih dari nol. Coba lagi." << endl;
            }
        } while (batas <= 0);
        cout << "Batas Bilangan Genap adalah " << batas << endl;

        cout << "Bilangan Genap dari 1 dan " << batas << " adalah ";
        for (int i = 2; i <= batas; i += 2)
        {
            cout << " " << i;
            jumlah = jumlah + i;
        }

        cout << "\nHasil dari penjumlahan bilangan Genap adalah " << jumlah << endl;

        cout << "Faktor bilangan Genap dari 2 dan " << batas << " adalah: ";
        for (int i = 2; i <= batas; i++)
        {
            if (batas % i == 0)
            {
                cout << " " << i;
            }
        }
        break;

    case 3:
        cout << "BILANGAN PRIMA" << endl;
        do
        {
            cout << "Masukan Batas Bilangan Prima : ";
            cin >> batas;
            if (batas <= 0)
            {
                cout << "Batas Bilangan harus lebih dari nol. Coba lagi." << endl;
            }
        } while (batas <= 0);
        cout << "Batas Bilangan Prima adalah " << batas << endl;

        cout << "Bilangan Prima antara 1 dan " << batas << " adalah ";
        for (int i = 2; i <= batas; ++i)
        {
            int bilanganPrima = 1;
            for (int j = 2; j * j <= i; ++j)
            {
                if (i % j == 0)
                {
                    bilanganPrima = 0;
                    break;
                }
            }
            if (bilanganPrima == 1)
            {
                cout << i << " ";
                jumlah = jumlah + i;
            }
        }

        cout << "\nHasil dari penjumlahan bilangan Prima adalah " << jumlah << endl;

        cout << "Faktor bilangan Prima dari 2 dan " << batas << " adalah: ";
        for (int i = 2; i <= batas; i++)
        {
            if (batas % i == 0)
            {
                cout << " " << i;
            }
        }
        break;

    default:
        cout << "Pilihan Tidak Valid !" << endl;
        break;
    }
}