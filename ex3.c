/******************************************************************************
Exercício 3

Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.
*******************************************************************************/

#include <stdio.h>


#define SIZE 4 //Define o tamanho da matriz como uma constante

int main()
{
    int matriz[SIZE][SIZE];
    int maior, maiorI, maiorJ;
    
    //Ler Matriz
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Escreva o valor da posicao %d - %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            
            if(i == 0 && j == 0){
                maior = matriz[i][j];
                maiorI = i;
                maiorJ = j;    
            }
            else if(matriz[i][j] > maior){
                maior = matriz[i][j];
                maiorI = i;
                maiorJ = j;
            }
        }
    }
    
    //Imprimir Matriz
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); //Saltar para a próxima linha no console
    }
    
    //Imprimir Posicao do Maior Valor
    printf("Posicao do Maior valor: Linha %d -  Coluna %d", maiorI + 1, maiorJ + 1);
    
    return 0;
}