#include <iostream>
using namespace std;

int demander_nombre(int a, int b)
{
    int res;

    do
    {
        cout << "Entrez un nombre entier ";
        if (a >= b)
            cout << "superieur ou egal a " << a;
        else
            cout << "compris entre " << a << " et " << b;
        cout << " : ";
        cin >> res;
    } while ((res < a) or ((a < b) and (res > b)));
    return res;
}
