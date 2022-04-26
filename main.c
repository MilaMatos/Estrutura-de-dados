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





			/*	P A R A D E				

	
	Jogador
Mão = 5 cartas pro inicio (aleatorio), toda rodada descarta uma da mao e puxa uma do baralho -- você escolhe qual descartar da mao
Jogador = vetor de lista, 1 casa do vetor para cada Letra 
Coleção -	Pontuação = vai diminuindo o valor das letras 

MESA = Lista 
Baralho = Pilha

	PC

Não tem mão - a carta que puxa do baralho já descarta
PC = vetor de lista, 1 casa do vetor para cada Letra 
Coleção - Pontuação = vai diminuindo o valor das letras 


VITORIA = O PONTOS
DERROTA = 1 CARTA DE CADA COR - pode perder no meio da partida 


Funções:
	inserir
	remover(e por em outra lista/pilha) - realocar
	imprimir
	contarValores
	qtd
	maior que
	criar
	embaralhar	- roberto = pega do topo e bota numa posição aleatorio x vezes



Regras - 
	Total de cartas = 60
	Jogador inicia com 5 cartas na mão 
	1 na mesa e 54 no baralho

	Descarta uma carta (adiciona na lista da mesa)
	

	O numero da carta é a quantidade de cartas que ela "protege" 	
		Se o a carta que voce jogar não proteger todas vai para a coleção de cartas para o somatorio de pontos 
			Se as cartas que sobrarem forem da mesma cor e um valor menor ou igual 
	












struct{
 char letra (a-f);
 int numero (0-10);
 int id     (0-60);




}
