//Nome
//Matricula
//Falta indicar as posicoes onde estao os maiores de 18 no vetor
#include <stdio.h>
int main() {
	int i, idade[10], maiores=0;
	float media;
	for (i=0; i<10; i++){
		printf("Digite a idade: \n", i+1);
		scanf("%d", &idade[i]);
		media = media + idade[i];
		if (idade[i]>18){
			maiores++;
		}
	}
	printf("A media das idades e: \n", media/10);
	printf("Existem %d idades maiores que 18 anos no vetor.", maiores);
	return 0;
}
