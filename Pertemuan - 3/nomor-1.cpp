#include <iostream>
using namespace std;

int main(){
    int angka;

    cout<<"Masukan Nilai Score : ";
    cin>>angka;

    if (angka>89)
    {
        cout<<"Selamat! Anda mendapatkan nilai A"<<endl;
    } else if (angka>79)
    {
        cout<<"Anda mendapatkan nilai B"<<endl;
    } else if (angka>69)
    {
        cout<<"Anda mendapatkan nilai C"<<endl;
    } else if (angka>59)
    {
        cout<<"Anda mendapatkan nilai D"<<endl;
    } else
    {
        cout<<"Anda mendapatkan nilai E"<<endl;
    }
    
    return 0;
}