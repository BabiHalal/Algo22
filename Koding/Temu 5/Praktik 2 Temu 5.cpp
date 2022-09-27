#include <iostream>
using namespace std;

int main(){
	string nama;
	int tugas, uts, uas, total;
	cout<<"Masukan Nama 		: "; getline(cin,nama);
	cout<<"Masukan Nilai Tugas 	: "; cin>>tugas;
	cout<<"Masukan Nilai UTS 	: "; cin>>uts;
	cout<<"Masukan Nilai UAS	: "; cin>>uas;
	cout<<"----------------------------"<<endl;
	cout<<"Selamat "<<nama<<endl;
	total = (tugas+uts+uas)/3;
	cout<<"Nilai anda : "<<total<<endl;
		if (total > 21) {
			cout<<"Nilai Huruf : E";
		} else if (total > 41) {
			cout<<"Nilai Huruf : D";
		} else if (total > 61) {
		cout<<"Nilai Huruf : C";
		}
		
}
	
