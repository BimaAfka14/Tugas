#include <iostream>
using namespace std;

int main()
{
    cout << "Loop 1 \n";
    for(int i =1; i <=10; i++)
    {
        cout << i << endl;
    }

    cout << "\n Loop 2 \n";
    for(int i=1;i<=10;i+=2)
    {
        cout << i << endl;
    }

    cout << "\n Loop 3 \n";
    for(int i=1; i >= -10; i--)
    {
        cout << i << endl;
    }

    cout << "\n Loop 4 \n";
    int total = 1;
    for(int i =1; i <= 10; i++, total += i)
    {
        cout << i << " || " << total << endl;
    }

    cout << "\n Loop 5 \n";
    total = 1;
    for(int i =1; i <= 10; total += i,i++)
    {
        cout << i << " || " << total << endl;
    }
}
