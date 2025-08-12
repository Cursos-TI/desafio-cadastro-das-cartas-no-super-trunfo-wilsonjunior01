#include <stdio.h>

int main(){
    
    printf("Carta 1\n");
    char estado1[50];
    char codigo1[50];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int ponto1;

    printf("Estado1: ");
    scanf("%s", estado1);

    printf("Código1: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População1: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &ponto1);
    

    printf("Estado1: %s\n", estado1);
    printf("Código1: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População1: %lu habitantes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", ponto1);
    
   
    printf("Carta 2\n");
    char estado2[50];
    char codigo2[50];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int ponto2;

    printf("Estado2: ");
    scanf("%s", estado2);

    printf("Código2: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &ponto2);
    

    printf("Estado2: %s\n", estado2);
    printf("Código2: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões\n", pib2);
    printf("Numero de Pontos Turisticos: %d", ponto2);
   
   

    return 0;

}