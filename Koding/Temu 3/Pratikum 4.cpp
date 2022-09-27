#include <iostream>
using namespace std;

int main(){
	string pesan = "Selamat Belajar di belajarcpp.com", kalimat = "";
	
	cout<<pesan<<endl;
	getline(cin,kalimat); //Fungsi input agar dapat membaca kalimat pai
	cout<<kalimat<<endl;
	
	return 0;
}
