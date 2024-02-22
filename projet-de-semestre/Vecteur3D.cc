#include "Vecteur3D.h"
#include <iostream>

void Vecteur3D::set_coord(int idx, double value)
{
    switch (idx)
    {
    case 0:
        x = value;
        break;
    case 1:
        y = value;
        break;
    case 2:
        z = value;
        break;
    default:
        std::cout << "Index out of range" << std::endl;
        break;
    }
}

void Vecteur3D::affiche()
{
    std::cout << x << " " << y << " " << z << " " << std::endl;
}

bool Vecteur3D::compare(Vecteur3D v)
{
    return (x == v.x && y == v.y && z == v.z);
}
