#include <iostream>
using namespace std;

struct Rationnel
{
    int p;
    int q;
};

void affiche()
{
}

int pgcd(int a, int b)
{
    int prev_u(1), prev_v(0), x(a), y(b), u(0), v(1);
    int new_u, new_v, q, r;

    while (y != 0)
    {
        q = x / y;
        r = x % y;
        x = y;
        y = r;
        new_u = prev_u - u * q;
        prev_u = u;
        u = new_u;
        new_v = prev_v - v * q;
        prev_v = v;
        v = new_v;
    }

    return x;
}

Rationnel reduction(Rationnel r)
{
    int x = pgcd(r.p, r.q);
    Rationnel nouveauRationnel = {r.p / x, r.q / x};
    return nouveauRationnel;
}

Rationnel addition(Rationnel r1, Rationnel r2)
{
    Rationnel nouveauRationnel = {r1.p * r2.q + r2.p * r1.q, r1.q * r2.q};
    return reduction(nouveauRationnel);
}

Rationnel soustraction(Rationnel r1, Rationnel r2)
{
    return reduction(addition(r1, {r2.p * -1, r2.q}));
}

Rationnel multiplication(Rationnel r1, Rationnel r2)
{
    Rationnel nouveauRationnel = {r1.p * r2.p, r1.q * r2.q};
    return reduction(nouveauRationnel);
}

Rationnel division(Rationnel r1, Rationnel r2)
{
    Rationnel nouveauRationnel = {r1.p * r2.q, r1.q * r2.p};
    return reduction(nouveauRationnel);
}

int demander_nombre(int a, int b)
{
    int res;

    do
    {
        cout << "Entrez un nombre entier différent de zéro ";
        if (a >= b)
            cout << "superieur ou egal a " << a;
        else
            cout << "compris entre " << a << " et " << b;
        cout << " : ";
        cin >> res;
    } while ((res < a) or ((a < b) and (res > b)) or (res == 0));
    return res;
}

int main()
{
    int a(demander_nombre(-5, 10));
    int b(demander_nombre(-5, 10));

    Rationnel r1 = {a, b};

    cout << "Votre rationnel est " << r1.p << "/" << r1.q << endl;

    int c(demander_nombre(-5, 10));
    int d(demander_nombre(-5, 10));

    Rationnel r2 = {c, d};

    cout << "Votre rationnel est " << r2.p << "/" << r2.q << endl;

    Rationnel r3 = addition(r1, r2);

    cout << "La somme de vos rationnels est " << r3.p << "/" << r3.q << endl;

    Rationnel r4 = soustraction(r1, r2);

    cout << "La soustraction de vos rationnels est " << r4.p << "/" << r4.q << endl;

    Rationnel r5 = multiplication(r1, r2);

    cout << "La multiplication de vos rationnels est " << r5.p << "/" << r5.q << endl;

    Rationnel r6 = division(r1, r2);

    cout << "La division de vos rationnels est " << r6.p << "/" << r6.q << endl;
}