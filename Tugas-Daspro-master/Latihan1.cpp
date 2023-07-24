//Judul
//Memo
#include <iostream>
#include <string.h>
using namespace std;
//Kamus
int bawang;
int cabai = 2;
int sawi = 2;
int telur = 1;
int mie = 1;
//Diskripsi
int main()
{
    cout << "=============================" << endl;
    cout << "Cara Membuat Mie Goreng Telur" << endl;
    cout << "=============================" << endl;
    cout << "Siapkan bahan - bahan berikut : " << endl;
    cout << " " << endl;
    cout << "1) Mie goreng 1 bungkus  ";
    cout << "2) Telur Ayam Mentah 1 butir  ";
    cout << "3) Sawi 2 Helai " << endl;
    cout << "4) Air 1 liter           ";
    cout << "5) Cabai 2 buah               ";
    cout << "6) Bawang merah 3 siung" << endl;
    cout << " " << endl;
    cout << "Ambil 3 Siung bawang, " << endl;
    cout << "1 ==> Sudah " << endl;
    cout << "0 ==> Belum " << endl;
    cout << "Apakah anda sudah mengambil 3 siung bawang : ";
    cin >> bawang;
    switch (bawang)
    {
    case 1 :
        {
            cout << "Lalu Kupas bawang" << endl;
            break;
        }
    case 0 :
        {
            cout << "Ambil lagi !!!" << endl;
            break;
        }
    default :
        {
            cout << "Jawab dengan ==> 1/0" << endl;
        }
    }
    cout << "1 ==> Sudah " << endl;
    cout << "0 ==> Belum " << endl;
    cout << "Apakah anda sudah mengupas 3 siung bawang : ";
    cin >> bawang;
    switch (bawang)
    {
    case 1 :
        {
            cout << "Lalu iris bawang menjadi tipis tipis" << endl;
            break;
        }
    case 0 :
        {
            cout << "Kupas lagi !!!" << endl;
            break;
        }
    default :
        {
            cout << "Jawab dengan ==> 1/0" << endl;
        }
    }
}
