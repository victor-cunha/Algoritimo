#include<stdio.h>

int main(){
	int i ,idade[10],maior=0;
	float absoluto,soma=0,media ;
	char escolha ;
	
	for (i=0;i<10;i++){
		printf("coloque a idade :");
		scanf("%d",&idade[i] );
		if(idade[i]>=18){
			maior++;
		}
		
		printf("continuar ou nao :(s,n):");
		
		getchar();
		
		scanf("%c",&escolha);
		
		if(escolha == 'n'){
			printf("teminou de ler \n:");
			break;
		} 	
	}
	absoluto = ++i ;
		
	for (i=0;i<absoluto;i++){
		soma = idade[i] + soma;			
	} 
	media = soma /absoluto ;
	printf("media %.2f\n",media);	
	printf("maiores que 18:%d\n",maior);
	
	for (i=0;i<absoluto;i++){
		if(idade[i] >= 18){
			printf("posicao:%d\n",i);
		}
	}
				
	return 0;
	
}
