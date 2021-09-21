#include <iostream>

using namespace std;

int main(){
	float NilaiPraktikum, NilaiTeori, NilaiTugasdanFinalProjek, Rerata;
	cout<<"Menghitung Rata-Rata Nilai dari Mata Kuliah Pemrograman Terstruktur\n";
	cout<<"Masukkan Nilai Praktikum = "; cin>>NilaiPraktikum;
	cout<<"Masukkan Nilai Teori = "; cin>>NilaiTeori;
	cout<<"Masukkan Nilai Tugas dan Final Projek = "; cin>>NilaiTugasdanFinalProjek;
	Rerata = (NilaiPraktikum*40/100)+(NilaiTeori*40/100)+(NilaiTugasdanFinalProjek*20/100);
	cout<<"Rata-Rata = " <<Rerata;
}
