#include <iostream>
using namespace std;

int main()
{
    double gaji_pokok, tunjangan, pajak, gaji_bersih;

    do
    {
        cout << "Masukan Gaji Pokok : Rp.";
        cin >> gaji_pokok;
        if (gaji_pokok < 100000)
        {
            cout<<"Gaji tidak boleh dibawah 100000"<<endl;
        }
    } while (gaji_pokok < 100000);
    cout<<"Gaji Anda adalah "<<gaji_pokok<<endl;

    if (gaji_pokok >= 500000)
    {
        double persenTunjangan = 0.2;
        double persenPajak = 0.15;
        tunjangan = persenTunjangan * gaji_pokok;
        cout << "Tunjangan Sebesar : Rp." << tunjangan << endl;

        pajak = persenPajak * (gaji_pokok + tunjangan);
        cout << "Pajak Sebesar : Rp." << pajak << endl;

        gaji_bersih = gaji_pokok + tunjangan - pajak;
        cout << "Gaji Bersih Karyawan : Rp." << gaji_bersih << endl;
    }
    else
    {
        double persenTunjangan = 0.1;
        double persenPajak = 0.05;
        tunjangan = persenTunjangan * gaji_pokok;
        cout << "Tunjangan Sebesar : Rp." << tunjangan << endl;

        pajak = persenPajak * (gaji_pokok + tunjangan);
        cout << "Pajak Sebesar : Rp." << pajak << endl;

        gaji_bersih = gaji_pokok + tunjangan - pajak;
        cout << "Gaji Bersih Karyawan : Rp." << gaji_bersih << endl;
    }
}