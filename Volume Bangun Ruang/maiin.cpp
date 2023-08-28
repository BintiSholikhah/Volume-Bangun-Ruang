//NAMA 	: BINTI SHOLIKHAH
//NIM	: 2100018299
//KELAS	: F
#include<iostream>
#include "volume.h"
using namespace std;

int main(){
	int pilihan;
	float sisi, p, l, t, r, ts, y, balik, a;
x:	
	cout << "##\tPROGRAM VOLUME BANGUN RUANG\t##\n";
	cout << "==========================================\n";
	cout << "\n";
	cout << "\tPILIHAN MENU :\n";
	cout << "\tMenghitung:\n";
	cout << "\t[1] Volume Kubus\n";
	cout << "\t[2] Volume Balok\n";
	cout << "\t[3] Volume Tabung\n";
	cout << "\t[4] Volume Kerucut\n";
	cout << "\t[5] Volume Prisma Segitiga\n";
	cout << "\t[6] Volume Limas Segitiga\n";
	cout << "\t[7] Volume Bola\n";
	cout << "\t[0] Keluar Program\n";
	cout << "\n";
	cout << "-------------------------------------------\n";
	cout << " Menu Pilihan Anda : ";
	cin >> pilihan;
	system("cls");
	if (pilihan == 1 ){
		cout << "\tMENGHITUNG VOLUME KUBUS\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = sisi * sisi * sisi \n";
		cout << "\n";
		cout << " Masukkan panjang sisi kubus : ";
		cin >> sisi;
		cout << "\n";
		cout << " Volume Kubus = " << Kotak(sisi) << " cm3" << endl;
	}
	else if (pilihan == 2 ){
		cout << "\tMENGHITUNG VOLUME BALOK\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = panjang * lebar * tinggi \n";
		cout << "\n";
		cout << " Masukkan panjang balok : ";
		cin >> p;
		cout << " Masukkan lebar balok   : ";
		cin >> l;
		cout << " Masukkan tinggi balok  : ";
		cin >> t;
		cout << "\n";
		cout << " Volume Balok = " << Balok(p,l,t) << " cm3" << endl;
	}
	else if (pilihan == 3 ){
		cout << "\tMENGHITUNG VOLUME TABUNG\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = phi * r * r * t\n";
		cout << "\n";
		cout << " Masukkan jari-jari     : ";
		cin >> r;
		cout << " Masukkan tinggi tabung : ";
		cin >> t;
		cout << "\n";
		cout << " Volume Tabung = " << Tabung(r,t) << " cm3" << endl;
	}
	else if (pilihan == 4 ){
		cout << "\tMENGHITUNG VOLUME KERUCUT\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = 1/3 * phi * r * r * t\n";
		cout << "\n";
		cout << " Masukkan jari-jari : ";
		cin >> r;
		cout << " Masukkan tinggi kerucut :";
		cin >> t;
		cout << "\n";
		cout << " Volume Kerucut = " << Kerucut(r,t) << " cm3" << endl;
	}
	else if (pilihan == 5 ){
		cout << "\tMENGHITUNG VOLUME PRISMA SEGITIGA\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = luas alas * tinggi prisma\n";
		cout << "\n";
		cout << " Mencari Luas Alas (segitiga)\n";
		cout << " Masukkan panjang alas : ";
		cin >> p;
		cout << " Masukkan tinggi alas  : ";
		cin >> ts;
		cout << " Luas Alas : " << LuasAlas(p,ts)<< " cm2" << endl;
		cout << " \n";
		cout << " Masukkan tinggi prisma :";
		cin >> t;
		cout << "\n";
		cout << " Volume Prisma Segitiga = " << PrismaSegitiga(p,ts,t) << " cm3" << endl;
	}
	else if (pilihan == 6 ){
		cout << "\tMENGHITUNG VOLUME LIMAS SEGITIGA\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = 1/3 * luas alas * tinggi\n";
		cout << "\n";
		cout << " Mencari Luas Alas (segitiga)\n";
		cout << " Masukkan panjang alas : ";
		cin >> p;
		cout << " Masukkan tinggi alas  : ";
		cin >> ts;
		cout << " Luas Alas : " << LuasAlas(p,ts) << " cm2" << endl;
		cout << " \n";
		cout << " Masukkan tinggi limas :";
		cin >> t;
		cout << "\n";
		cout << " Volume Limas Segitiga = " << LimasSegitiga(p,ts,t) << " cm3" << endl;
	}
	else if (pilihan == 7 ){
		cout << "\tMENGHITUNG VOLUME BOLA\n";
		cout << "---------------------------------------\n";
		cout << " (dihitung dalam cm)\n";
		cout << "\n";
		cout << " Rumus :\n Volume = 4/3 * phi * r^3\n";
		cout << "\n";
		cout << " Masukkan jari-jari : ";
		cin >> r;
		cout << "\n";
		cout << " Volume Bola = " << Bola(r) << " cm3" << endl;
	}
	else if (pilihan == 0 ){
		cout << "ANDA AKAN KELUAR DARI PROGRAM";
	}
	else cout << " Program Tidak Ditemukan";
z:
	cout << "\n";
	cout << "---------------------------------------------\n";
	cout << " Kembali ke menu? \n '1' jika ya dan '0' jika tidak  : ";
	cin >> balik;
	if(balik == 1){
		system("cls");
		goto x;
	}
	else if (balik == 0){
		system("cls");
		cout << " ANDA TELAH KELUAR DARI PROGRAM\n";
		cout << " PROGRAM BERAKHIR";
	}
}
