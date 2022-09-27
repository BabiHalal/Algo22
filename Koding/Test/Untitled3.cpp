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
		if (total < 21) {
			cout<<"Nilai Huruf : E";
		} else if (total < 41) {
			cout<<"Nilai Huruf : D";
		} else if (total < 61) {
		cout<<"Nilai Huruf : C";
		} else if (total < 81) {
			cout<<"Nilai Huruf : B";
		} else if (total < 101) {
		cout<<"Nilai Huruf : A";
		}
		
	cout<<""<<endl;
	
		if (total < 21) {
			cout<<"Prediket : A";
		} else if (total < 41) {
			cout<<"Prediket : B";
		} else if (total < 61) {
		cout<<"Prediket : C";
		} else if (total < 81) {
			cout<<"Prediket : B";
		} else if (total < 101) {
		cout<<"Prediket : A";
		}	
}
	
