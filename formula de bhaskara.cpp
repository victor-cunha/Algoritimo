#include<stdio.h>
#include <math.h>
#define delta (pow(b,2) - 4*a*c)
int main(){
	double a, b, c, x1, x2;
	printf("inserir o valor de a:");
    scanf("%lf" ,&a);
	printf("inserir o valor de b:");
    scanf("%lf" ,&b);
	printf("inserir o valor de c:");
    scanf("%lf" ,&c);
  x1 = (-b + sqrt(delta))/(2*a);
  x2 = (-b - sqrt(delta))/(2*a);
  if (a==0 || b==c )
      printf("imposivel calcular");
      else printf("x1 = %5lf\n x2 = %5lf",x1 ,x2);
      
	  
	
}
