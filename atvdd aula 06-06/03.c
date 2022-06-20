//Escreva um algoritmo que leia os valores para um vetor de 10 elementos, e em seguida ordene em ordem crescente os valores desse vetor, utilizando um vetor auxiliar

#include <conio.h>
#include <stdio.h>

main(){
	int vetor[10], i, ord[10], o, menor, m;
	for(i=0;i<10;i++){//Leitura
		printf("\nDigite o elemento %d do vetor:" ,i);
		scanf("%i",&vetor[i]);
	}
	menor = vetor[0];
	m = 0;
	for(o =0; o<10; o++){
		for(i=0; i<10; i++){
			if(vetor[i]<vetor[m]){
				m = i;
			}
		}
		//printf("O menor elemento do vetor esta na posicao %i e vale %i,m, menor);
		ord[o] = vetor[m]; //ord[o] = menor
		vetor[m] = 99999999;
	}
	printf("Vetor ordenado: ");
	for(i=0;i<10;i++){
		printf("%i", ord[i]);
	}
}
