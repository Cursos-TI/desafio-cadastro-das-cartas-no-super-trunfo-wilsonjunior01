#include <stdio.h>

int main(){
    
    printf("Carta 1");
    char estado;
    char código;
    char nome[50];
    int populacao;
    float área;
    float PIB;
    int ponto;

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Código: ");
    scanf("%s", &código);

    printf("Nome da Cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Área: ");
    scanf("%f", &área);

     printf("PIB: ");
     scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &ponto);

    printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n Popolação: %f\n", estado, código, nome, populacao);
    printf("Área: %f\n PIB: %f\n Numero de Pontos Turisticos: %d", área, PIB, ponto);













}