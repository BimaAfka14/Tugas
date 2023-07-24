#include<iostream>
using namespace std;
//Judul
//  Menampilkan : Operasi Aritmatika Sederhana
//Memo
//  Oleh : Bima Afkanur Rifqi
//  Tanggal : 24 September 2022
//  Tempat  : Universitas Dian Nuswantoro
//Kamus
// Perkalian
// Pembagian
// Pengurangan
// Penjumlahan
// Menentukan Jenis Bilangan Genap atau Ganjil
int a;
int b;
//Diskripsi
main()
{
    cout << "=====================================" << endl;
    cout << "Operasi Aritmatika Sederhana" << endl;
    cout << "=====================================" << endl;
    cout << "" << endl;
    cout << "Masukan angka pertama : "; cin >> a;// Input nilai A
    cout << "Masukan angka kedua : " ; cin >> b; // Input nilai B
    char jenisop;
    cout << "Pilih Operasi yang akan digunakan " << endl;
    cout << " Perkalian = A     Pembagian = B       Penjumlahan = C" << endl;
    cout << " Pengurangan = D   Semua Operasi = E" << endl;
    cout << " Pilih Operasi : " ; cin >> jenisop; // Pemilihan Jenis Operasi
    int hasilkali = a * b;
    int hasilbagi = a / b;
    int hasiltambah = a + b;
    int hasilkurang = a - b;
    switch (jenisop) {
        case 'A' :
            cout << "Hasil perkalian kedua bilangan = " << hasilkali << endl;
            if (hasilkali%2==0){
                cout << hasilkali << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkali << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'a' :
            cout << "Hasil perkalian kedua bilangan = " << hasilkali << endl;
            if (hasilkali%2==0){
                cout << hasilkali << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkali << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'B' :
            cout << "Hasil pembagian kedua bilangan = " << hasilbagi << endl;
            if (hasilbagi%2==0){
                cout << hasilbagi << " adalah bilangan genap" << endl;
            }else {
                cout << hasilbagi << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'b' :
            cout << "Hasil pembagian kedua bilangan = " << hasilbagi << endl;
            if (hasilbagi%2==0){
                cout << hasilbagi << " adalah bilangan genap" << endl;
            }else {
                cout << hasilbagi << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'C' :
            cout << "Hasil penjumlahan kedua bilangan = " << hasiltambah << endl;
            if (hasiltambah%2==0){
                cout << hasiltambah << " adalah bilangan genap" << endl;
            }else {
                cout << hasiltambah << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'c' :
            cout << "Hasil penjumlahan kedua bilangan = " << hasiltambah << endl;
            if (hasiltambah%2==0){
                cout << hasiltambah << " adalah bilangan genap" << endl;
            }else {
                cout << hasiltambah << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'D' :
            cout << "Hasil pengurangan kedua bilangan = " << hasilkurang << endl;
            if (hasilkurang%2==0){
                cout << hasilkurang << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkurang << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'd' :
            cout << "Hasil pengurangan kedua bilangan = " << hasilkurang << endl;
            if (hasilkurang%2==0){
                cout << hasilkurang << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkurang << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'E' :
            cout << "Hasil perkalian = " << hasilkali << endl;
            if (hasilkali%2==0){
                cout << hasilkali << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkali << " adalah bilangan ganjil" << endl;
            }
            cout << "Hasil pembagian = " << hasilbagi << endl;
            if (hasilbagi%2==0){
                cout << hasilbagi << " adalah bilangan genap" << endl;
            }else {
                cout << hasilbagi << " adalah bilangan ganjil" << endl;
            }
            cout << "Hasil penambahan = " << hasiltambah << endl;
            if (hasiltambah%2==0){
                cout << hasiltambah << " adalah bilangan genap" << endl;
            }else {
                cout << hasiltambah << " adalah bilangan ganjil" << endl;
            }
            cout << "Hasil pengurangan = " << hasilkurang << endl;
            if (hasilkurang%2==0){
                cout << hasilkurang << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkurang << " adalah bilangan ganjil" << endl;
            }
            break;
        case 'e' :
            cout << "Hasil perkalian = " << hasilkali << endl;
            if (hasilkali%2==0){
                cout << hasilkali << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkali << " adalah bilangan ganjil" << endl;
            }
            cout << "Hasil pembagian = " << hasilbagi << endl;
            if (hasilbagi%2==0){
                cout << hasilbagi << " adalah bilangan genap" << endl;
            }else {
                cout << hasilbagi << " adalah bilangan ganjil" << endl;
            }
            cout << "Hasil penambahan = " << hasiltambah << endl;
            if (hasiltambah%2==0){
                cout << hasiltambah << " adalah bilangan genap" << endl;
            }else {
                cout << hasiltambah << " adalah bilangan ganjil" << endl;
            }
            cout << "Hasil pengurangan = " << hasilkurang << endl;
            if (hasilkurang%2==0){
                cout << hasilkurang << " adalah bilangan genap" << endl;
            }else {
                cout << hasilkurang << " adalah bilangan ganjil" << endl;
            }
            break;
        default:
            cout << "Maaf, operasi aritmatika tidak ditemukan." << endl;
    }
}
