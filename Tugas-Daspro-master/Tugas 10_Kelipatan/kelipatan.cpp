#include<iostream>
#include<stdio.h>
using namespace std;
//judul
//  Menampilkan Kelipatan 6
//memo
//  Bima Afkanur Rifqi
//  A11.2022.14719
//  Universitas Dian Nuswantoro
//kamus
int a;
//diskripsi
int main()
{
    cout << "===============================================" << endl;
    cout << "       Menampilkan Kelipatan Angka 6"            << endl;
    cout << "                   0-100                       " << endl;
    cout << "===============================================" << endl;
    cout << "Kelipatan 6 adalah" << endl;
    a = 6;
    do
    {
        cout << a << endl;
        a=a+6;
    }
    while(a<=100);
}
