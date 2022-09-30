#include "Persona.h"
Persona::Persona()
{
	f = 30;
	c = 75;
	w = 1;
	h = 1;
	dx = 1;
	dy = 1;
	vid = 3;
}
Persona::~Persona() {}
void Persona::Borrar(int maxW, int maxH){
for(int i=f;i<f+h;i++)
	for (int j = c; j < c + w; j++) {
		Console::SetCursorPosition(j, i);
		cout << ' ';
	}
}
void Persona::MoverUP(int maxW, int maxH) {
	Borrar(maxW, maxH);

	if (dy + f < 1)
		dy = 0;
	else
		dy = 1;
	f = f - dy;
	Mostrar(maxW, maxH);
}
void Persona::MoverLF(int maxW, int maxH){
	Borrar(maxW, maxH);

	if (c + dx < 1)
		dx = 0;
	else
		dx = 1;
	c = c - dx;
	Mostrar(maxW, maxH);

}
void Persona::MoverRI(int maxW, int maxH){
	Borrar(maxW, maxH);

	if (c + dx > maxW)
		dx = 0;
	else
		dx = 1;
		c = c + dx;
		Mostrar(maxW, maxH);

}
void Persona::MoverDW(int maxW, int maxH){
	Borrar(maxW, maxH);
	if (f + dy > maxH)
		dy = 0;
	else
		dy = 1;
	f = f + dy;
	Mostrar(maxW, maxH);

}
void Persona::Mostrar(int maxW, int maxH){
	Console::SetCursorPosition(c, f); 
	Console::ForegroundColor=ConsoleColor::Green; 
	cout << char(254);
	Console::ForegroundColor = ConsoleColor::White;
}
int Persona::retornar_dx() { return dx; }
int Persona::retornar_dy(){ return dy; }
int Persona::retornar_h(){ return h; }
int Persona::retornar_w(){ return w; }
int Persona::retornar_c(){ return c; }
int Persona::retornar_f(){ return f; }
int Persona::retornar_vidas(){ return vid; }
void Persona::disminuir_vidas() {
	if (vid - 1 < 0)vid = 0;
	else vid--;
}