#include <stdio.h>
#include <stdlib.h>
#include "prova1.h"



int main() {
Lista *li, *fi;
li = NULL;
fi = NULL;
li = criar();
fi = criar();

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
inserirFim(li, nelson);
	imprimir(li);
inserirInicio(fi, placido);
	imprimir(fi);
inserirInicio(fi, antonio);
	imprimir(fi);

printf("\n\n%d", quantElem(li));

Lista *resu;
resu = concatenar(li, fi);
imprimir(resu);
	
	
	
	return 0;}
