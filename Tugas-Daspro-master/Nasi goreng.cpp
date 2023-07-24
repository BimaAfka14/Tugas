     //judul
//kamus
//deskripsi
#include<iostream>
using namespace std;

int main (){
    cout<<"pasang wajan dan nyalakan kompor"<<endl;
    cout<<"tunggu wajan hingga panas"<<endl;
    int a;
    cout<<"masukkan angka: 1= sudah panas 0= belum panas"<<endl;
    cin>>a;
    if(a == 1){
        cout<<"masukkan nasi dan bumbu ke dalam panci"<<endl;}else if(a == 0){cout<<"tunggu wajan hingga panas"<<endl;}

    cout<<"tuang 3 sdm minyak ke wajan"<<endl;
    int b;
    cout<<"masukkan nilai: 3= sudah cukup, 2= belum cukup, 1 belum cukup"<<endl;
    cin>>b;
    if(b == 3){cout<<"sudah cukup"<<endl;}else if(b == 2){cout<<"masukkan 1 sendok lagi"<<endl;}else if(b == 1){cout<<"masukkan 2 sendok lagi"<<endl;}
    cout<<"Masukkan nasi dan bumbu nasi goreng lalu aduk hingga rata"<<endl;
    int c;
    cout<<"masukkan angka: 1= sudah rata, 0= belum rata"<<endl;
    cin>>c;
    if(c == 1){cout<<"nasi sudah rata"<<endl;}else if(c == 0){cout<<"aduk nasi hingga rata"<<endl;}
    cout<<"Masukkan dan pecahkan 1 buah telur ke wajan dan Masak hingga matang"<<endl;
    int d;
    cout<<"masukkan angka: 1= sudah matang 0= belum matang"<<endl;
    cin>>d;
    if(d == 1){cout<<"telur sudah matang"<<endl;}else if(d == 0){cout<<"telur belum matang"<<endl;}
    cout<<"sajikan nasi goreng telur di atas piring"<<endl;
    cout<<"selesai"<<endl;
    return 0;
}
