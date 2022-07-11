#include <stdio.h>
#include <stdlib.h> // comando system
#include <string.h> // comando strlen
#include <conio.h> // comando getch
#include <windows.h>

int main()
{
	char palavra[30]="", letra, lacuna[30]="", dica[30]="";
	int a, i, vida=5, cont, venceu=0;

	printf("Digite a palavra secreta: ");
	gets(palavra);
	printf("Digite a dica: ");
	gets(dica);
	
	
	for(i=0; i<strlen(palavra); i++) // Digitar a lacuna onde ficam as letras acertadas
    {
        if(palavra[i]!=' ') lacuna[i] = '_';
        else lacuna[i] = ' ';
    }

	while(vida > 0 && venceu == 0)
	{
		system("cls"); // limpa tela
		printf("Dica: %s\n", dica);
		printf("Quantidade de letras: %d\n", strlen(palavra));
		printf("Vidas: %d\n\n", vida);

		printf("%s", lacuna);
		printf("\n\n");

		printf("Digite uma letra: ");
		letra = getch();

		printf("%c\n", letra);

		for(a=0; a<strlen(palavra); a++) 
		{
			if(palavra[a]==letra)
			{
				lacuna[a] = letra;
				cont++; // Para saber se acertou a letra ou não
			}
		}

		if(cont==0) {
			printf("Voce errou uma letra!\n");
			vida--;
		}

		if(cont>0) {
			printf("Voce acertou uma letra!\n");
		}
		
		if(vida == 0) venceu=-1; // verificar se perdeu

		if(strcmp(palavra, lacuna)==0) venceu=1; // verificar se ganhou
		cont=0;

	}
	
	printf("\n");
	if(venceu==1) printf("Parabens! Voce venceu!\n\n");
	if(venceu==-1) printf("Voce perdeu!\n\n");

	getch();

}
