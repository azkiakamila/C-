#include <iostream>
using namespace std;

int main (){
	int bilangan1, bilangan2, operasi, hasil;
	cout << " ~ Menu Kalkulator ~ " <<endl;
	cout << " 1. Penambahan " <<endl;
	cout << " 2. Pengurangan " <<endl;
	cout << " 3. Perkalian " <<endl;
	cout << " 4. Pembagian " <<endl;
	cout << " 5. Modulus " <<endl;
	cout << "\n";
	
	cout << " Masukkan Bilangan Pertama = ";	cin >>bilangan1;
	cout << " Masukkan Bilangan Kedua = ";		cin >>bilangan2;
	cout << " Pilihan Operasi Matematika = ";	cin >>operasi;
	
	switch (operasi){
		case 1:
			hasil = bilangan1+bilangan2;
			cout << bilangan1 << " + " << bilangan2 << " = " << hasil;
		break;
		case 2:
			hasil = bilangan1-bilangan2;
			cout << bilangan1 << " - " << bilangan2 << " = " << hasil;
		break;
		case 3:
			hasil = bilangan1*bilangan2;
			cout << bilangan1 << " * " << bilangan2 << " = " << hasil;
		break;
		case 4:
			hasil = bilangan1/bilangan2;
			cout << bilangan1 << " / " << bilangan2 << " = " << hasil;
		break;
		case 5:
			hasil = bilangan1%bilangan2;
			cout << bilangan1 << " % " << bilangan2 << " = " << hasil;
		break;
		default :
			cout << " MENU YANG ANDA PILIH TIDAK VALID " <<endl;
	}
}
