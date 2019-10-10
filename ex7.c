/******************************************************************************
Exercício 7

Faça um programa que leia uma matriz 3 x 3 e calcule o determinante.

*******************************************************************************/

#include <stdio.h>


#define SIZE 3 //Define o tamanho da matriz como uma constante

int main()
{
    int matriz[SIZE][SIZE];

    //Ler Matriz
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Escreva o valor da posicao %d - %d da Matriz A: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    

    int LinhaPositiva = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
    int LinhaNegativa = (matriz[0][2] * matriz[1][1] * matriz[2][0]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    printf("Determinante: %d", LinhaPositiva - LinhaNegativa);
    return 0;
}