#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Persona
{
private:
	int f, c, w, h, dx, dy,vid;
public:
	Persona();
	~Persona();
	void Borrar(int maxW, int maxH);
	void MoverUP(int maxW, int maxH);
	void MoverLF(int maxW, int maxH);
	void MoverRI(int maxW, int maxH);
	void MoverDW(int maxW, int maxH);
	void Mostrar(int maxW, int maxH);
	int retornar_dx();
	int retornar_dy();
	int retornar_h();
	int retornar_w();
	int retornar_c();
	int retornar_f();
	int retornar_vidas();
	void disminuir_vidas();
};

