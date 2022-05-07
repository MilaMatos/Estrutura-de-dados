struct
struct aluno{
	int id;
	char nome[50];
	float media;
};

typedef struct node Fila;

Fila* criar();
int inserir(Fila*, struct aluno);
int imprimir(Fila*);
int remover(Fila*);

int inverter(Fila*);			//Use manipulação de ponteiros, não crie uma fila nova.
int limpezaCentral(Fila*); 		//Remova tudo da fila, exceto o primeiro e o último elemento.
int limpezaExtremos(Fila*); 	//Remova o primeiro e o último elemento da fila.
int ordenada(Fila*); 			//Função verifica se fila está ordenada (por id/matrícula/código). por ordem crescente
int mover(Fila*, Fila*); 	    //Faça uma função que permita você mover um elemento de uma fila para outra fila.
