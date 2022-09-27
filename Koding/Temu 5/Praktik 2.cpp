#include <iostream>
using namespace std;

int main (){
	string nama,kamar,ket,hs;
	int total,jk,tb,lama,harga;
	char sarapan;
	
	cout<<"Hotel Bahagia"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standart (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"--------------------"<<endl;
	
	
	cout<<"Masukkan nama anda = "; getline(cin,nama);
	cout<<"Masukkan jenis kamar (1-4) = "; cin>>jk;
	cout<<"Lama menginap = "; cin>>lama;
	cout<<"Dengan sarapan (y/n) 50rb/hr = "; cin>>sarapan;
	cout<<"--------------------"<<endl;
	
	switch (jk){
		case 1: kamar = "VVIP"; harga = 1000000; break;
		case 2: kamar = "VIP"; harga = 750000; break;
		case 3: kamar = "Standart"; harga = 500000; break;
		case 4: kamar = "Melati"; harga = 250000; break;
	}
	switch (sarapan){
		case 'y': ket = " dengan sarapan";
		break;
		case 'n': ket = " tanpa sarapan";
		break;
	}
	
	cout<<"----------------------------"<<endl;
	cout<<"Terima kasih "<<nama<<endl;
	cout<<"Kamar anda "<<kamar<<endl;
	cout<<"Lama menginap "<<lama<<ket<<endl;
		
	total = harga * lama;

	if (sarapan=='y'){
		tb = total + (50000 * lama);
		cout<<"Total Bayar = "<<tb<<endl;
	} else if (sarapan=='n'){
		tb = total;
		cout<<"Total Bayar = "<<tb<<endl;
	}
	
	return 0;
}
