#include "Bus.h"
Bus::Bus(){
	w= 22;
	h = 4;
	f = 12;
	c = 1;
	dx = 3 + rand() % 8;
	sentido = desp::der;

}
Bus::~Bus(){}
void Bus::Borrar(int maxW, int maxH){
	for (int i = f; i <= f + h; i++)
		for (int j = c; j <= c + w; j++) {
			Console::SetCursorPosition(j, i);
			cout << ' ';
		}
}
void Bus::Mover(int maxW, int maxH){
	Borrar(maxW, maxH);
	if (c + dx + w > maxW)
	{
		sentido = desp::izq;
		dx = dx * -1;
	}
	if (c + dx < 1)
	{
		sentido = desp::der;
		dx = dx * -1;
	}
	c = c + dx;
	Mostrar(maxW, maxH);
}
void Bus::Mostrar(int maxW, int maxH){
	if (sentido == desp::izq) {
		Console::SetCursorPosition(c, f); cout << "  _____________";
		Console::SetCursorPosition(c, f + 1); cout << "_/_|[][][][][] | - -";
		Console::SetCursorPosition(c, f + 2); cout << "( Autobús Urbano | - -";
		Console::SetCursorPosition(c, f + 3); cout << "=--OO-------OO--=dwb";
	}
	if (sentido == desp::der) {
		Console::SetCursorPosition(c, f); cout << "     _____________";
		Console::SetCursorPosition(c, f + 1); cout << "- - | [][][][][]|_\\_ ";
		Console::SetCursorPosition(c, f + 2); cout << "- - | Autobús Urbano )";
		Console::SetCursorPosition(c, f + 3); cout << "bwd=--OO-------OO--=";

	}

}
int Bus::Retornar_Dx() { return dx; }
int Bus::Retornar_W() { return w; }
int Bus::Retornar_H() { return h; }
int Bus::Retornar_F() { return f; }
int Bus::Retornar_C() { return c; }