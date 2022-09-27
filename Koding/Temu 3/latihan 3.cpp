#include <iostream>
using namespace std;

int main(){
	//deklarasi variabel
	double kalori, k, bb, tb, usia;
	
	cout<<"Menghitung kebutuhan kalori"<<endl;
	cout<<endl;
	
	cout<<"Masukan Berat Badan: "; cin>>bb;
	
	cout<<"Masukan Tinggi Badan: "; cin>>tb;
	
	cout<<"Masukan Usia: "; cin>>usia;
	
	cout<<"1. Laki-laki"<<endl;
	cout<<"2. Perempuan"<<endl;
	cout<<"pilih 1/2 = "; cin>>k;
	
	
    if (k=1) {
		kalori = (66.5+(13.75*bb)+(5.003*tb)-(6.75*usia));
		cout<<"Kalori yang di butuhkan = "<<kalori;
	}
	else if (k=2) {
		kalori = (655.1+(9.563*bb)+(1.850*tb)-(4.676*usia));
		cout<<"Kalori yang di butuhkan = "<<kalori;
	}
	
	return 0;

}
