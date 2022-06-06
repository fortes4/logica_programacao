#include <stdio.h>
#include <conio.h>

main(){
	int i, vetorA[10], contP=0, contI=0;
	
	for(i=0; i<10; i++){
		printf("Digite o valor %d\n", i);
		scanf("%d", &vetorA[i]);
	
		if(vetorA[i] % 2 == 0){
			contP++;
		}
		else {
			contI++;	
		}
	}
	

		printf("\n\nTem %d numero pares e %d numeros impares", contP, contI);
	
	
	getch();
}
