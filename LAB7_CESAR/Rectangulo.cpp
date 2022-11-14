#include "Rectangulo.h"

Rectangulos::Rectangulos(int i , string t, string c, int l, double b, double a) : Poligonos(i, t, c, l)
{
	base = b;
	altura = a;
}

double Rectangulos::calcular_area()
{
	return base * altura;
}

double Rectangulos::calcular_perimetro()
{
	return (2 * base) + (2 * altura);
}
