#pragma once
#include "Poligonos.h"
class Triangulos: public Poligonos
{
public:
	Triangulos(int,string,string,int, double,double,double,double);
	double calcular_area() {
		return (base * altura) / 2;
	}

	double calcular_perimetro() {
		return 2 * ladoa + ladob;
	}
private:
	double base;
	double altura;
	double ladoa;
	double ladob;
};



