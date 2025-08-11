#include <stdio.h>

int main(){
    
    printf("Carta 1\n");
    char estado[50];
    char código[50];
    char nome[100];
    int populacao;
    float area;
    float pib;
    int ponto;

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Código: ");
    scanf("%s", &código);

    printf("Nome da Cidade: ");
    scanf("%s", nome);

    printf("População: ");
    scanf("%i", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &ponto);



    printf("Estado: %s\n", estado);
    printf("Código: %s\n", código);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %i habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões\n", pib);
    printf("Numero de Pontos Turisticos: %i", ponto);
    
   
   
   
   
   
    return 0;

}