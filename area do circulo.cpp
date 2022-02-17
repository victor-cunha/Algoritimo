#include<stdio.h>
int main(){
	double raio, area;
	
	printf("imforme o valor de raio: ");
	scanf("%lf", &raio);
	
	area = (3.14159 * (raio * raio ));
	
	printf("o valor de ares e= %4lf", area);
	
	return 0 ;
}
