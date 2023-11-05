#include <iostream>
using namespace std;

int main(){
    const float phi = 3.14;
    float luas, jari_jari;

    cout<<"Masukan Jari-Jari : ";
    cin>>jari_jari;

    luas = phi * jari_jari * jari_jari;

    cout<<"Luas Lingkaran yang di Ketahui"<<endl;
    cout<<"phi \t\t: "<<phi<<endl;
    cout<<"Jari-Jari \t: "<<jari_jari<<endl;

    cout<<"Luas Lingkaran adalah "<<luas;
}