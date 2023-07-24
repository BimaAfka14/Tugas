#include<iostream>
#include<string.h>
using namespace std;
//judul : Menampilkan KRS dan KHS
//memo
//  Bima Afkanur Rifqi
//  A11.2022.14719
//  Universitas Dian Nuswantoro
//kamus
char nama[50];
char nim[50];
char kelompok[30];
char inputan[30];
string matkul1;
string matkul2;
string matkul3;
string matkul4;
string matkul5;
string matkul6;
string matkul7;
//diskripsi
int main()
{
    awal:
    cout << "==================================" << endl;
    cout << "Menampilkan Program KRS dan KHS" << endl;
    cout << "==================================" << endl;
    cout << endl;
    cout << "Masukan Nama       : ";cin.getline(nama,50);
    cout << "Masukan NIM        : ";cin.getline(nim,50);
    cout << "Masukan Kelompok   : ";cin.getline(kelompok,30);
    cout << "==================================" << endl;
    cout << "Masukan Nama Matkul    : " << endl;
    cout << "Mata Kuliah 1  : ";getline(cin,matkul1);
    cout << "Mata Kuliah 2  : ";getline(cin,matkul2);
    cout << "Mata Kuliah 3  : ";getline(cin,matkul3);
    cout << "Mata Kuliah 4  : ";getline(cin,matkul4);
    cout << "Mata Kuliah 5  : ";getline(cin,matkul5);
    cout << "Mata Kuliah 6  : ";getline(cin,matkul6);
    cout << "Mata Kuliah 7  : ";getline(cin,matkul7);
    cout << "==================================" << endl;
    cout << endl;
    cout << " KRS MAHASISWA ADALAH " << endl;
    cout << endl;
    cout << "==================================" << endl;
    cout << endl;
    cout << "Nama       : " << nama << endl;
    cout << "NIM        : " << nim << endl;
    cout << "Kelompok   : " << kelompok << endl;
    cout << endl;
    cout << "Dengan Mata Kuliah : " << endl;
    cout << "Mata Kuliah 1  : " << matkul1 << endl;
    cout << "Mata Kuliah 2  : " << matkul2 << endl;
    cout << "Mata Kuliah 3  : " << matkul3 << endl;
    cout << "Mata Kuliah 4  : " << matkul4 << endl;
    cout << "Mata Kuliah 5  : " << matkul5 << endl;
    cout << "Mata Kuliah 6  : " << matkul6 << endl;
    cout << "Mata Kuliah 7  : " << matkul7 << endl;
    cout << endl;
    cout << "Apakah Mata Kuliah yang dimasukan sudah benar : " ;cin.getline(inputan,30);
    if(strcmp(inputan,"belum")==0 || strcmp(inputan,"BELUM")==0 || strcmp(inputan,"Belum")==0)
    {
        goto awal;
    }
    else if(strcmp(inputan,"sudah")==0 || strcmp(inputan,"Sudah")==0 || strcmp(inputan,"SUDAH")==0)
    {
        goto lanjut;
    }

    lanjut:
    cout << endl;
    cout << "==============================================" << endl;
    cout << "               KHS Mahasiswa                  " << endl;
    cout << "==============================================" << endl;
    cout << endl;
    cout << "Masukan Nilai "
}
