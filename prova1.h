	struct professor{
		int id;
		char nome[50];
		float salario;
		int nota;
	};
	
typedef struct elemento* Lista;

Lista* criar();
int inserirInicio(Lista*, struct professor);  //Inserir no inicio sem repetição de Id
int imprimir(Lista*);
void info(Lista*); 						     //Dizer quantos impares, pares, maior e menor valor de uma lista
int remover2Inicio(Lista*);					//remover os 2 primeiros
int remover2Fim(Lista*);				   //remover os 2 ultimos
