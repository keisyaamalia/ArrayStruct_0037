#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs;
    // mengisi data
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "isikan data usia : ";
    cin >> mhs.umur;

    cout << "data mahasiswa" << endl;
    cout << "nama : "<< mhs.nama << endl;
    cout << "alamat : "<< mhs.alamat << endl;
    cout << "umur : "<< mhs.umur << endl;
}