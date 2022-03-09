#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float nomor_bilik, jam, menit, detik;
	cout<< " Billing Warnet Kia Cantik "<<endl;
	cout<<"\n";
	
	cout << " Tarif per-Jam = Rp 5.000 ";
	cout<<"\n";
	cout << " Nomor Bilik ";	cin >> nomor_bilik;
	
	cout <<"\n";
	cout << " Lama Pemaikaian ";
	cout <<"\n";
	cout << " Jam = ";	cin >> jam;

	cout << " Menit = ";	cin >> menit;
	
	cout << " Detik = ";	cin >> detik;
	cout <<"\n";
	
	cout << " Total Billing = " <<(jam*5000.0)+(menit*5000.0/60.0)+(detik*5000.0/3600.0)<<endl;
	
	return 0;
}
