#include <stdio.h>
 int main(){
 	 int idade ;
 	 printf("digite sua  idade:");
 	 scanf("%d", &idade);
 	 
 	   if (idade > 0 && idade <= 10)
 	      printf("crianca\n");
 	      else if (idade > 10 && idade <= 18)
 	               printf("adolescente\n");
 	               else if (idade > 18 && idade <= 60)
 	                        printf("adulto");
 	                        else if (idade > 60 && idade <= 100)
 	                                 printf("idoso");
 	                                 else if (idade >100 && idade <= 150)
 	                                         printf("zumbi");
 	                                         else if ("Idade invalida")
 	                    

 	return 0;
 	
 	
 }
