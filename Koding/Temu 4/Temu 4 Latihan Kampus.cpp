#include <iostream>
using namespace std;

int main(){
	double jumlah, jb, hb;
	string nama, nb;
	
	cout<<"Masukan Nama : "; getline(cin,nama);
	cout<<"Masukan Nama Barang : "; getline(cin,nb);	
	cout<<"Masukan Harga Barang : "; cin>>hb;
	cout<<"Masukan Jumlah Beli : "; cin>>jb;
	cout<<"--------------------------------------";
	cout<<endl;
	jumlah = (hb*jb);
	cout<<"barang yang di beli adalah = "<<nb<<endl;
	cout<<"dengan harga = "<<hb<<endl;
	cout<<"total bayar = "<<jumlah<<endl;
	
	(jumlah > 50000) ? (cout<<"Payung Cantik") : (cout<<"Terima Kasih");
	
	return 0;
}
