#include "Carro.h"
Carro::Carro() {
	h = 2;
	w = 10;
	f = 5;
	c = 1;
	dx = 3 + rand() %5;
	sentido = desplazamiento::derecha;
}
Carro::~Carro() {

}
void Carro::Borrar(int maxW, int maxH) {

	for(int i=f;i<=f+h;i++)
		for (int j = c; j <= c + w; j++) {
			Console::SetCursorPosition(j, i);
			cout << ' ';
		}
}
void Carro::Mover(int maxW, int maxH){
	Borrar(maxW, maxH);
	if (c + dx+w > maxW)
	{
		sentido = desplazamiento::izquierda;
		dx = dx * -1;
	}
	if (c + dx < 1)
	{
		sentido = desplazamiento::derecha;
		dx = dx * -1;
	}
	c = c + dx;
	Mostrar(maxW, maxH);
}
void Carro::Mostrar(int maxW, int maxH){
	if (sentido == desplazamiento::derecha) {
		Console::SetCursorPosition(c, f); cout << ".-'--`-._";
		Console::SetCursorPosition(c, f + 1); cout << "'-O---O--'";
	}
	if (sentido == desplazamiento::izquierda) {
		Console::SetCursorPosition(c, f); cout << "_.-´--'-.";
		Console::SetCursorPosition(c, f + 1); cout << "'--O---O-'";
	}

}
int Carro::Retornar_Dx() { return dx; }
int Carro::Retornar_W() { return w; }
int Carro::Retornar_H() { return h; }
int Carro::Retornar_F() { return f; }
int Carro::Retornar_C() { return c; }
