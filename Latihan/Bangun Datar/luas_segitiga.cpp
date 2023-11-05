#include <iostream>
using namespace std;

int main(){
    double alas, tinggi, luas;

    cout<<"Menghitung Luas Segitiga"<<endl;
    cout<<"Masukan Alas \t: ";
    cin>>alas;

    cout<<"Masukan Tinggi \t: ";
    cin>>tinggi;
 
    luas = (alas * tinggi) / 2;

    cout<<"Luas Segitiga yang di Ketahui:"<<endl;
    cout<<"Alas \t: "<<alas<<" cm"<<endl;
    cout<<"Tinggi \t: "<<tinggi<<" cm"<<endl;

    cout<<"Rumus Menghitung Luas Segitiga adalah "<<"(alas x tinggi) : 2"<<endl;
    cout<<"("<<alas<<" x "<<tinggi<<")"<<" : 2"<<" = "<<luas<<endl;
    
    cout<<"Luas Segitiga adalah "<<luas<<" cm";
}