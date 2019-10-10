/******************************************************************************
Exercício 4

 Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”
*******************************************************************************/

#include <stdio.h>


#define SIZE 5 //Define o tamanho da matriz como uma constante

int main()
{
    int matriz[SIZE][SIZE];
    
    //Ler Matriz
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("Escreva o valor da posicao %d - %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //Ler x
    int X;
    int numeroEncontrado = 0;
    printf("Digite o valor à ser procurado: ");
    scanf("%d", &X);
    printf("\n");
    
    int posI, posJ;
    //Busca X na Matriz
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            if(matriz[i][j] == X){
                numeroEncontrado = 1;
                posI = i;
                posJ = j;
                break; //Sai do for
            }
        }
        if(numeroEncontrado == 1){
            break;//Tambem sai do for :-)
        }
    }
    
    //Imprimir Resultado
    if(numeroEncontrado == 1){
        printf("Posicao do Dado Procurado: L %d -  C %d", posI + 1, posJ + 1);
    }
    else{
        printf("Dado não encontrado!");
    }
    
    return 0;
}