#include <iostream>

using namespace std;
struct alamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasisiswa {
	char nim[12];
	char nama[20];
	alamatDetail alamat;
	int umur;
};

int main() {

	Mahasisiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "masukkan nim: ";
		cin.getline(mhs[i].nim, 12);
		cout << "masukkan nama :";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat :" << endl;
		cout << "\tNama desa :";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tNama kota :";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukkan umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\nNim : " << mhs[i].nim;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\ndesa : " << mhs[i].alamat.desa;
		cout << "\kota : " << mhs[i].alamat.kota;
		cout << "\numur: " << mhs[i].umur;
	}
}

