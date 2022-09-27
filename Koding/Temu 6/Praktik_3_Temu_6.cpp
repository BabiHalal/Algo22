#include <iostream>
using namespace std;

int main(){
	char jawab;
	int angka;
	
	do {
		cout << "Masukan Angka : ";cin >> angka;
		cout << "Angka "<<angka<< ", adalah ";
		cout << ( (angka % 2 == 1) ? "Ganjil" : "Ganap" );
		cout <<endl<< "Coba Lagi (Y/T) ? ";cin >> jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	
	return 0;
}
