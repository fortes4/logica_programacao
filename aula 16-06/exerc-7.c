/* Escreva um programa em C que gera n�meros entre 1000 e 1999 e mostra aqueles que divididos por 11 d�o resto 5.*/

#include <conio.h>
#include <stdio.h>

main(){
	int i;
	
	for(i=1000+1; i<1999; i++){
		if(i % 11 == 5){
			
			printf("%d\n", i);
		}
	}
	
	
	getch();
}
