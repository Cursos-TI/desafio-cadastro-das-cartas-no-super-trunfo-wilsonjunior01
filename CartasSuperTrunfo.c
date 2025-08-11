#include <stdio.h>

int main(){
    
    printf("Carta 1\n");
    char estado;
    char código;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int ponto;

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Código: ");
    scanf("%s", &código);

    printf("Nome da Cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &ponto);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", código);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %f habitantes\n", populacao);
    printf("Área: %fkm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d");


}