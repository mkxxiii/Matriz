/******************************************************************************
Exercício 1

Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui. 
*******************************************************************************/

#include <stdio.h>


#define SIZE 4 //Define o tamanho da matriz como uma constante
int main()
{
    int matriz[SIZE][SIZE];
    
    int qtdMaiorDez = 0;
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Escreva o valor da posicao %d - %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10){
                qtdMaiorDez++;
            }
        }
    }
    
    printf("\nEsta Matriz tem %d valores maiores que 10", qtdMaiorDez);
    return 0;
}