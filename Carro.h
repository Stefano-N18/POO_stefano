#pragma once
#include <iostream>
using namespace std;
using namespace System;
public enum desplazamiento{derecha,izquierda};
class Carro
{
private:
	int f, c, w, h, dx;
	desplazamiento sentido;
public:
	Carro();
	~Carro();
	 void Borrar(int maxW,int maxH);
	 void Mover(int maxW, int maxH);
	 void Mostrar(int maxW, int maxH);
	 int Retornar_Dx();
	 int Retornar_W();
	 int Retornar_H();
	 int Retornar_F();
	 int Retornar_C();
};

