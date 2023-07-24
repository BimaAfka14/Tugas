#include<iostream>
using namespace std;

int n;
int f_n;
int f_n1;
int f_n2;

int main()
{
    main:
    cout << " Fibonanci " << endl;
    cout << " Masukan nilai ke - n : "; cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << " ";
    do
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        n += 0;

        cout << f_n << " ";
    }while(f_n < n);


    goto main;
}
