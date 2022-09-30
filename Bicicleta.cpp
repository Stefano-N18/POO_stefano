#include "Bicicleta.h"
Bicicleta::Bicicleta() {
	c = 1;
	dx = 1 + rand() % 2;
	w = 6;
	h = 2;
	direc = dd::d;
	f = 22;
}
Bicicleta::~Bicicleta() {}
void Bicicleta::Borrar(int maxW, int maxH) {
	for (int i = f; i <= f + h; i++)
		for (int j = c; j <= c + w; j++)
		{
			Console::SetCursorPosition(j, i);
			cout << ' ';
		}
}
void Bicicleta::Mover(int maxW, int maxH) {
	Borrar(maxW, maxH);
	if (c + w + dx > maxW)
	{
		direc = dd::i;
		dx = dx * -1;
	}
	if (c + dx < 1)
	{
		direc = dd::d;
		dx = dx * -1;
	}
	c = c + dx;
	Mostrar(maxW, maxH);
}
void Bicicleta::Mostrar(int maxW, int maxH) {
	if (direc == dd::d)
	{
		Console::SetCursorPosition(c, f); cout << " .._\\";
		Console::SetCursorPosition(c, f + 1); cout << "(o)(o)";
	}
	else
	{
		Console::SetCursorPosition(c, f); cout << " \\_..";
		Console::SetCursorPosition(c, f + 1); cout << "(o)(o)";
	}
}
int Bicicleta::Retornar_W() { return w; }
int Bicicleta::Retornar_H() { return h; }
int Bicicleta::Retornar_F() { return f; }
int Bicicleta::Retornar_C() { return c; }