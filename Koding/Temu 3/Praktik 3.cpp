#include <iostream>
using namespace std;

#define garis "--------"

int main (){
	
	const double pi = 3.14;
	
	double vol,r,t;
	
	cout<<"Program mencari volume kerucut"<<endl;
	cout<<garis<<endl;
	
	cout<<"Masukan jari-jari: "; cin>>r;
	
	cout<<"Masukan tinggi: "; cin>>t;
	
	vol = (pi * r * r * t) / 3;
	
	cout<<"Volume kerucut adalah: "<<vol;
	
	return 0;
}
