/*2)  Dado um limite inferior e superior, calcule a soma de todos os números pares contidos nesse intervalo.*/

#include <stdio.h>
#include <conio.h>

main(){

int count, inf, sup, somatotal;

printf("Digite o limite inferior: \n");

scanf("%d",&inf);

printf("Digite o limite superior: \n");

scanf("%d",&sup);

for (count=inf;count<sup;count++){

   if(count % 2 == 0){

   somatotal = count+somatotal;  

   }

}

printf("A soma total dos números pares do intervalo de %d ate %d e de: %d.\n",inf,sup,somatotal);

return 0;

}
