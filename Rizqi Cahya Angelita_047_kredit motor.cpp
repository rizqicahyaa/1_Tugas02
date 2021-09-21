#include <iostream>

using namespace std;

int main(){
	int HargaPokok, HargaMotor, LamaKredit, Bunga, Cicilan, TotalHargaMotor, KeuntunganDealer;
	
	cout<<"Program Untuk Mengetahui Cicilan, Total Harga Cicilan dan Keuntungan Dealer dari Pembelian Sepeda Motor\n";
	cout<<"Masukkan Harga Motor = Rp. "; cin>>HargaMotor;
	cout<<"Masukkan Lama Kredit (Bulan) = "; cin>>LamaKredit;
	HargaPokok = HargaMotor/LamaKredit;
	cout<<"Harga Pokok = Rp. "<<HargaPokok;
	Bunga = HargaPokok*0.1;
	cout<<"\nBunga = Rp. "<<Bunga;
	Cicilan = HargaPokok+Bunga;
	cout<<"\nCicilan = Rp. "<<Cicilan;
	TotalHargaMotor = Cicilan*LamaKredit;
	cout<<"\nTotal Harga Motor = Rp. "<<TotalHargaMotor;
	KeuntunganDealer = TotalHargaMotor-HargaMotor;
	cout<<"\nKeuntungan Dealer = Rp. "<<KeuntunganDealer;
	
}
