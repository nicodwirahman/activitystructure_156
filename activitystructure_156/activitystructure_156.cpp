#include <iostream>

using namespace std;

struct mahasiswa{ 
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	mahasiswa mhs1, mhs2;

	mhs1.nim = "2022040011";
	mhs1.nama = "tasya";
	mhs1.alamat = "semarang";
		mhs1.umur = 20;

cout << "massukan nim: ";
cin >> mhs2.nim;
cout << "masukkan nama: ";
cin >> mhs2.nama;
cout << "masukkan alamat :";
cin >> mhs2.alamat;
cout << "masukkan umur: ";
cin >> mhs2.umur;

cout << "\nNim : " << mhs1.nim;
cout << "\nnama :" << mhs1.nama;
cout << "\nalamat : " << mhs1.alamat;
cout << "\numur : " << mhs1.umur;

cout << "\nNim : " << mhs2.nim;
cout << "\nnama :" << mhs2.nama;
cout << "\nalamat : " << mhs2.alamat;
cout << "\numur : " << mhs2.umur;
