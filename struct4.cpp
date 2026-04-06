#include <iostream>
#include <string>
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
    mahasiswa mhs[3];
    // mengisi data
    for (int i = 0; i <= 2; i++)
    {
    cout << "isikan data nama : ";
    getline(cin, mhs[i].nama);
    cout << "isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout << "isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();

    for (int i = 0; i <= 2; i++)
    {
    cout << "data mahasiswa ke-" << i + 1 << " : " << endl;
    cout << "nama : "<< mhs[i].nama << endl;
    cout << "alamat : "<< mhs[i].alamat.kota << endl;
    cout << "alamat : "<< mhs[i].alamat.desa << endl;
    cout << "umur : "<< mhs[i].umur << endl;
    }
}