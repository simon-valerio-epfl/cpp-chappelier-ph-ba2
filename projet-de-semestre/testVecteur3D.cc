#include "Vecteur3D.h"
#include <iostream>

Vecteur3D vect1;
Vecteur3D vect2;
Vecteur3D vect3;

int main()
{

    /* Cette partie sera revue dans 2 semaines
     * (constructeurs, surcharge des opérateurs).
     */
    // v1 = (1.0, 2.0, -0.1)
    vect1.set_coord(0, 1.0);
    vect1.set_coord(1, 2.0);
    vect1.set_coord(2, -0.1);

    // v2 = (2.6, 3.5,  4.1)
    vect2.set_coord(0, 2.6);
    vect2.set_coord(1, 3.5);
    vect2.set_coord(2, 4.1);

    vect3 = vect1;

    std::cout << "Vecteur 1 : ";
    vect1.affiche();
    std::cout << std::endl;

    std::cout << "Vecteur 2 : ";
    vect2.affiche();
    std::cout << std::endl;

    std::cout << "Le vecteur 1 est ";
    if (vect1.compare(vect2))
    {
        std::cout << "égal au";
    }
    else
    {
        std::cout << "différent du";
    }
    std::cout << " vecteur 2," << std::endl
              << "et est ";
    if (not vect1.compare(vect3))
    {
        std::cout << "différent du";
    }
    else
    {
        std::cout << "égal au";
    }
    std::cout << " vecteur 3." << std::endl;
}