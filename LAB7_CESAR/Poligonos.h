#pragma once
#include <string>
using namespace std;
public class Poligonos
{
private:
	int id;
	string tipo;
	string color;
	int lados;
public:
	Poligonos(int,string,string,int);
	virtual double calcular_area() = 0;
	virtual double calcular_perimetro() = 0;


};




