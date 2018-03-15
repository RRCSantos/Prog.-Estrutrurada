#include<stdio.h>
#include<stdlib.h>
#define M 15
int fila[M];
int i, f, n;
int resp;
int v;

int enfileirar(int valor){
if (n == M) { /* fila cheia */
printf("Capacidade da fila estourou.\n");
exit(1); /* aborta programa */
}
f = (i + n) % M;
fila[f] = valor;
n++;
}		


int desenfileirar(){
int valor;
if (n == 0) {
printf("Fila vazia.");
exit(1); /* aborta programa */
}
valor = fila[i];
i = (i + 1) % M;
n--;
return valor;
}


int main(){
int n = 0;
i = 0;
resp = -1;
while(resp!=0){
resp = -1;
printf("Escolha uma operação:\n1 - Enfileirar\n2 - Desenfileirar\n3 - Sair\n");
scanf("%d",&resp);	
	if(resp==1){
	printf("Qual o valor ?\n");
	scanf("%d",&v);
	enfileirar(v);
	}
	 	else if(resp==2){
		desenfileirar();
		}
		 	else{
			printf("Programa encerrado");
			return(0);
			}
			
}
}

