#include <iostream>
using namespace std;

int main(){
    int angka;

    cout<<"Masukan Nilai Score : ";
    cin>>angka;

    if (angka>=90)
    {
        cout<<"Selamat! Anda mendapatkan nilai A"<<endl;
    } else if (angka>=80)
    {
        cout<<"Anda mendapatkan nilai B"<<endl;
    } else if (angka>=70)
    {
        cout<<"Anda mendapatkan nilai C"<<endl;
    } else if (angka>=60)
    {
        cout<<"Anda mendapatkan nilai D"<<endl;
    } else
    {
        cout<<"Anda mendapatkan nilai E"<<endl;
    }
}