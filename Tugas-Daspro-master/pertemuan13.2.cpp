#include<iostream>
using namespace std;
// Judul
//  Simulasi Array
// Kamus
int bilangan, bil1, angka, values, nilai; // variable bilangan biasa
// Diskripsi
int main()
{
    cout << "input variable bil1        : ";cin >> bil1;
    cout << "input variable bilangan    : ";cin >> bilangan;
    cout << "input variable angka       : ";cin >> angka;
    cout << "input variable values      : ";cin >> values;
    cout << "input variable nilai       : ";cin >> nilai;
    cout << " " << endl;
    cout << "output variabel bil1       : " << bil1 << endl;
    cout << "output variabel bilangan   : " << bilangan << endl;
    cout << "output variabel angka      : " << angka << endl;
    cout << "output variabel values     : " << values << endl;
    cout << "output variabel nilai      : " << nilai << endl;
    cout << " " << endl;

    int caricari;
    cout << "Masukan yang kita cari : "; cin >> caricari;
    if(caricari == bil1)
    {
        cout << " ini adalah bil1 ";
    }
    else if(caricari == bilangan)
    {
        cout << " ini adalah bilangan ";
    }
    else if(caricari == angka)
    {
        cout << " ini adalah angka ";
    }
    else if(caricari == values)
    {
        cout << " ini adalah values ";
    }
    else if(caricari == nilai)
    {
        cout << " ini adalah nilai ";
    }
    else
    {
        cout << " no valid ";
    }
}

