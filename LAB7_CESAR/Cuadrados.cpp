#include "Cuadrados.h"

Cuadrados::Cuadrados(int i, string t, string c, int l, double b, double a) : Rectangulos(i,t,c,l,b,a)
{
}

double Cuadrados::calcular_area_cuadrado()
{
    return calcular_area();
}

double Cuadrados::calcular_perimetro_cuadrado()
{
    return calcular_perimetro();
}
