#pragma once

class Vecteur3D
{
private:
    double x, y, z;

public:
    void set_coord(int idx, double value);
    void affiche();
    bool compare(Vecteur3D v);
};
