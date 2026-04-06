#include <iostream>
using namespace std;

struct alamatdetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    alamatdetail alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs;
    // mengisi data
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "isikan data usia : ";
    cin >> mhs.umur;

    cout << "data mahasiswa" << endl;
    cout << "nama : "<< mhs.nama << endl;
    cout << "alamat : "<< mhs.alamat.kota << endl;
    cout << "alamat : "<< mhs.alamat.desa << endl;
    cout << "umur : "<< mhs.umur << endl;
}