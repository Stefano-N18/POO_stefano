#include "Juego.h"
Juego::Juego() {
	objBici = new Bicicleta();
	objBus = new Bus();
	objCarro = new Carro();
	objPer = new Persona();
}
Juego::~Juego(){}
void Juego::Mover_todos(int maxW, int maxH){
	objBici->Mover(maxW, maxH);
	objBus->Mover(maxW, maxH);
	objCarro->Mover(maxW, maxH);

}
void Juego::Mover_Personaje(int maxW, int maxH, char letra){
	if (letra == 'W')objPer->MoverUP(maxW, maxH);
	else
		if (letra == 'A')objPer->MoverLF(maxW, maxH);
		else
			if (letra == 'D')objPer->MoverRI(maxW, maxH);
			else
				if (letra == 'S')objPer->MoverDW(maxW, maxH);
				else
					objPer->Mostrar(maxW, maxH);
}
bool Juego::End(){
	System::Drawing::Rectangle r1;
	r1.X = objPer->retornar_c();
	r1.Y = objPer->retornar_f();
	r1.Width = objPer->retornar_w();
	r1.Height = objPer->retornar_h();

	System::Drawing::Rectangle r2;
	r2.X = objBici->Retornar_C();
	r2.Y = objBici->Retornar_F();
	r2.Width = objBici->Retornar_W();
	r2.Height = objBici->Retornar_H();

	System::Drawing::Rectangle r3;
	r3.X = objCarro->Retornar_C();
	r3.Y = objCarro->Retornar_F();
	r3.Width = objCarro->Retornar_W();
	r3.Height = objCarro->Retornar_H();

	System::Drawing::Rectangle r4;
	r4.X = objBus->Retornar_C();
	r4.Y = objBus->Retornar_F();
	r4.Width = objBus->Retornar_W();
	r4.Height = objBus->Retornar_H();

	if (r1.IntersectsWith(r2)) {
		
		objPer->disminuir_vidas();
	}
	else if (r1.IntersectsWith(r3)) {
		
		objPer->disminuir_vidas();
	}else if(r1.IntersectsWith(r4)) {
		
		objPer->disminuir_vidas();
	}

	return (objPer->retornar_vidas() == 0);
}