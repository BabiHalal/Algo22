#include <iostream>
using namespace std;

int main(){
	int pil; 
	char jawab;
	do{
	cout<<"pil : "; cin>>pil;
	switch (pil){
		case 1: cout<<"algoritma"<<endl;
				cout<<"dan"<<endl;
				cout<<"pemorgaman"<<endl;
				break;
		case 2: cout<<"Matematika"<<endl;
				cout<<"Diskrit"<<endl;
				break;
		default:cout<<"Bahasa"<<endl;
				cout<<"Inggris"<<endl;
	}
	cout <<endl<< "Coba Lagi (Y/T) ? ";cin >> jawab;
}
	while (jawab == 'y' || jawab == 'Y');
	
}
