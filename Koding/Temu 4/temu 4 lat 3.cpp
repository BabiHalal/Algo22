#include <iostream>

using namespace std;

int main(){
    int uts,uas,nilai;

    cout<<"Masukkan Nilai UTS Anda : ";cin>>uts;

    cout<<"Masukkan Nilai UAS Anda : ";cin>>uas;
    cout<<"--------------------------------"<<endl;
    nilai = (uts + uas)/2; 
    (nilai >=60) ? (cout<<"Anda Lulus") : (cout<<"Anda Tidak Lulus")<<endl;

    return 0;
}

