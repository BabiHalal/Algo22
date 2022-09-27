#include <iostream>
using namespace std;

int main()
{
	int angka=0;
	cobalagi:
		cout<<"Masukan Angka : ";cin>>angka;
		if (angka!=5) {
			goto cobalagi;
		}
		return 0;
}
