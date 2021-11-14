#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float nilai_praktikum, nilai_teori, nilai_tugas, nilai_final_project;
	cout<< " Program Menghitung Rata-rata"<<endl;
	cout<<"\n";
	
	cout << " Masukkan Nilai Praktikum : ";
	cin >> nilai_praktikum;
	cout << " Masukkan Nilai Teori : ";
	cin >> nilai_teori;
	cout << " Masukkan Nilai Tugas : ";
	cin >> nilai_tugas;
	cout << " Masukkan Nilai Final Project : ";
	cin >> nilai_final_project;
	
	cout <<" Rata_rata = " <<(nilai_praktikum*0.4)+(nilai_teori*0.4)+(nilai_tugas*0.1)+(nilai_final_project*0.1)/4.0<<endl;
	
	return 0;
}
