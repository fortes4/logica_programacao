#include <stdio.h>
#include <conio.h>

main(){
	int i, vetorA[10];
	
	for(i=0; i<10; i++){
		printf("Digite o valor %d\n", i);
		scanf("%d", &vetorA[i]);
	}
	for(i=9; i>=0; i--){
		printf("%d|", vetorA[i]);
	}
	
	
	getch();
}
