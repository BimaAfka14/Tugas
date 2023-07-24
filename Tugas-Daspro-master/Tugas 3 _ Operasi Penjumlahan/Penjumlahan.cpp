#include <iostream>
using namespace std;
//Judul
//Menampilkan Hasil Penjumlahan Bilangan Input X dan Bilangan Input Y
//Kamus
int x;
int y;
int hasil;
//Diskripsi
main()
{
    cout << "=============================================" << endl;
    cout << "     Operasi Penjumlahan Variable X dan Y" << endl;
    cout << "=============================================" << endl;
    cout << "" << endl;
    cout << "Pertama, masukan nilai X-nya" << endl;
    cout << "Nilai X    : " ;
    cin >> x;
    cout << "Lalu, masukan nilai Y-nya" << endl;
    cout << "Nilai Y    : ";
    cin >> y;
    cout << "" << endl;
    hasil = x + y;
    cout << "Maka hasil penjumlahan dari " << x << " dan " << y << " adalah " << hasil << endl;
    cout << "=============================================";
}
