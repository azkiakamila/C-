#include <iostream>
using namespace std;

int main(){
	string nama;
	int nik, gender, status, kendaraan, gaji, makan, gajikotor, pajak, gajibersih; 
	cout << " Program Menghitung Gaji Karyawan "<<endl;
	cout << "\n";
	
	cout << "		[KETENTUAN PENGISIAN PROGRAM] "<<endl;
	cout << " a. Jenis Kelamin		[0 = Perempuan 	& 1 = Laki-Laki]"<<endl;
	cout << " b. Status			[0 = Single 	& 1 = Menikah]"<<endl;
	cout << " c. Kendaraan			[0 = Motor	& 1 = Mobil]"<<endl;
	cout << "\n";
	
	cout << " Nama Karyawan = ";	cin >> nama;
	cout << " NIK = ";				cin >> nik;
	
	//input gender
	cout << " Jenis Kelamin = ";	cin >> gender;
	if (gender == 0)
		cout << "		~ Perempuan ~ " <<endl;
	else if (gender == 1)
		cout << "		~ Laki-Laki ~ " <<endl;
	else if (gender >1)
		cout << " MENU YANG ANDA PILIH TIDAK VALID " <<endl;
	
	//input status
	cout << " Status = ";			cin >> status;
	if (status == 0)
		cout << "		~ Single ~ " <<endl;
	else if (status == 1)
		cout << "		~ Menikah ~ " <<endl;
	else if (status >1)
		cout << " MENU YANG ANDA PILIH TIDAK VALID " <<endl;
	
	//input kendaraan
	cout << " Kendaraan = ";		cin >> kendaraan;
	if (kendaraan == 0)
		cout << "		~ Motor ~ " <<endl;
	else if (kendaraan == 1)
		cout << "		~ Mobil ~ " <<endl;
	else if (kendaraan >1)
		cout << " MENU YANG ANDA PILIH TIDAK VALID " <<endl;
	
	cout << " Gaji Pokok = ";	cin >> gaji;
	cout << " Uang Makan = ";	cin >> makan;
	cout << " ----------------------------------- " <<endl;
	cout << "\n";
	
	int tunjangan, transport;
	//output tunjangan
	if (gender == 1 && status == 1){
		tunjangan = 500;
		cout << " 1. Tunjangan = " << tunjangan << endl;
	}
	else {
		tunjangan = 0;
		cout << " 1. Tunjangan = " << tunjangan << endl;
	}
	
	//output transport
	if (kendaraan == 1){
		transport = 1000;
		cout << " 2. Transport = " << transport << endl;
	}
	else if (kendaraan == 0) {
		transport = 500;
		cout << " 2. Transport = " << transport << endl;
	}
	else {
		transport = 0;
		cout << " 2. Transport = " << transport << endl;
	}

	gajikotor = gaji + tunjangan + makan + transport;
		cout << " 3. Gaji Kotor = " << gaji << " + " << tunjangan << " + " << makan << " + " << transport << " = " << gajikotor << endl;
	
	pajak = 0.05 * gajikotor;
		cout << " 4. Pajak = " << 0.05 << " * " << gajikotor << " = " << pajak << endl;
	
	gajibersih = gajikotor - pajak;
		cout << " 5. Gaji Bersih = " << gajikotor << " - " << pajak << " = " << gajibersih << endl;
}
