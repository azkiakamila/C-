#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout << " Program Konversi Nilai "<<endl;
	cout << "\n";
	cout << " Masukkan Nilai (0-100) = ";	cin >> nilai;
	if (nilai>=80.0 && nilai==100.0)
		cout << " Nilai = A ";	
	else if (nilai>=65.0 && nilai==79.0)
		cout << " Nilai = B ";	
	else if (nilai>=50.0 && nilai==64.0)
		cout << " Nilai = C ";	
	else if (nilai>=35.0 && nilai== 49.0)
		cout << " Nilai = D ";	
	else if (nilai>=0.0 && nilai==34.0)
		cout << " Nilai = E ";

	return 0;
}
