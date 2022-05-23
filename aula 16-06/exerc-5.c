/*Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere que Polegada = Centímetro * 2,54.*/

#include <conio.h>
#include <stdio.h>

main(){
	int i;
	float polegada;
	
	for(i=1; i<=20; i++){
		polegada = i * 2.54;
		
		printf	("%d x 2,54 = %.2f\n", i,polegada);
	}
	
	
	getch();
}
