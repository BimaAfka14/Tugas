//judul : input data diri
//memo  :
//  Oleh    : Bima Afkanur Rifqi
//  Tanggal : 21 September 2022
//  Tempat  : Univesitas Dian Nuswantoro
#include <iostream>
#include <string>
using namespace std;
//kamus

//diskripsi
main()
{
string namalengkap;
string jeniskelamin;
    cout << "===========================================================================================================" << endl;
    cout << "=                          =" << endl;
    cout << "= Menampilkan Data Inputan =" << endl;
    cout << "=                          =" << endl;
    cout << "===========================================================================================================" << endl;
    cout << "=                          =" << endl;
    cout << "= Masukan Nama : ";
    getline (cin, namalengkap);
    cout << "Masukan Jenis Kelamin (Laki - laki/Perempuan) : ";
    getline (cin, jeniskelamin);
    cout << "===========================================================================================================" << endl;
    cout << "Maka nama anda adalah " << namalengkap << " dan jenis kelamin anda adalah " << jeniskelamin << "." << endl;
    cout << "===========================================================================================================";
}
