#include <iostream>

using namespace std;

int main()
{
    string nama_saya;
    string tempat;
    string tanggal;
    int tahun;
    int umur;

    cout<<"Siapa Namamu \t: ";
    getline(cin, nama_saya);

    cout<<"Tempat Lahirmu \t: ";
    cin>>tempat;

    cout<<"Tanggal Lahirmu \t: ";
    getline(cin, tanggal);

    cout<<"Tahun Lahirmu \t: ";
    cin>>tahun;

    cout<<"Berapa Umurmu \t: ";
    cin>>umur;

    cout<<"Perkenalkan Nama Saya "<<nama_saya<<" Saya Lahir di "<<tempat<<" Pada Tanggal "<<tanggal<<tahun<<endl;
    cout<<"Sekarang Saya Berumur "<<umur<<" Tahun";
}
