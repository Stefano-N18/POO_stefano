#pragma once
#include <vector>
#include "Eclipse.h"
using namespace std;
class VectorEclipse
{
private:
	vector<Eclipse*>miVector;
public:
	VectorEclipse();
	~VectorEclipse();
	//-----Realizamos el CRUD (CREATE/READ/UPDATE/DELETE)--------
	void agregarEclipse(string fecha);
	void insertarEclipse(int posicion, string fecha);
		void editarTipoEclipse(int posicion, string tipoEclipse);
		void borrarEclipseEnPosicion(int posicion);
		void borrarEclipse();
		void imprimirDatosVector();
		void eclipseVisibleEuropa();
			void eclipsesOcasionaronSismos();
			void eclipseNoche();
};

