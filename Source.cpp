#include <iostream>
#include "Juego.h"
#include <conio.h>
#include "Persona.h"
using namespace std;
using namespace System;
int main() {
	int maxW = 150;
	int maxH = 40;
	Juego* obj = new Juego();
	Persona* objP = new Persona();
	Console::CursorVisible = false;
	Console::SetWindowSize(maxW, maxH);
	char letra = ' ';
	Console::SetCursorPosition(39, 1); cout << "Vidas: " << objP->retornar_vidas();
		while (!obj->End()) {
				obj->Mover_todos(maxW, maxH); if (kbhit())
				{
					letra = getch();
				obj->Mover_Personaje(maxW, maxH, toupper(letra));
			}
			_sleep(50);
			letra = ' ';
		}
}