#include <iostream>
using namespace std;

int main(){
    int firstValue = 10;
    int secondValue = 8;
    int cadangan;

    cout<<"Nilai Awal Variable firstValue dan secondValue"<<endl;
    cout<<"Nilai firstValue = "<<firstValue<<endl;
    cout<<"Nilai secondValue = "<<secondValue<<endl;

    cadangan = firstValue;
    firstValue = secondValue;
    secondValue = cadangan;

    cout<<"\nPenukaran Variabel firstValue dan secondValue dengan Variabel Tambahan"<<endl;
    cout<<"Nilai firstValue = "<<firstValue<<endl;
    cout<<"Nilai secondValue = "<<secondValue<<endl;

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout<<"\nPenukaran Variabel firstValue dan secondValue tanpa Variabel Tambahan"<<endl;
    cout<<"Nilai firstValue = "<<firstValue<<endl;
    cout<<"Nilai secondValue = "<<secondValue<<endl;
}