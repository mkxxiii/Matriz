/******************************************************************************
Exercício 2

Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.
*******************************************************************************/

#include <stdio.h>


#define SIZE 5 //Define o tamanho da matriz como uma constante

int main()
{
    int matriz[SIZE][SIZE];
    
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            if(i==j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); //Saltar para a próxima linha no console
    }
    
    return 0;
}