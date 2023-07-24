//judul : Menampilkan perangkingan antara 5 bilangan
//memo :    Bima Afkanur Rifqi
//          29 September 2022
//          Universitas Dian Nuswantoro
#include<iostream>
#include<string.h>
using namespace std;
//kamus
int a;
int b;
int c;
int d;
int e;
char perangkingan;
//deskripsi
main()
{
    inputawal:
    cout << "================================" << endl;
    cout << "Perangkingan dari kecil ke besar" << endl;
    cout << "================================" << endl;
    cout << "" << endl;
    input:
    cout << "Masukan nilai a : ";cin >> a;
    cout << "Masukan nilai b : ";cin >> b;
    cout << "Masukan nilai c : ";cin >> c;
    cout << "Masukan nilai d : ";cin >> d;
    cout << "Masukan nilai e : ";cin >> e;
    if(a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
    {
        operasi:
        cout << "================================" << endl;
        cout << "Pilih Operasi ranking" << endl;
        cout << "================================" << endl;
        cout << " > = lebih besar " << endl;
        cout << " < = lebih kecil " << endl;
        cout << "Masukan Plihan Anda : ";cin >> perangkingan;
        switch(perangkingan)
        {
        case '>':
            {
                if(a>b)
                {
                    if(b>c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                cout << "Maka,urutan dari yang terbesar adalah : ";
                                cout << a << " > " << b <<" > " << c <<" > " << d <<" > "<< e; // a,b,c,d,e
                            }
                            else if(d<e)
                            {
                                cout << "Maka,urutan dari yang terbesar adalah : ";
                                cout << a << " > " << b <<" > " << c <<" > " << e <<" > "<< d; // a,b,c,e,d
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(b>d && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << b <<" > " << d <<" > " << c <<" > "<< e; // a,b,d,c,e
                                }
                                else if(b>d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << b <<" > " << d <<" > " << e <<" > "<< c; // a,b,d,e,c
                                }
                                else if(b<d && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << d <<" > " << b <<" > " << e <<" > "<< c; // a,d,b,c,e
                                }
                                else if(b<d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << d <<" > " << b <<" > " << e <<" > "<< c; // a,d,b,e,c
                                }
                            }
                            else if(d<e)
                            {
                                if(b>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << b <<" > " << e <<" > " << d <<" > "<< c; //a,b,e,d,c
                                }
                                else if(b<e && b>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << e <<" > " << b <<" > " << d <<" > "<< c;// a,e,b,d,c
                                }
                                else if(b<e && b<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << e <<" > " << d <<" > " << b <<" > "<< c; // a,e,d,b,c
                                }
                            }
                        }
                    }
                    else if(b<c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                if(b>d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << c <<" > " << b <<" > " << d <<" > "<< e; // a,c,b,d,e
                                }
                                else if(b>d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << a <<" > " << b <<" > " << d <<" > "<< e; // c,a,b,d,e
                                }
                                else if(b<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << c <<" > " << d <<" > " << b <<" > "<< e; // a,c,d,b,e
                                }
                                else if(b<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << a <<" > " << d <<" > " << b <<" > "<< e; // c,a,d,b,e
                                }
                            }
                            else if(d<e)
                            {
                                if(a>c && b>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << c <<" > " << b <<" > " << e <<" > "<< d; // a,c,b,e,d
                                }
                                else if(a<c && b>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << a <<" > " << b <<" > " << e <<" > "<< d; // c,a,b,e,d
                                }
                                else if(a<c && b<e && b>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << a <<" > " << e <<" > " << b <<" > "<< d; // c,a,e,b,d
                                }
                                else if(a<c && b<e && b<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << a <<" > " << e <<" > " << d <<" > "<< b; // c,a,e,d,b
                                }
                                else if(a>c && b<e && b>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << c <<" > " << e<<" > " << b <<" > "<< d; // a,c,e,b,d
                                }
                                else if(a>c && b<e && b<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << c <<" > " << e <<" > " << d <<" > "<< b; // a,c,e,d,b
                                }
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(a>d && c>e && b>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << d <<" > " << c <<" > " << b <<" > "<< e; // a,d,c,b,e
                                }
                                else if(a>d && c>e && b<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << d <<" > " << c <<" > " << e <<" > "<< b; // a,d,c,e,b
                                }
                                else if(a>d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << d <<" > " << e <<" > " << c <<" > "<< b;// a,d,e,c,b
                                }
                                else if(a<d && c>e && b>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << a <<" > " << c <<" > " << b <<" > "<< e; // d,a,c,b,e
                                }
                                else if(a<d && c>e && b<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << a <<" > " << c <<" > " << e <<" > "<< b; // d,a,c,e,b
                                }
                                else if(a<d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << a <<" > " << e <<" > " << c <<" > "<< b; // d,a,e,c,b
                                }
                            }
                            else if(d<e)
                            {
                                if(a>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << a << " > " << e <<" > " << d <<" > " << c <<" > "<< b; // a,e,d,c,b
                                }
                                else if(a<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << a <<" > " << d <<" > " << c <<" > "<< b; // e,a,d,c,b
                                }
                            }
                        }
                    }
                }
                else if(a<b)
                {
                    if(b>c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                if(a>c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << a <<" > " << c <<" > " << d <<" > "<< e; // b,a,c,d,e
                                }
                                else if(a<c && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << c <<" > " << a <<" > " << d <<" > "<< e; // b,c,a,d,e
                                }
                                else if(a<c && a<d && a>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << c <<" > " << d <<" > " << a <<" > "<< e; // b,c,d,a,e
                                }
                                else if(a<c && a<d && a<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << c <<" > " << d <<" > " << e <<" > "<< a; // b,c,d,e,a
                                }
                            }
                            else if(d<e)
                            {
                                if(a>c && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << a <<" > " << c <<" > " << e <<" > "<< d; //b,a,c,e,d
                                }
                                else if(a>c && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << a <<" > " << e <<" > " << c <<" > "<< d; //b,a,e,c,d
                                }
                                else if(a<c && c>e && a>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << c <<" > " << a <<" > " << e <<" > "<< d; // b,c,a,e,d
                                }
                                else if(a<c && c>e && a<e && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << c <<" > " << e <<" > " << a <<" > "<< d; // b,c,e,a,d
                                }
                                else if(a<c && c>e && a<e && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << c <<" > " << e <<" > " << d <<" > "<< a; // b,c,e,d,a
                                }
                                else if(a<c && c<e && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << e <<" > " << c <<" > " << a <<" > "<< d; // b,e,c,a,d
                                }
                                else if(a<c && c<e && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << e <<" > " << c <<" > " << d <<" > "<< a; // b,e,c,d,a
                                }
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(a>e && a>c && b>d && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << d <<" > " << a <<" > " << c <<" > "<< e; // b,d,a,c,e
                                }
                                else if(b>d && a>c && a<e && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << d <<" > " << a <<" > " << e <<" > "<< c; // b,d,a,e,c
                                }
                                else if(b>d && a>c && a<e && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << d <<" > " << e <<" > " << a <<" > "<< c; // b,d,e,a,c
                                }
                                else if(b>d && a<c && a<e && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << d <<" > " << e <<" > " << c <<" > "<< a; // b,d,e,c,a
                                }
                                else if(b>d && a<c && a>e && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << d <<" > " << c <<" > " << a <<" > "<< e; // b,d,c,a,e
                                }
                                else if(b>d && a<c && a<e && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << d <<" > " << c <<" > " << e <<" > "<< a; // b,d,c,e,a
                                }
                                else if(b<d && b>e && a>c && a>e && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << b <<" > " << a <<" > " << c <<" > "<< e; // d,b,a,c,e
                                }
                                else if(b<d && b<e && a>c && c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << e <<" > " << b <<" > " << a <<" > "<< c; // d,e,b,a,c
                                }
                                else if(b<d && b<e && a<c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << e <<" > " << b <<" > " << c <<" > "<< a; // d, e ,b ,c ,a
                                }
                            }
                            else if(d<e)
                            {

                                if(b>e && a>d && a<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << e <<" > " << a <<" > " << d <<" > "<< c; // b,e,a,d,c
                                }
                                else if(b>e && a<e && a<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << e <<" > " << d <<" > " << a <<" > "<< c; // b,e,d,a,c
                                }
                                else if(b>e && a<c && a<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << b << " > " << e <<" > " << d <<" > " << c <<" > "<< a; // b,e ,d ,c,a
                                }
                                else if(b<e && b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << b <<" > " << a <<" > " << d <<" > "<< c; // e,b,a,d,c
                                }
                                else if(b<e && b>d && a<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << b <<" > " << d <<" > " << a <<" > "<< c; // e,b,d,a,c
                                }
                                else if(b<e && b>d && a<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << b <<" > " << d <<" > " << c <<" > "<< a; // e,b,d,c,a
                                }
                                else if(b<e && b<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << d <<" > " << b <<" > " << a <<" > "<< c; // e,d,b,a,c
                                }
                                else if(b<e && b<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << d <<" > " << b <<" > " << c <<" > "<< a; // e,d,b,c,a
                                }
                            }
                        }
                    }
                    else if(b<c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                if(b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << b <<" > " << a <<" > " << d <<" > "<< e; // c,b,a,d,e
                                }
                                else if(b>d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << b <<" > " << d <<" > " << a <<" > "<< e; // c,b,d,a,e
                                }
                                else if(b>d && a<d && a<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << b <<" > " << d <<" > " << e <<" > "<< a; // c,b,d,e,a
                                }
                                else if(b<d && b>e && a>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << d <<" > " << b <<" > " << a <<" > "<< e; // c,d,b,a,e
                                }
                                else if(b<d && b<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << d <<" > " << e <<" > " << b <<" > "<< a; //c,d,e,b,a
                                }
                            }
                            else if(d<e)
                            {
                                if(c>e && b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << e <<" > " << b <<" > " << a <<" > "<< d; // c,e,b,a,d
                                }
                                else if(c>e && b>d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << e <<" > " << b <<" > " << d <<" > "<< a; // c,e,b,d,a
                                }
                                else if(c>e && b<d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << c << " > " << e <<" > " << d <<" > " << b <<" > "<< a; // c,e,d,b,a
                                }
                                else if(c<e && b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << c <<" > " << b <<" > " << a <<" > "<< d; // e,c,b,a,d
                                }
                                else if(c<e && b>d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << c <<" > " << b <<" > " << d <<" > "<< a; // e,c,b,d,a
                                }
                                else if(c<e && b<d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " > " << c <<" > " << d <<" > " << b <<" > "<< a; // e,c,d,b,a
                                }
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(c>e && b>e && a>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << c <<" > " << b <<" > " << a <<" > "<< e; // d,c,b,a,e
                                }
                                else if(c>e && b>e && a<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << c <<" > " << b <<" > " << e <<" > "<< a; // d,c,b,e,a
                                }
                                else if(c>e && b<e && a<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << c <<" > " << e <<" > " << b <<" > "<< a; // d,c,e,b,a
                                }
                                else if(c<e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << d << " > " << e <<" > " << c <<" > " << b <<" > "<< a; // d,e,c,b,a
                                }
                            }
                            else if(d<e)
                            {
                                cout << "Maka,urutan dari yang terbesar adalah : ";
                                cout << e << " > " << d <<" > " << c <<" > " << b <<" > "<< a; // e,d,c,b,a
                            }
                        }
                    }
                }
                break;
            }
        case '<':
            {
                if(a>b)
                {
                    if(b>c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                cout << "Maka,urutan dari yang terkecil adalah : ";
                                cout << e << " < " << d <<" < " << c <<" < " << b <<" < "<< a; // e,d,c,b,a
                            }
                            else if(d<e)
                            {
                                cout << "Maka,urutan dari yang terkecil adalah : ";
                                cout << d << " < " << e <<" < " << c <<" < " << b <<" < "<< a; // d,e,c,b,a
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(b>d && c>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << c <<" < " << d <<" < " << b <<" < "<< a; // e,c,d,b,a
                                }
                                else if(b>d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << e <<" < " << d <<" < " << b <<" < "<< a; // c,e,d,b,a
                                }
                                else if(b<d && c>e)
                                {
                                    cout << "Maka,urutan dari yang terbesar adalah : ";
                                    cout << e << " < " << c <<" < " << b <<" < " << d <<" < "<< a; // e,c,b,d,a
                                }
                                else if(b<d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << e <<" < " << b <<" < " << d <<" < "<< a; // c,e,b,d,a
                                }
                            }
                            else if(d<e)
                            {
                                if(b>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << d <<" < " << e <<" < " << b <<" < "<< a; //c,d,e,b,a
                                }
                                else if(b<e && b>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << d <<" < " << b <<" < " << e <<" < "<< a;// c,d,b,e,a
                                }
                                else if(b<e && b<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << b <<" < " << d <<" < " << e <<" < "<< a; // c,b,d,e,a
                                }
                            }
                        }
                    }
                    else if(b<c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                if(b>d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << d <<" < " << b <<" < " << c <<" < "<< a; // e,d,b,c,a
                                }
                                else if(b>d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << d <<" < " << b <<" < " << a <<" < "<< c; // e,d,b,a,c
                                }
                                else if(b<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << b <<" < " << d <<" < " << c <<" < "<< a; // e,b,d,c,a
                                }
                                else if(b<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << b <<" < " << d <<" < " << a <<" < "<< c; // e,b,d,a,c
                                }
                            }
                            else if(d<e)
                            {
                                if(a>c && b>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << e <<" < " << b <<" < " << c <<" < "<< a; // d,e,b,c,a
                                }
                                else if(a<c && b>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << e <<" < " << b <<" < " << a <<" < "<< c; // d,e,b,a,c
                                }
                                else if(a<c && b<e && b>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << b <<" < " << e <<" < " << a <<" < "<< c; // d,b,e,a,c
                                }
                                else if(a<c && b<e && b<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << d <<" < " << e <<" < " << a <<" < "<< c; // c,a,e,d,b
                                }
                                else if(a>c && b<e && b>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << b <<" < " << e<<" < " << c <<" < "<< a; // d,b,e,c,a
                                }
                                else if(a>c && b<e && b<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << d <<" < " << e <<" < " << c <<" < "<< a; // b,d,e,c,a
                                }
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(a>d && c>e && b>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << b <<" < " << c <<" < " << d <<" < "<< a; // e,b,c,d,a
                                }
                                else if(a>d && c>e && b<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << e <<" < " << c <<" < " << d <<" < "<< a; // b,e,c,d,a
                                }
                                else if(a>d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << c <<" < " << e <<" < " << d <<" < "<< a;// b,c,e,d,a
                                }
                                else if(a<d && c>e && b>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << b <<" < " << c <<" < " << a <<" < "<< d; // e,b,c,a,d
                                }
                                else if(a<d && c>e && b<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << e <<" < " << c <<" < " << a <<" < "<< d; // b,e,c,a,d
                                }
                                else if(a<d && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << c <<" < " << e <<" < " << a <<" < "<< d; // b,c,e,a,d
                                }
                            }
                            else if(d<e)
                            {
                                if(a>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << c <<" < " << d <<" < " << e <<" < "<< a; // b,c,d,e,a
                                }
                                else if(a<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << b << " < " << c <<" < " << d <<" < " << a <<" < "<< e; // b,c,d,a,e
                                }
                            }
                        }
                    }
                }
                else if(a<b)
                {
                    if(b>c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                if(a>c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << d <<" < " << c <<" < " << a <<" < "<< b; // e,d,c,a,b
                                }
                                else if(a<c && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << d <<" < " << a <<" < " << c <<" < "<< b; // e,d,a,c,b
                                }
                                else if(a<c && a<d && a>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << a <<" < " << d <<" < " << c <<" < "<< b; // e,a,d,c,b
                                }
                                else if(a<c && a<d && a<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << e <<" < " << d <<" < " << c <<" < "<< b; // a,e,d,c,b
                                }
                            }
                            else if(d<e)
                            {
                                if(a>c && c>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << e <<" < " << c <<" < " << a <<" < "<< b; // d,e,c,a,b
                                }
                                else if(a>c && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << c <<" < " << e <<" < " << a <<" < "<< b; // d,c,e,a,b
                                }
                                else if(a<c && c>e && a>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << e <<" < " << a <<" < " << c <<" < "<< b; // d,e,a,c,b
                                }
                                else if(a<c && c>e && a<e && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << a <<" < " << e <<" < " << c <<" < "<< b; // d,a,e,c,b
                                }
                                else if(a<c && c>e && a<e && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << d <<" < " << e <<" < " << c <<" < "<< b; // a,d,e,c,b
                                }
                                else if(a<c && c<e && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << a <<" < " << c <<" < " << e <<" < "<< b; // d,a,c,e,b
                                }
                                else if(a<c && c<e && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << d <<" < " << c <<" < " << e <<" < "<< b; // a,d,c,e,b
                                }
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(a>e && a>c && b>d && c>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << c <<" < " << a <<" < " << d <<" < "<< b; // e,c,a,d,b
                                }
                                else if(b>d && a>c && a<e && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << e <<" < " << a <<" < " << d <<" < "<< b; // c,e,a,d,b
                                }
                                else if(b>d && a>c && a<e && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << a <<" < " << e <<" < " << d <<" < "<< b; // c,a,e,d,b
                                }
                                else if(b>d && a<c && a<e && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << c <<" < " << e <<" < " << d <<" < "<< b; // a,c,e,d,b
                                }
                                else if(b>d && a<c && a>e && c>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << a <<" < " << c <<" < " << d <<" < "<< b; // e,a,c,d,b
                                }
                                else if(b>d && a<c && a<e && c>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << e <<" < " << c <<" < " << d <<" < "<< b; // a,e,c,d,b
                                }
                                else if(b<d && b>e && a>c && a>e && c>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << c <<" < " << a <<" < " << b <<" < "<< d; // e,c,a,b,d
                                }
                                else if(b<d && b<e && a>c && c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << a <<" < " << b <<" < " << e <<" < "<< d; // c,a,b,e,d
                                }
                                else if(b<d && b<e && a<c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << c <<" < " << b <<" < " << e <<" < "<< d; // a,c,b,e,d
                                }
                            }
                            else if(d<e)
                            {

                                if(b>e && a>d && a<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << d <<" < " << a <<" < " << e <<" < "<< b; // c,d,a,e,b
                                }
                                else if(b>e && a<e && a<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << a <<" < " << d <<" < " << e <<" < "<< b; // c,a,d,e,b
                                }
                                else if(b>e && a<c && a<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << c <<" < " << d <<" < " << e <<" < "<< b; // a,c,d,e,b
                                }
                                else if(b<e && b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << d <<" < " << a <<" < " << b <<" < "<< e; // c,d,a,b,e
                                }
                                else if(b<e && b>d && a<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << a <<" < " << d <<" < " << b <<" < "<< e; // c,a,d,b,e
                                }
                                else if(b<e && b>d && a<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << c <<" < " << d <<" < " << b <<" < "<< e; // a,c,d,b,e
                                }
                                else if(b<e && b<d && a>c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << c << " < " << a <<" < " << b <<" < " << d <<" < "<< e; // c,a,b,d,e
                                }
                                else if(b<e && b<d && a<c)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << c <<" < " << b <<" < " << d <<" < "<< e; // a,c,b,d,e
                                }
                            }
                        }
                    }
                    else if(b<c)
                    {
                        if(c>d)
                        {
                            if(d>e)
                            {
                                if(b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << d <<" < " << a <<" < " << b <<" < "<< c; // e,d,a,b,c
                                }
                                else if(b>d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << a <<" < " << d <<" < " << b <<" < "<< c; // e,a,d,b,c
                                }
                                else if(b>d && a<d && a<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << e <<" < " << d <<" < " << b <<" < "<< c; // a,e,d,b,c
                                }
                                else if(b<d && b>e && a>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << a <<" < " << b <<" < " << d <<" < "<< c; // e,a,b,d,c
                                }
                                else if(b<d && b<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << b <<" < " << e <<" < " << d <<" < "<< c; // a,b,e,d,c
                                }
                            }
                            else if(d<e)
                            {
                                if(c>e && b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << a <<" < " << b <<" < " << e <<" < "<< c; // d,a,b,e,c
                                }
                                else if(c>e && b>d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << d <<" < " << b <<" < " << e <<" < "<< c; // a,d,b,e,c
                                }
                                else if(c>e && b<d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << b <<" < " << d <<" < " << e <<" < "<< c; // a,b,d,e,c
                                }
                                else if(c<e && b>d && a>d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << d << " < " << a <<" < " << b <<" < " << c <<" < "<< e; // d,a,b,c,e
                                }
                                else if(c<e && b>d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << d <<" < " << b <<" < " << c <<" < "<< e; // a,d,b,c,e
                                }
                                else if(c<e && b<d && a<d)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << b <<" < " << d <<" < " << c <<" < "<< e; // a,b,d,c,e
                                }
                            }
                        }
                        else if(c<d)
                        {
                            if(d>e)
                            {
                                if(c>e && b>e && a>e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << e << " < " << a <<" < " << b <<" < " << c <<" < "<< d; // e,a,b,c,d
                                }
                                else if(c>e && b>e && a<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << e <<" < " << b <<" < " << c <<" < "<< d; // a,e,b,c,d
                                }
                                else if(c>e && b<e && a<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << b <<" < " << e <<" < " << c <<" < "<< d; // a,b,e,c,d
                                }
                                else if(c<e)
                                {
                                    cout << "Maka,urutan dari yang terkecil adalah : ";
                                    cout << a << " < " << b <<" < " << c <<" < " << e <<" < "<< d; // a,b,c,e,d
                                }
                            }
                            else if(d<e)
                            {
                                cout << "Maka,urutan dari yang terkecil adalah : ";
                                cout << a << " < " << b <<" < " << c <<" < " << d <<" < "<< e; // a,b,c,d,e
                            }
                        }
                    }
                }
                break;
            }
        default:
            {
                cout << "Masukan operasi sesuai contoh." << endl;
                if(perangkingan != '>' && perangkingan!='<')
                {
                    goto operasi;
                }
            }
        }
    }
    else if(a==b || a==c || a==d || a==e || b==c || b==d || b==e || c==d || c==e || d==e)
    {
        cout << "Jangan Memasukan angka yang sama !!!" << endl;
        if(a==b || a==c || a==d || a==e || b==c || b==d || b==e || c==d || c==e || d==e)
        {
            goto input;
        }
    }
}
