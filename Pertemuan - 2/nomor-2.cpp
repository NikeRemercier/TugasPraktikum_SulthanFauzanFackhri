#include <iostream>
using namespace std;

int main(){
    int jml_bebek, jml_teman, bebek, sisa;

    cout<<"Jumlah Bebek \t= ";
    cin>>jml_bebek;

    cout<<"Jumlah Teman \t= ";
    cin>>jml_teman;

    bebek = jml_bebek / jml_teman;
    sisa = jml_bebek % jml_teman;

    cout<<"Jumlah Bebek Pak Tatang adalah "<<jml_bebek<<endl;
    cout<<"Jumlah Teman Pak Tatang adalah "<<jml_teman<<endl;

    cout<<"Bebek yang dibagikan kepada masing-masing teman adalah "<<bebek<<" ekor bebek "<<endl;
    cout<<"Sisa Bebek setelah di bagikan adalah "<<sisa;
}