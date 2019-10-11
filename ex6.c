/******************************************************************************
Exercício 6

Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas
que podem ser a, b, c ou d. Seu programa devera comparar as respostas de cada candidato
com o gabarito e emitir um vetor denominado resultado, contendo a pontuação
correspondente a cada aluno
*******************************************************************************/

#include <stdio.h>
#include <ctype.h> //Para usar toupper

#define ALUNOS 5    //Define a quantidade de alunos como constante
#define QUESTOES 10 //Define a quantidade de questões como constante

/*
    Esta funcao utiliza ponteiros em C
    NÃO É NECESSARIO O USO DE PONTEIROS PARA A QUESTAO
    A Utilizacao do mesmo se deve por questões pessoais de preferência
    Variável Normal em C: char a
    Exemplo de ponteiro em C: char *a
*/
void lerQuestao(char *a){
    scanf("%c%*c", a); //"Limpa Buffer" - https://forum.imasters.com.br/topic/336835-tutorial-systempause-e-fflushstdin/
    *a = toupper(*a);
    while(*a != 'A' && *a != 'B' && *a != 'C' && *a != 'D'){
        printf("Favor inserir um valor válido (a, b, c ou d): ");
        scanf("%c%*c", a);
        *a = toupper(*a);
    }
}

int main()
{
    char matriz[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
    int pontuacao[ALUNOS];
    int i, j;
    
    //Inicializa Vetor de Pontuacao para não dar problema
    //Cuidado ao operar variáveis não iniciadas!!!
    for(i = 0; i < ALUNOS; i++){
        pontuacao[i] = 0;
    }
    
    //Preencher o gabarito
    printf("*** GABARITO ***\n");
    for(i = 0; i < QUESTOES; i++){
        printf("Resposta da Questão %d: ", i+1);
        lerQuestao(&gabarito[i]);
    }
    
    //Ler Respostas dos Alunos
    for(i = 0; i < ALUNOS; i++){
        printf("***RESPOSTA DO ALUNO %d***\n", i+1);
        for(j = 0; j < QUESTOES; j++){
            printf("Resposta da Questão %d: ", j+1);
            lerQuestao(&matriz[i][j]); 
        }
    }
    
    //Calcular e Apresentar Notas
    for(i = 0; i < ALUNOS; i++){
        printf("\nNOTA DO ALUNO %d: ", i+1);
        for(j = 0; j < QUESTOES; j++){
            if(matriz[i][j] == gabarito[j]){
                pontuacao[i]++;
            }
        }
        printf("%d", pontuacao[i]);
    }
    return 0;
}
