#include <iostream>
using namespace std;

int main() {
	int i = 0;
	do {
	cout << i << " "; i++;	
	}
	while (i < 10); (i == 7);

	
	cout<<endl<<"-------------------------------"<<endl;
int a = 0;
int b;

	while (a < 10) {
	(b = a % 2 == 1);
		if (b == 1){
			break;
		}
	cout << b << " "; b++;
	}
	return 0;
}

