#include <iostream>
using namespace std;

int main(){
    float matdis, fidas, kalkulus, pti, kwn, alpro, inggris, jumlah, rata_rata;
    bool pernyataan;
    rata_rata = 80;

    cout<<"Masukan Nilai Matdis = ";
    cin>>matdis;

    cout<<"Masukan Nilai Fidas = ";
    cin>>fidas;

    cout<<"Masukan Nilai Kalkulus = ";
    cin>>kalkulus;

    cout<<"Masukan Nilai PTI = ";
    cin>>pti;

    cout<<"Masukan Nilai KWN = ";
    cin>>kwn;

    cout<<"Masukan Nilai Alpro = ";
    cin>>alpro;

    cout<<"Masukan Nilai Inggris = ";
    cin>>inggris;

    jumlah = (matdis + fidas + kalkulus + pti + kwn + alpro + inggris) / 7;

    pernyataan = jumlah > rata_rata;

    string hasil = pernyataan == 1 ?"Anda LULUS":"Anda TIDAK LULUS";

    cout<<"Anda dinyatakan "<<hasil;

    
}