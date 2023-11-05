#include <iostream>
using namespace std;

int main(){
    int awal, akhir;

    cout<<"Mulai Berapa : ";
    cin>>awal;

    cout<<"Sampai Berapa : ";
    cin>>akhir;

    int i = awal;
    while (i >= akhir)
    {
        cout<<"hai "<<i<<endl;
        i-=2;
    }
    
}
