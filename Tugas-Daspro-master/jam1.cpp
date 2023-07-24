#include <iostream>
using namespace std;
// Judul : menampilkan format jam 00 - 23
// kamus :
int jam1,menit1,detik1;
int jam2,menit2,detik2;
int jam3;
int jam0;
// diskripsi
int main()
{
    jam1:
    cout << "Perhitungan jarak antar 2 waktu" << endl;
    cout << endl;
    cout << "Masukan jam awal   : "; cin >> jam1;
    cout << "Masukan menit awal : "; cin >> menit1;
    cout << "Masukan detik awal : "; cin >> detik1;
    if(jam1,menit1,detik1 <= 0 && jam1 > 24 && menit1,detik1 > 60)
    {
        cout << "Masukan format waktu 00 - 23" << endl;
        cout << endl;
        goto jam1;
    }
    cout << endl;
    cout << "waktu awal yang anda masukan ==> " << jam1 << ":" << menit1 << ":" << detik1;
    cout << endl;
    jam2:
    cout << "Masukan jam akhir  : "; cin >> jam2;
    cout << "Masukan menit akhir: "; cin >> menit2;
    cout << "Masukan detik akhir: "; cin >> detik2;
    if(jam1 = 00)
    {
        jam1=jam0;
        jam0 = 24;
    }
    if(jam2,menit2,detik2 <= 0 && jam2 > 24 && menit2,detik2 > 60)
    {
        cout << "Masukan format waktu 00 - 23" << endl;
        cout << endl;
        goto jam2;
    }
    cout << endl;
    cout << "waktu akhir yang anda masukan ==> " << jam2 << ":" << menit2 << ":" << detik2;

    int total1 = (jam1*3600) + (menit1*60) + detik1;
    int total2 = (jam2*3600) + (menit2*60) + detik2;

    int durasi=total2-total1;

    jam3 = durasi / 3600;
    int sisa = durasi % 3600;
    int menit3 = sisa/60;
    int detik3 = sisa%60;

    cout << endl;

    cout << "Maka lama waktunya adalah : " << jam3 << " jam," << menit3 << " ,menit" << detik3 << " ,detik";
}
