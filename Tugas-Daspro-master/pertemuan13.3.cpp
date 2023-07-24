#include<iostream>
using namespace std;
// Judul
//  Simulasi Array
// Kamus
int data[5]; // Pemakaian data array
int a;
// Diskripsi
int main()
{
    cout << "input variabel data[4]         : "; cin >> data[4];
    cout << "input variabel data[1]         : " ; cin >> data[1];
    cout << "input variabel data[5]         : " ; cin >> data[5] ;
    cout << "input variabel data[2]         : " ; cin >> data[2] ;
    cout << "input variabel data[3]         : " ; cin >> data[3] ;
    cout << " " << endl;
    cout << "output variabel data[4]        : " << data[4] << endl;
    cout << "output variabel data[1]        : " << data[1] << endl;
    cout << "output variabel data[5]        : " << data[5] << endl;
    cout << "output variabel data[3]        : " << data[2] << endl;
    cout << "output variabel data[2]        : " << data[3] << endl;
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
    cout << " Hore data ketemu di : " << "data" << "[" << ketemu << "]";
}

