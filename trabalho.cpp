#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2,nota3,nota4, media;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);
    do{
        printf("Digite a teceira nota: ");
        scanf("%f", &nota3);
    }while(nota2 < 0 || nota3 > 10);
    do{
        printf("Digite a quarta  nota: ");
        scanf("%f", &nota4);
    }while(nota2 < 0 || nota4 > 10);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Nota final: %.2f\n", media);
    
    if (media > 7){
    	printf("aprovado");
	}else if  (media > 3  && media< 7 ){
		printf("reprovado");
	}
	    
}
