#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string tiposEclipses[2] = { "Solar", "Lunar" };
string visibilidades[5] = { "America del Sur","Europa","Africa","America del Norte","Asia" };

class Eclipse
{
private:
	string tipoEclipse;
	string fecha;// dd/mm/aa
	int hora;
	bool sismos;
	bool lluvias;
	string visibilidad;
public:
	Eclipse(string fecha);
	~Eclipse();

	//---------------GETs y SETs
	string getVisibilidad();
	bool getSismos();
	int getHora();
	

	void setTipoEclipse(string tipoEclipse);
	void datosEclipse();
};

