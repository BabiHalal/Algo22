#include <iostream>
using namespace std;

int main(){
	string nama;
	int li, tb, total;
	char jk, sarapan; 
	cout<<"Hotel Bahagia "<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"1. VVIP		(1.000.000) "<<endl;
	cout<<"2. VIP		(750.000) "<<endl;
	cout<<"3. Standart	(500.000) "<<endl;
	cout<<"4. Melati 	(250.000) "<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Masukan nama anda : "; cin>>nama;
	cout<<"Masukan jenis kamar (1-4) : "; cin>>jk;
	cout<<"Lama inap : "; cin>>li;
	cout<<"Dengan sarapan (y/n) 50rb/hari : "; cin>>sarapan;
	cout<<"------------------------------"<<endl;
	cout<<"Terima Kasih "<<nama;
	switch (jk){
		case 1: cout<<", Kamar anda VVIP";break;
		case 2: cout<<", Kamar anda VIP";break;
		case 3: cout<<", Kamar anda Standart";break;
		case 4: cout<<", Kamar anda Melati";break;
		}
	switch (sarapan){
		case 'y': cout<<", Lama menginap "<<li<<" malam"<<" dengan sarapan.";break;
		case 'n': cout<<", Lama menginap "<<li<<" malam"<<" tanpa sarapan.";break;
		default: cout<<", Salah Input"<<endl;
	}
	if (jk == '1'){
		total = 1000000 * li;
	}
	else if (jk == '2'){
		total = 750000 * li;
	}
	else if (jk == '3'){
		total = 500000 * li;
	}
	else if (jk == '4'){
		total = 250000 * li;
	}
	
	if (sarapan = 'y'){
		tb = total + (50000 * li);
		cout<<"Total Bayar : "<<tb;
	}
	else if (sarapan == 'n') {
		tb = total + (0 * li);
		cout<<"Total Bayar : "<<tb;
	}
}
