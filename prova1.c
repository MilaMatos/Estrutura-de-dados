#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct elemento{
	struct aluno dados;
	struct elemento *prox;
};

struct node{
	struct elemento *ultimo;
	struct elemento *primeiro;
	int qtd;
};

typedef struct elemento Elemento;

Fila* criar(){
	Fila *aed;
aed = (Fila*)malloc(sizeof(Fila));

	if (aed != NULL){
		aed->qtd=0;
		aed->primeiro = NULL;
		aed->ultimo = NULL;
		printf("Criou");
	}
	
	return aed;
}

int inserir(Fila *aed, struct aluno novosdados){
	if (aed == NULL) return 0;
	
Elemento *novo;
novo = (Elemento*)malloc(sizeof(Elemento));
novo->dados = novosdados;
novo->prox = NULL;     

	if(aed->qtd == 0) aed->primeiro = novo;
	else aed->ultimo->prox = novo;
	
	aed->ultimo = novo;
	aed->qtd++;
	
 return 1;
}
 
 int imprimir(Fila *aed){
	if (aed == NULL) return 0;
	if (aed->qtd == 0){ 
		printf("\nVazia");
		return 0;
	}
		
	Elemento *aux;
	aux = aed->primeiro;								//...........................................
	
	printf("\n");
	while(aux != NULL){
		printf("[%d] \t", aux->dados.id);
		aux = aux->prox;
	}
	
	return 1;
}
	
int remover(Fila *aed){	
	if (aed == NULL) return 0;
	if (aed->qtd == 0) return 0;				//...........................................
			
	if(aed->qtd == 1){
		aed->primeiro = NULL;
		aed->ultimo =  NULL;
		aed->qtd--;
		return 1;}
		
	else{					//...........................................
	aed->primeiro = aed->primeiro->prox;
	aed->qtd--;
	return 1;}
}

int inverter(Fila *aed){
	if (aed == NULL) return 0;
	if (aed->qtd == 0 || aed->qtd == 1) return 0;
	
	Elemento *ant, *aux, *pos;
	aux = aed->primeiro;
	ant = NULL;
	pos = aux->prox;
	
	aed->ultimo = aux;
	
	while(pos != NULL){
		aux->prox = ant;
		
		ant = aux;
		aux =  pos;
		pos = pos->prox;
	}
	aux->prox = ant;
	aed->primeiro = aux;
	return 1;
}

int limpezaCentral(Fila *aed){
	if (aed == NULL) return 0;
	if (aed->qtd == 0 || aed->qtd == 1 || aed->qtd == 2) return 0;
	
	Elemento *aux;
	aux = aed->primeiro->prox;
	Elemento *pos = aux->prox;
	while(aux->prox != NULL){
		free(aux);
		aed->qtd--;
		
		aux = pos;
		pos = pos->prox;
	}
	aed->primeiro->prox = aux;
	
	return 1;
} 	
	
int limpezaExtremos(Fila *aed){
	if (aed == NULL) return 0;
	if (aed->qtd == 0) return 0;
	
	if(aed->qtd == 1 || aed->qtd == 2){
		if(aed->qtd == 2); free(aed->ultimo);
		free(aed->primeiro);
		aed->primeiro = NULL;
		aed->ultimo = NULL;
		aed->qtd = 0;	
	}
	
	else {
	Elemento *aux, *ant;
	ant = aed->primeiro;
	aux = ant->prox;
	aed->primeiro = aux;
	free(ant);
	aed->qtd--;

		while(aux->prox != NULL){
		
			ant = aux;
			aux = aux->prox;
		}
	ant->prox = NULL;
	aed->ultimo = ant;
	free(aux);
	aed->qtd--;
	}
	return 1;
}	
	
int ordenada(Fila *aed){
	if (aed == NULL) return 0;
	if (aed->qtd == 0) return 0;
	if (aed->qtd == 1) return 1;
	
	Elemento *aux, *ant;
	ant = aed->primeiro;
	aux = ant->prox;
	
	
	while(aux != NULL){
		if(aux->dados.id < ant->dados.id) return 0;
		ant = aux;
		aux = aux->prox;
	}
		
	return 1;	
}
	
int mover(Fila *aed, Fila *mov){
	if (aed == NULL || mov == NULL) return 0;
	if (aed->qtd == 0) return 0;
	
	Elemento *aux, *aux2;
	aux = aed->primeiro;
	
	aed->primeiro = aux->prox;	//desalocando da primeira lista
	aed->qtd--;
	
	//inserir(mov, aux->dados);
	if(mov->qtd == 0) mov->primeiro = aux;
	else mov->ultimo->prox = aux;
	
	aux->prox = NULL;
	mov->ultimo = aux;
	mov->qtd++;
	
 return 1;

}
	
 
