#include<iostream>
using namespace std;


int main()
{
    int x = 2;
    int y = 16;
    int i = 0;

    while (i < 8)
    {
        cout << x << " " << y << " ";
        x = x + 2;
        y = y -2;
        i++;
    }

    while(x<10)
    {
        y = 10;

        do
        {
            cout << " * ";
            y = y-1;
        }
        while(y>x);
        cout << endl;
        x=x+1;
    }

    x,y,i;

    x=1;
    while(x<11)
    {
        y=0;

        do
        {
            y=y+1;
            cout << "*";
        }
        while(y<x);
        cout << endl;
        x++;
    }
}
