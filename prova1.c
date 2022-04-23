#include <stdio.h>
#include <stdlib.h>
#include "prova1.h"

	struct elemento{
		struct professor dados;
		struct elemento *prox;
	};
	
typedef struct elemento Elemento;


Lista* criar(){
	Lista *aed;
	aed = (Lista*)malloc(sizeof(Lista));
	
	if(aed != NULL){
		*aed = NULL;}
	
	return aed;}
	
int inserirInicio(Lista *aed, struct professor novosdados){    //Inserir no inicio sem repetição de Id
	if(aed == NULL) return 0;
	
	Elemento *novo, *aux;
	novo = (Elemento*)malloc(sizeof(Elemento));
	novo->dados = novosdados;
	
	aux = *aed;
	
	while(aux!= NULL){
		if(aux->dados.id == novosdados.id) return 0;
		
		aux = aux->prox;}
		
	novo->prox = *aed;
	*aed = novo;
	return 1;}
	
int imprimir(Lista *aed){
	if(aed == NULL) return 0;
	if(*aed == NULL) return 0;
	
	Elemento *aux;
	aux = *aed;
	
	printf("\n");
	while(aux != NULL){
		printf("[%d]", aux->dados.id);
		
		aux = aux->prox;}
	return 1;}
	
void info(Lista *aed){
	if(aed == NULL) printf("Lista vazia");
	
	int par, impar, menor, maior;
	Elemento *aux;
	aux = *aed;
	
	par = 0;
	impar = 0;
	maior = aux->dados.id;
	menor = aux->dados.id;
	
	while(aux != NULL){
		if(aux->dados.id % 2 == 0) 
			par++;
		if(aux->dados.id % 2 != 0) 
			impar++;
		
		if(maior < aux->dados.id){
			maior = aux->dados.id;}
			
		if(menor > aux->dados.id){
			menor = aux->dados.id;}
		
		aux = aux->prox;}
	
	printf("\nPares: %d", par);
	printf("\nImpares: %d", impar);
	printf("\nO maior: %d", maior);
	printf("\nO menor: %d", menor);
}

int remover2Inicio(Lista *aed){
	if(aed == NULL) return 0;
	if(*aed == NULL) return 0;
	
	Elemento *aux, *ant;
	ant = *aed;
	aux = ant->prox;
	
	*aed = aux->prox;
	
	free(aux);
	free(ant);
	return 1;}
	
int remover2Fim(Lista *aed){
	if(aed == NULL) return 0;
	if(*aed == NULL) return 0;
		
	Elemento *aux, *ant;
	ant = *aed;
	aux = ant->prox;
	
	while(aux->prox != NULL){
	ant = aux;
	aux = aux->prox;}
	
	free(aux);
	free(ant);
	
	
}
	
	
	
	
	
	
	
