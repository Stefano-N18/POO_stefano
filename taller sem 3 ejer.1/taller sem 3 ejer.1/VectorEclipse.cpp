#include "VectorEclipse.h"
VectorEclipse::VectorEclipse() {
	miVector = vector<Eclipse*>();
}
VectorEclipse::~VectorEclipse() {
	while (miVector.size())
		miVector.erase(miVector.begin());
}
void VectorEclipse::agregarEclipse(string fecha) {
	Eclipse* objEclipse = new Eclipse(fecha);
	miVector.push_back(objEclipse);
}
void VectorEclipse::insertarEclipse(int posicion, string fecha) {
	Eclipse* objEclipse = new Eclipse(fecha);
	miVector.insert(miVector.begin() + posicion, objEclipse);
}
void VectorEclipse::editarTipoEclipse(int posicion, string tipoEclipse) {
	miVector.at(posicion)->setTipoEclipse(tipoEclipse);
}
void VectorEclipse::borrarEclipseEnPosicion(int posicion) {
	miVector.erase(miVector.begin() + posicion);
}
void VectorEclipse::borrarEclipse() {
	miVector.pop_back();
}
void VectorEclipse::imprimirDatosVector() {
	for (int i = 0; i < miVector.size(); i++) {
		cout << "Eclipse " << i << endl;
		miVector[i]->datosEclipse();
	}
}
//--------Reporte-----------
void VectorEclipse::eclipseVisibleEuropa() {
	for (int i = 0; i < miVector.size(); i++) {
		if (miVector[i]->getVisibilidad() == "Europa") {
			miVector[i]->datosEclipse();
		}
	}
}

void VectorEclipse::eclipsesOcasionaronSismos() {
	for (int i = 0; i < miVector.size(); i++) {
		if (miVector[i]->getSismos() == 1) {
			miVector[i]->datosEclipse();
		}
	}
}

void VectorEclipse::eclipseNoche() {
	for (int i = 0; i < miVector.size(); i++) {
		if (miVector[i]->getHora() >= 1800) {
			miVector[i]->datosEclipse();
		}
	}
}