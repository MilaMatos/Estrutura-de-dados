#include <stdio.h>
#include <stdlib.h>
#include "prova1.h"



int main() {
Lista *li, *fi;
li = NULL;
fi = NULL;
li = criar();

struct professor roberto;
roberto.id = 01;
struct professor nelson;
nelson.id = 02;
struct professor placido;
placido.id = 04;
struct professor antonio;
antonio.id = 03;
struct professor camila;
camila.id = 06;

inserirInicio(li, roberto);
	imprimir(li);
inserirInicio(li, nelson);
	imprimir(li);
inserirInicio(li, placido);
	imprimir(li);
inserirInicio(li, antonio);
	imprimir(li);


	
	
	
	
	
	
	
	return 0;}
