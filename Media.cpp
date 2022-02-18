#include<stdio.h>

int main(){
	 double a, b, media;
	 
	 printf("insira o valor A:");
	 scanf("%lf", &a);
	 printf("insira o valor B:");
	 scanf("%lf", &b);
	 
	 media = (a*3.5 + b*7.5)/11;
	 
	 printf("MEDIA = %lf",media );
	 
	return 0;
	
}
