#include "Triangulo.h"

Triangulos::Triangulos(int i, string t, string c, int l,double b, double a, double la, double lb) : Poligonos(i, t, c, l)
{
	base = b;
	altura = a;
	ladoa = la;
	ladob = lb;
}
