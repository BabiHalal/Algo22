#include <iostream>
using namespace std;

int main(){
    int umur;
    string nama,prodi,matkul;

    cout<<"Masukkan Nama Anda : ";cin>>nama;
    cout<<"Masukkan Umur Anda : ";cin>>umur;
    cout<<"Masukkan Prodi Anda : ";cin>>prodi;
    cout<<"Nama Mata Kuliah Yang Paling Disukai : ";cin>>matkul;
    cout<<"--------------------------------"<<endl;

    cout<<"Saya "<<nama <<", Umur "<<umur<<" Dari Prodi "<<prodi<<" Dengan ini menyatakan. Suka sekali dengan mata kuliah "<<matkul<<endl;

    return 0;
}
