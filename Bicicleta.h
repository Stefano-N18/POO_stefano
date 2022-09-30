#pragma once
#include <iostream>
using namespace std;
using namespace System;
public enum dd{i,d};
class Bicicleta
{private:
	int f, c, h, w, dx;
	dd direc;
public:
	Bicicleta();
	~Bicicleta();
	void Borrar(int maxW, int maxH);
	void Mover(int maxW, int maxH);
	void Mostrar(int maxW, int maxH);
	int Retornar_W();
	int Retornar_H();
	int Retornar_F();
	int Retornar_C();
};

