#include <iostream>
using namespace std;

int main()
{
    // Increment dan Decrement
    // ada preincrement dan post increment

    int a = 5;
    int b = 5;

    // post increment
    cout << "post increment" << endl;
    cout << a << endl;
    a++;
    cout << a << endl;

    cout << endl;

    cout << "Post Increment 2" << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << endl;

    // pre increment

    cout << "Preincrement" << endl;
    cout << b << endl;
    ++b;
    cout << b << endl;

    cout << endl;

    cout << "Pre increment 2" << endl;
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    cout << endl;

    // decrement
    // postdecrement

    a = 1;
    b = 1;

    cout << "post decrement" << endl;
    cout << a << endl;
    a++;
    cout << a << endl;

    cout << endl;

    cout << "post decrement 2" << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << endl;

    // predecrement

    cout << "pre decrement" << endl;
    cout << b << endl;
    ++b;
    cout << b << endl;

    cout << endl;

    cout << "pre decrement 2" << endl;
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;
}
