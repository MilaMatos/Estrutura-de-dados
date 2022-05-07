#include <stdio.h>
#include <stdlib.h>
#include "prova1.h"



int main() {
	Fila *fi;
	fi = NULL;
	fi = criar();
	Fila *pu;
	pu = NULL;
	pu = criar();
	
	struct aluno auxiliar;
	
	struct aluno camila;
	camila.id = 01;
	struct aluno camila2;
	camila2.id = 02;
	struct aluno camila3;
	camila3.id = 03;	
	inserir(fi, camila);
		imprimir(fi);
	inserir(fi, camila2);
		imprimir(fi);
	inserir(fi, camila3);
		imprimir(fi);
		
			
	mover(fi, pu);
	imprimir(pu);
	mover(fi, pu);
	imprimir(pu);
	mover(fi, pu);
	imprimir(pu);
	mover(fi, pu);
	imprimir(pu);	
		
		
		
		
		
	return 0;
}
