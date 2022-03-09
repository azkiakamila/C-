#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float harga_motor, lama_kredit, harga_pokok, bunga_kredit, cicilan, total_harga_motor;
	cout<< " Program Menghitung Kredit Motor"<<endl;
	cout<<"\n";
	
	cout << " Masukkan Harga Motor : ";
	cin >> harga_motor;
	cout << " Masukkan Lama Kredit (Bulan) : ";
	cin >> lama_kredit;
	
	cout << " Harga Pokok = " <<harga_motor/lama_kredit<<endl;
	cout<<"\n";
	cout << " Masukkan Harga Pokok : ";
	cin >> harga_pokok;
	
	cout << " Bunga Kredit = " <<harga_pokok*0.1<<endl;
	cout<<"\n";
	cout << " Masukkan Bunga Kredit : ";
	cin >> bunga_kredit;
	
	cout << " Cicilan = " <<harga_pokok+bunga_kredit<<endl;
	cout<<"\n";
	cout << " Masukkan Cicilan : ";
	cin >> cicilan;
	
	cout << " Total Harga Motor = " <<cicilan*lama_kredit<<endl;
	cout<<"\n";
	cout << " Masukkan Total Harga Motor : ";
	cin >> total_harga_motor;
	
	cout << " Keuntungan Dealer = " <<total_harga_motor-harga_motor<<endl;
	
	return 0;
}
