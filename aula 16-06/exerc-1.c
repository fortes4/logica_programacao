/*1) Faça um programa que leia um número e apresente a tabuada deste número.*/

#include <stdio.h>
#include <conio.h>

main(){
    int tabuada = 0;
    printf("Digite um numero de 1 a 10:");
    scanf("%i", &tabuada);

    for(int x = 1; x<=10; ++x){
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
