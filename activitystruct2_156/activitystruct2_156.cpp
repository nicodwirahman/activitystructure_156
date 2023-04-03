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

	cout << "massukan nim: ";
	cin >> mhs.nim;
	cout << "masukkan nama: ";
	cin >> mhs.nama;
	cout << "alamat:" << endl;
	cout << "\tNama desa :";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota :";
	cin >> mhs.alamat.kota;
	cout << "masukkan umur: ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nnama :" << mhs.nama;
	cout << "\nalamat : " << mhs.alamat.desa;
	cout << "\kota : " << mhs.alamat.kota;
}
