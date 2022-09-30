#pragma once
#include <iostream>
#include "Bicicleta.h"
#include "Bus.h"
#include "Persona.h"
#include "Carro.h"
class Juego
{
private:
	Bicicleta* objBici;
	Bus* objBus;
	Carro* objCarro;
	Persona* objPer;
public:
	Juego();
	~Juego();
	void Mover_todos(int maxW, int maxH);
	void Mover_Personaje(int maxW, int maxH,char letra);
	bool End();
};

