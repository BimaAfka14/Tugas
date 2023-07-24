#include<iostream>
#include<string.h>
#include<istream>
using namespace std;
//judul : Menampilkan KRS dan KHS
//memo  :
//  Bima Afkanur Rifqi
//  A11.2022.14719
//  Universitas Dian Nuswantoro
//kamus
char nama[50];
char nim[50];
char kelompok[30];
char inputan[30];
char inputan2[30];
char inputan3 [30];
char ulang[5];
string matkul1;
string matkul2;
string matkul3;
string matkul4;
string matkul5;
string matkul6;
string matkul7;
int sks1;
int sks2;
int sks3;
int sks4;
int sks5;
int sks6;
int sks7;
int nilai1;
int nilai2;
int nilai3;
int nilai4;
int nilai5;
int nilai6;
int nilai7;
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
    nilai:
    cout << "Masukan banyak SKS setiap mata kuliah " << endl ;
    cout << matkul1 << " : "; cin >> sks1;
    cout << matkul2 << " : "; cin >> sks2;
    cout << matkul3 << " : "; cin >> sks3;
    cout << matkul4 << " : "; cin >> sks4;
    cout << matkul5 << " : "; cin >> sks5;
    cout << matkul6 << " : "; cin >> sks6;
    cout << matkul7 << " : "; cin >> sks7;
    cout << "Apakah SKS yang dimasukan sudah benar : "; cin >> inputan2;
    if(strcmp(inputan2,"belum")==0 || strcmp(inputan2,"BELUM")==0 || strcmp(inputan2,"Belum")==0)
    {
        goto nilai;
    }
    else if(strcmp(inputan2,"sudah")==0 || strcmp(inputan2,"Sudah")==0 || strcmp(inputan2,"SUDAH")==0)
    {
        goto lanjut2;
    }
    lanjut2:
    cout << endl;
    cout << "==============================================" << endl;
    cout << "               KHS Mahasiswa                  " << endl;
    cout << "==============================================" << endl;
    cout << endl;
    nilai2:
    sub1:
    cout << "Masukan nilai setiap mata kuliah " << endl;
    cout << matkul1 << " : "; cin >> nilai1;
    if(nilai1 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!" << endl;
        goto sub1;
    }
    sub2 :
    cout << matkul2 << " : "; cin >> nilai2;
    if(nilai2 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!" << endl;
        goto sub2;
    }
    sub3:
    cout << matkul3 << " : "; cin >> nilai3;
    if(nilai3 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!" << endl;
        goto sub3;
    }
    sub4:
    cout << matkul4 << " : "; cin >> nilai4;
    if(nilai4 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!";
        goto sub4;
    }
    sub5:
    cout << matkul5 << " : "; cin >> nilai5;
    if(nilai5 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!";
        goto sub5;
    }
    sub6:
    cout << matkul6 << " : "; cin >> nilai6;
    if(nilai6 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!";
        goto sub6;
    }
    sub7:
    cout << matkul7 << " : "; getline(cin,nilai7);
    if(nilai7 > 100)
    {
        cout << "Nilai tidak bisa lebih dari seratus !!!";
        goto sub7;
    }
    cout << "Apakah SKS yang dimasukan sudah benar : "; cin.getline(inputan3,30);
    if(strcmp(inputan3,"belum")==0 || strcmp(inputan3,"BELUM")==0 || strcmp(inputan3,"Belum")==0)
    {
        goto nilai2;
    }
    else if(strcmp(inputan3,"sudah")==0 || strcmp(inputan3,"Sudah")==0 || strcmp(inputan3,"SUDAH")==0)
    {
        goto lanjut3;
    }
    lanjut3:
    cout << endl;
    cout << "==========================================================================================" << endl;
    cout << "                                  KRS dan KHS MAHASISWA" << endl;
    cout << "                               UNIVERSITAS DIAN NUSWANTORO" << endl;
    cout << "==========================================================================================" << endl;
    cout << endl;
    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "Kelp   : " << kelompok << endl;
    cout << endl;
    cout << "==========================================================================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul1 << " : " << endl;
    cout << "--> SKS    : " << sks1 << endl;
    cout << "--> Nilai  : " << nilai1 << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul2 << " : " << endl;
    cout << "--> SKS    : " << sks2 << endl;
    cout << "--> Nilai  : " << nilai2 << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul3 << " : " << endl;
    cout << "--> SKS    : " << sks3 << endl;
    cout << "--> Nilai  : " << nilai3 << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul4 << " : " << endl;
    cout << "--> SKS    : " << sks4 << endl;
    cout << "--> Nilai  : " << nilai4 << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul5 << " : " << endl;
    cout << "--> SKS    : " << sks5 << endl;
    cout << "--> Nilai  : " << nilai5 << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul6 << " : " << endl;
    cout << "--> SKS    : " << sks6 << endl;
    cout << "--> Nilai  : " << nilai6 << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << matkul7 << " : " << endl;
    cout << "--> SKS    : " << sks7 << endl;
    cout << "--> Nilai  : " << nilai7 << endl;
    cout << "=================================" << endl;
    cout << endl;
    int totalsks=sks1+sks2+sks3+sks4+sks5+sks6+sks7;
    int totalnilai=nilai1+nilai2+nilai3+nilai4+nilai5+nilai6+nilai7;
    int rata=totalnilai/totalsks;
    cout << "=================================" << endl;
    cout << " Total SKS     : " << totalsks << endl;
    cout << " Total Nilai   : " << totalnilai << endl;
    cout << " Rata - Rata   : " << rata << endl;
    cout << "=================================" << endl;
    cout << "Apakah anda ingin mengulang program (ya/tidak): "; cin.getline(ulang,5);
    if(strcmp(ulang,"ya")==0 || strcmp(ulang,"YA")==0 || strcmp(ulang,"Ya")==0)
    {
        goto awal;
    }
    else if(strcmp(ulang,"TIDAK")==0 || strcmp(ulang,"Tidak")==0 || strcmp(ulang,"tidak")==0)
    {
        cout << "Terimakasih";
    }
}
