#include <iostream>
using namespace std;

int main(){
    int thn_ini, thn_lahir, umur;

   cout<<"Tahun ini = ";
   cin>>thn_ini;

   cout<<"Tahun Lahir = ";
   cin>>thn_lahir;

   umur = thn_ini - thn_lahir;
   
   cout<<"Sekarang Tahun "<<thn_ini<<" Saya Lahir pada Tahun "<<thn_lahir<<" Sekarang Umur Saya "<<umur<<" Tahun";
}