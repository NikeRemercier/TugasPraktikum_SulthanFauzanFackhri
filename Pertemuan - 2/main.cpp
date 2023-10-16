#include <iostream>

using namespace std;

int main()
{
    string nama,tempat,tanggal;
    int tahun,umur;

    cout<<"Siapa Namamu \t: ";
    getline(cin, nama);

    cout<<"Tempat Lahirmu \t: ";
    getline(cin, tempat);

    cout<<"Tanggal Lahir \t: ";
    getline(cin, tanggal);

    cout<<"Tahun mu \t: ";
    cin>>tahun;

    cout<<"Berapa Umurmu \t: ";
    cin>>umur;

    cout<<"Perkenalkan Nama Saya "<<nama<<" Saya Lahir di "<<tempat<<" Pada Tanggal "<<tanggal<<" tahun "<<tahun<<endl;
    cout<<"Sekarang Saya Berumur "<<umur<<" Tahun";
}
