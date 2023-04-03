#include <iostream>

using namespace std;

struct alamatDetail
{
	string desa;
	string kota;


};

struct mahasiswa {
	string nim;
	string nama;
	alamatDetail alamat;
	int umur;
};

int main() {

	mahasiswa mhs;

	out << "massukan nim: ";
	cin >> mhs.nim;
	cout << "masukkan nama: ";
	cin >> mhs.nama;
	cout << "masukkan alamat << endl;
		cout << "\tNama desa :";
	cin >> mhs.alamat.desa;
	cout << "masukkan umur: ";
	cin >> mhs.umur;
