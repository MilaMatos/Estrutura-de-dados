#include <stdio.h>
#include <stdlib.h>
#include "prova1.h"

	struct elemento{
		struct professor dados;
		struct elemento *prox;
	};
	
typedef struct elemento Elemento;


Lista* criar(){					//Criar a lista
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
	
	
int imprimir(Lista *aed){								//Imprimir todos os elementos da lista ou diz se está vazia
	if(aed == NULL) return 0;
	if(*aed == NULL) {
		printf("\nLista vazia");
		return 0;}
	
	Elemento *aux;
	aux = *aed;
	
	printf("\n");
	while(aux != NULL){
		printf("[%d]", aux->dados.id);
		
		aux = aux->prox;}
	return 1;}
	
void info(Lista *aed){								//Informa quantos ID pares, impares, o maior e o menor
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

int remover2Inicio(Lista *aed){					//Remove 2 elementos do inicio da lista
	if(aed == NULL) return 0;
	if(*aed == NULL) return 0;
	
	Elemento *aux, *ant;						//Falta remover quando tiver so 1 elemento
	ant = *aed;
	aux = ant->prox;
	
	if(aux == NULL){					//Somente 1 Elemento na lista
		*aed = NULL;
		free(ant);
		return 1;}
	
	else{
	*aed = aux->prox;
	free(aux);
	free(ant);
	return 1;}
}
	
int remover2Fim(Lista *aed){    //Remover 2 elementos do fim da lista
	if(aed == NULL) return 0;
	if(*aed == NULL) return 0;
		
	Elemento *aux, *ant;
	ant = *aed;
	aux = ant->prox;
	
	if(ant->prox == NULL){      //Somente 1 elemento na lista
		*aed = NULL;
		free(ant);}	
		
	if(aux->prox == NULL){     //Somente 2 elementos na lista
		*aed = NULL;
		free(aux);
		free(ant);}

	else{					   //+ de 2 elementos na lista
	
	Elemento *pro, *meio, *pri;
	pri = *aed;
	meio = pri->prox;
	pro = meio->prox;
		
		while(pro->prox != NULL){
			pri = meio;
			meio = pro;
			pro = pro->prox;}
	
			pri->prox = NULL;
	
		free(meio);
		free(pro);}
		
	return 1;}
	

	
	
