#include <iostream>
using namespace std;

int main(){
    int a,hasil;

    cout<<"Masukan Bilangan = ";
    cin>>a;

    hasil = a % 2;

    string jenis = hasil == 1 ? "Ganjil" : "Genap";

    cout<<"Bilangan "<<a<<" adalah bilangan "<<jenis;
}