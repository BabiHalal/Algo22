#include <iostream>

using namespace std;

int main(){
    int umur;

    cout<<"Masukkan Umur : ";cin>>umur;
    cout<<"--------------------------------"<<endl;
    (umur >17) ? (cout<<"Selamat Anda Sudah Dewasa") : (cout<<"Mohon Maaf Anda Belum Dewasa");

    return 0;
}

