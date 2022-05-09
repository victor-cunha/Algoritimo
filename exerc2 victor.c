//Nome
//Matricula
//fiz esse mas n ta funcionando
#include <stdio.h>
int main(){
	int i, tamanho;
	printf("Quantos elementos deverao existir no vetor?\n");
	scanf("%d", &tamanho);
	int vetor[tamanho];
	printf("Agora digite o valor desses elementos: \n");
	for (i=0; i<tamanho; i++){
		scanf("%d", &vetor[i]);
	}
	for (i=0; i<tamanho; i++){
		printf("Valores do vetor na posicao [%d]: %d", i, vetor[i]);
	}
}
