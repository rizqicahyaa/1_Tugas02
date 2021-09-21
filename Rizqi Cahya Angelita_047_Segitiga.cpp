#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float alas,tinggi,sisimiring,keliling;
	cout<<"Menghitung Sisi Miring Segitiga\n";
	cout<<"Masukkan nilai alas = "; cin>>alas;
	cout<<"Masukkan nilai tinggi = "; cin>>tinggi;
	sisimiring = sqrt(alas*alas+tinggi*tinggi);
	cout<<"Hasil sisi miring = "<<sisimiring;
	cout<<"\n";
	cout<<"\n";
	cout<<"Menghitung Keliling Segitiga\n";
	cout<<"Masukkan nilai alas = "<<alas;
	cout<<"\nMasukkan nilai tinggi = "<<tinggi;
	keliling = alas+tinggi+sisimiring;
	cout<<"\nHasil Keliling = "<<keliling;
	
	return(0); 
}
