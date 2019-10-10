/******************************************************************************
Exercício 5

Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das
matrizes lidas.

*******************************************************************************/

#include <stdio.h>


#define SIZE 4 //Define o tamanho da matriz como uma constante

int main()
{
    int matrizA[SIZE][SIZE];
    int matrizB[SIZE][SIZE];
    
    //Ler MatrizA
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Escreva o valor da posicao %d - %d da Matriz A: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    //Ler MatrizB
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Escreva o valor da posicao %d - %d da Matriz B: ", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    //Escreve os Maiores na 3° Matriz
    int matrizC[SIZE][SIZE];
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            if(matrizA[i][j] > matrizB[i][j] ){
                matrizC[i][j] = matrizA[i][j];
            }
            else{
                matrizC[i][j] = matrizB[i][j];
            }
        }
    }
    
    //Imprime 3° matriz
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("\n"); //Saltar para a próxima linha no console
    }
    
    return 0;
}