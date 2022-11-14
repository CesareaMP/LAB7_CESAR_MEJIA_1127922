#pragma once
#include "Poligonos.h"
class Rectangulos :public Poligonos
{
public:
	Rectangulos(int, string, string, int, double, double);
	double calcular_area();
	double calcular_perimetro();
private:
	double base;
	double altura;
};
