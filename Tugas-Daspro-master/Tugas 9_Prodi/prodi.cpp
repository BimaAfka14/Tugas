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
    cout << "               Memilih fakultas dan prodi" << endl;
    cout << "========================================================" << endl;
    cout << "           Pilih Fakultas dengan huruf kapital" << endl;
    cout << "========================================================" << endl;
    cout << "Fakultas Ilmu Komputer         = A " << endl;
    cout << "Fakultas Ekonomi dan Bisnis    = B " << endl;
    cout << "Fakultas Ilmu dan Budaya       = C " << endl;
    cout << "Masukan pilihan anda : "; cin >> faku;
    switch(toupper(faku))
    {
        case 'A':
            {
                cout << "Anda berada di fakultas ilmu komputer" << endl;
                cout << "Kode Prodi : "; cin >> kopro;
                if(strcmp(kopro,"a11")==0 || strcmp(kopro,"A11")==0)
                {
                    cout << "Prodi Teknik Informatika - S1";
                }
                else if((strcmp(kopro,"a12")==0 || strcmp(kopro,"A12")==0))
                {
                    cout << "Prodi Sistem Informasi - S1";
                }
                else if((strcmp(kopro,"a14")==0 || strcmp(kopro,"A14")==0))
                {
                    cout << "Prodi Desain Komunikasi Visual - S1";
                }
                else if((strcmp(kopro,"a15")==0 || strcmp(kopro,"A15")==0))
                {
                    cout << "Prodi Ilmu Komunikasi - S1";
                }
                else if((strcmp(kopro,"a16")==0 || strcmp(kopro,"A16")==0))
                {
                    cout << "Prodi Film dan Televisi - D4";
                }
                else if((strcmp(kopro,"a17")==0 || strcmp(kopro,"A17")==0))
                {
                    cout << "Prodi Animasi - D4";
                }
                else if((strcmp(kopro,"a21")==0 || strcmp(kopro,"A21")==0))
                {
                    cout << "Prodi Manajemen Informatika - D3";
                }
                else if((strcmp(kopro,"a22")==0 || strcmp(kopro,"A22")==0))
                {
                    cout << "Prodi Teknik Informatika - D3";
                }
                else if((strcmp(kopro,"a24")==0 || strcmp(kopro,"A24")==0))
                {
                    cout << "Prodi Broadcasting - D3";
                }
                break;
            }
        case 'B':
            {
                cout << "Anda berada di fakultas ekonomi dan bisnis";
                cout << "Kode Prodi : "; cin >> kopro;
                if(strcmp(kopro,"b11")==0 || strcmp(kopro,"B11")==0)
                {
                    cout << "Prodi Manajemen - S1";
                }
                else if(strcmp(kopro,"b12")==0 || strcmp(kopro,"B12")==0)
                {
                    cout << "Prodi Akuntansi - S1";
                }
                else if(strcmp(kopro,"b13")==0 || strcmp(kopro,"B13")==0)
                {
                    cout << "Prodi Ekonomi Syariah - S1";
                }
                break;
            }
        case 'C':
            {
                cout << "Kode Prodi : "; cin >> kopro;
                cout << "Anda berada di fakultas ilmu dan budaya";
                if(strcmp(kopro,"c11")==0 || strcmp(kopro,"C11")==0)
                {
                    cout << "Prodi Sastra Inggris - S1";
                }
                else if(strcmp(kopro,"c12")==0 || strcmp(kopro,"C12")==0)
                {
                    cout << "Prodi Sastra Jepang - S1";
                }
                else if(strcmp(kopro,"c13")==0 || strcmp(kopro,"C13")==0)
                {
                    cout << "Prodi Manajemen Perhotelan - D4";
                }
                break;
            }
        case 'D':
            {
                cout << "Kode Prodi : "; cin >> kopro;
                cout << "Anda berada di fakultas kesehatan";
                if(strcmp(kopro,"d11")==0 || strcmp(kopro,"D11")==0)
                {
                    cout << "Prodi Kesehatan Masyarakat - S1";
                }
                else if(strcmp(kopro,"d12")==0 || strcmp(kopro,"D12")==0)
                {
                    cout << "Prodi Kesehatan Lingkungan - S1";
                }
                else if(strcmp(kopro,"d22")==0 || strcmp(kopro,"D22")==0)
                {
                    cout << "Prodi Rekam medis & info kesehatan - D3";
                }
                break;
            }
        case 'E':
            {
                cout << "Kode Prodi : "; cin >> kopro;
                cout << "Anda berada di fakultas teknik";
                if(strcmp(kopro,"e11")==0 || strcmp(kopro,"E11")==0)
                {
                    cout << "Prodi Teknik Elektro - S1";
                }
                else if(strcmp(kopro,"e12")==0 || strcmp(kopro,"E12")==0)
                {
                    cout << "Prodi Teknik Industri - S1";
                }
                else if(strcmp(kopro,"e13")==0 || strcmp(kopro,"E13")==0)
                {
                    cout << "Prodi Teknik Biomedis - S1";
                }
                break;
            }
        default:
            {
                cout << "Data tidak valid";
            }
    }
}
