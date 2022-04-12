#include<stdio.h>	
int main(){
	int i ,n;
	char nome[25],curso[25],matricula[10],cpf[12]; //numeros de caracteres
	//fgets(str,tamanho,stdin)
	printf("quantos alunos deseja matricular:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<=n;i++){
		
		printf("digite o nome :");
		fgets (nome, 24 ,stdin);//
		fflush(stdin);
		
		printf("digite o curso:");
		fgets (curso, 24 ,stdin);
		
		fflush(stdin);//limpar o buffer de memoria
		
		printf("digite a matricula :");
		fgets (matricula, 24 ,stdin);
		fflush(stdin);
		
		printf("digite o cpf :");
		fgets (cpf, 11 ,stdin);
		fflush(stdin);
		
	printf("nome do aluno:%s\n",nome);
	printf("insira o curso: %s\n",curso);
	printf("insira a matricula:%s\n",matricula);
	printf("insira o cpf:%s\n",cpf);
		
		
		
		
		
	}//fim for
	
}
