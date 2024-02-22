#include "demander_nombre.h"
#include "factorielle.h"

#include <iostream>
using namespace std;

int main()
{
    int a = demander_nombre(0, 10);
    int f = factorielle(a);
    cout << "La factorielle de " << a << " est " << f << endl;
    return 0;
}
