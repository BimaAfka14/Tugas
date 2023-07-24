#include<iostream>
using namespace std;
// Judul
//  Simulasi Array
// Kamus
int data[5];
int bilangan, bil1, angka, values, nilai;
int a;
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
    cout << "input variabel data[4]       : "; cin >> data[4];
    cout << "input variabel data[1]   : " ; cin >> data[1];
    cout << "input variabel data[5]      : " ; cin >> data[5] ;
    cout << "input variabel data[2]     : " ; cin >> data[2] ;
    cout << "input variabel data[3]      : " ; cin >> data[3] ;
    cout << " " << endl;
    cout << "output variabel data[4]       : " << data[4] << endl;
    cout << "output variabel data[1]   : " << data[1] << endl;
    cout << "output variabel data[5]      : " << data[5] << endl;
    cout << "output variabel data[3]     : " << data[3] << endl;
    cout << "output variabel data[2]      : " << data[2] << endl;
    cout << " " << endl;
    int caribebek;
    int ketemu;
    cout << "Masukan yang anda cari : "; cin >> caribebek;
    a=1;
    while(a<6)
    {
        if(caribebek == data[a])
        {
            ketemu = a;
        }
        a = a+1;
    }
    cout << " Hore data ketemu di : " << ketemu;
    a=1;
    do
    {
        cout << data[a] << endl;
        a=a+1;
    }while(a<6);

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
        cout << " ini adalah angka ";
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

