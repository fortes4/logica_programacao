/*Escreva um programa que pergunte para o usu�rio os valores iniciais e finais da contagem, e ent�o mostre todos os valores desse intervalo.*/

#include <conio.h>
#include <stdio.h>

main(){
	int inicio, fim, i;
	
	printf("Qual o valor inicial da contagem? ");
	scanf("%d", &inicio);
	
	printf("Qual o valor final da contagem? ");
	scanf("%d", &fim);
	
	for(i=inicio +1 ; i<fim; i++){
		printf("%d\n", i);
		
	}
	
	
	getch();
}
