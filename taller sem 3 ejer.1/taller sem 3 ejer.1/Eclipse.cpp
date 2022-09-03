#include "Eclipse.h"
Eclipse::Eclipse(string fecha) {
	tipoEclipse = tiposEclipses[rand() % 2];
	this->fecha = fecha;
	hora = rand() % 2400 + 100;
	sismos = rand() % 2;
	lluvias = rand() % 2;
	visibilidad = visibilidades[rand() % 5];

}
Eclipse::~Eclipse(){}

string Eclipse::getVisibilidad() { return visibilidad; }
bool Eclipse::getSismos() { return sismos; }
int Eclipse::getHora() { return hora; }

void Eclipse::setTipoEclipse(string tipoEclipse) { this->tipoEclipse = tipoEclipse; }

//-----------Dato Eclipse---------
void Eclipse::datosEclipse() {
	cout << "Tipo eclipse: " << tipoEclipse << endl;
	cout << "Fecha: " << fecha << endl;
	cout << "Hora: " << hora << endl;
	cout << "Sismo: " << sismos << endl;
	cout << "lluvia: " << lluvias << endl;
	cout << "visibilidad: " << visibilidad << endl;
	

}