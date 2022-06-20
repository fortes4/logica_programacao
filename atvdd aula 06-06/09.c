//Escreva um programa que leia uma matriz de ordem 5 e verifique se os elementos da diagonal principal (da esquerda para a direita) são os mesmos da diagonal secundária (direita pra esquerda).

#include <conio.h>
#include <stdio.h>

main(){
	int mat[5][5], i, j, c =0, pri[5], sec[5], s;
	//Laço para Leitura da Matriz
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite o elemento %i x %i da matriz: ",i,j);
			scanf("%i",&mat[i][j]);
		}
	}
	//Laço para divisao da diagonal principal e secundaria em vetores
	s = 0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){//diag principal
				pri[i] = mat[i][j];
			}
			if(i+j==4){//diagonal secundaria
				sec[s] = mat[i][j];
				s++;
			}
		}
	}
	//Laço para apresentação dos vetores:
	printf("Diagonal principal: \n");
	for(i=0;i<5;i++){
		printf("%i",pri[i]);
	}
	printf("Diagonal secundaria: \n");
	for(i=0;i<5;i++){
		printf("%i",sec[i]);
	}
	
	for(i=0;i<5;i++){
		if(sec[i]==pri[i]){
			printf("Elemento %i da diagonal principal e secundaria sao iguais\n",i);
			c++;
		}
	}
	
	if(c==5){
		printf("Elementos da diagonal principal e secundaria sao iguais!");
	}
	else {
		printf("%i elementos da diagonal principal e secundaria sao iguais!");
	}
}
