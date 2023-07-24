//Judul : implementasi depend on dengan case
//Memo : 28 sept 2022 d2g Bima Afkanur Rifqi
#include<iostream>
#include<string.h>
using namespace std;
//Kamus :
char faku;
char kopro[5];
//Diskripsi
main()
{
    cout << "========================================================" << endl;
    cout << "Penggunaan Switch case dalam memilih fakultas dan prodi" << endl;
    cout << "========================================================" << endl;
    cout << "Pilih Fakultas dengan huruf kapital" << endl;
    cout << "========================================================" << endl;
    cout << "Fakultas Ilmu Komputer = A " << endl;
    cout << "Fakultas Ekonomi dan Bisnis = B " << endl;
    cout << "Fakultas Ilmu dan Budaya = C " << endl;
    cout << "Masukan pilihan anda : "; cin >> faku;
    switch(toupper(faku))
    {
        case 'A':
            {
                cout << "Anda berada di fakultas ilmu komputer" << endl;
                cout << "Kode Prodi : "; cin >> kopro;
                if(strcmp(kopro,"a11")==0 || strcmp(kopro,"A11")==0)
                {
                    cout << "Prodi Teknik Informatika S1";
                }
                else if((strcmp(kopro,"a12")==0 || strcmp(kopro,"A12")==0))
                {
                    cout << "Prodi Sistem Informasi S1";
                }
                else if((strcmp(kopro,"a13")==0 || strcmp(kopro,"A13")==0))
                {
                    cout << "Prodi Televisi dan Animasi";
                }
                else if((strcmp(kopro,"a14")==0 || strcmp(kopro,"A14")==0))
                {
                    cout << "Prodi DKV S1";
                }
                else if((strcmp(kopro,"a15")==0 || strcmp(kopro,"A15")==0))
                {
                    cout << "Ilmu Komputer S1";
                }
                break;
            }
        case 'B':
            {
                cout << "Anda berada di fakultas ekonomi dan bisnis";
                cout << "Kode Prodi : "; cin >> kopro;
                if(strcmp(kopro,"a11")==0 || strcmp(kopro,"B11")==0)
                break;
            }
        case 'C':
            {
                cout << "Anda berada di fakultas ilmu dan budaya";
                break;
            }
        default:
            {
                cout << "Data tidak valid";
            }
    }
}
