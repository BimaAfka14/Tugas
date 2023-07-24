#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float a;
float t;
float m;

int main()
{
    cout << " Menentukan jenis segitiga melalui panjang sisinya " << endl;
    cout << endl;
    cout << "Masukan panjang alas       : "; cin >> a;
    cout << "Masukan tinggi segitiga    : "; cin >> t;

    float d = pow(a,2);
    float e = pow(t,2);
    float f = pow(m,2);
    float miring = sqrt(d + e);
    float alas = sqrt(f-e);
    float tinggi = sqrt(d-f);

    cout << endl;

    cout << "Panjang sisi miring : " << miring << endl;
}
