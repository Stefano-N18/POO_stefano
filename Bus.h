#pragma once
#include <iostream>
using namespace std;
using namespace System;
public enum desp { der, izq };
class Bus
{
private:
	int f, c, w, h, dx;
	desp sentido;
public:
	Bus();
	~Bus();
	void Borrar(int maxW, int maxH);
	void Mover(int maxW, int maxH);
	void Mostrar(int maxW, int maxH);
	int Retornar_Dx();
	int Retornar_Dy();
	int Retornar_W();
	int Retornar_H();
	int Retornar_F();
	int Retornar_C();
};

