#include <iostream>
using namespace std;

int main(){
	char jawab;
	int a, b, jwb;
	
	do {
		cout << "Masukan Angka A : ";cin >> a;
		cout << "Masukan Angka B : ";cin >> b;
		jwb = a + b;
		cout<< "Hasil : "<<jwb<<endl;
		cout <<endl<< "Coba Lagi (Y/T) ? ";cin >> jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	
	return 0;
}
