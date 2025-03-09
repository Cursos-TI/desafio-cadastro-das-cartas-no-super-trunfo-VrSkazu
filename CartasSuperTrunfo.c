#include <stdio.h>


int main() {
    char carta1;
    char carta2;
    char cd_da_carta1[8];
    char cd_da_carta2[8];
    char nome_cidade1[15];
    char nome_cidade2[15];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;
    float densidade_populacional1;
    float densidade_populacional2;
    float pib_per_capita1;
    float pib_per_capita2;
    float super_poder1;
    float super_poder2;
    

    printf("dados da carta 1: \n");
    printf("letra do estado A01:");
    scanf("%c", &carta1);
    //
    printf("codigo da carta:");
    scanf("%s", &cd_da_carta1);
    //
    printf("nome da cidade:");
    scanf(" %[^\n]", &nome_cidade1);
    //
    printf("populaçao:");
    scanf("%d", &populacao1);
    //
    printf("area (km2):");
    scanf("%f", &area1);
    //
    printf("pib da cidade em B$:");
    scanf("%f", &pib1);
    //
    printf("digite um numero de pontos turisticos:");
    scanf("%d", &pontos_turisticos1);
    //
    //
    //
    printf("dados da carta 2: \n");
    getchar();
    printf("letra correspondente ao estado:");
    scanf("%c",&carta2);
    //
    printf("codigo da carta C02:");
    scanf("%s", &cd_da_carta2);
    //
    printf("nome da cidade:");
    scanf(" %[^\n]", &nome_cidade2);
    //
    printf("populacao:");
    scanf("%d", &populacao2);
    //
    printf("area (km2):");
    scanf("%f", &area2);
    //
    printf("pib da cidade em B$:");
    scanf("%f", &pib2);
    //
    printf("digite um numero de pontos turisticos:");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional1 = (populacao1 / area1);
    printf("A DENSIDADE POPULACIONAL E: %.10f\n", densidade_populacional1);
    densidade_populacional2 = (populacao2 / area2);
    printf("A DENSIDADE POPULACIONAL E: %.10f\n", densidade_populacional2);

    pib_per_capita1 = (pib1 / populacao1);
    printf("O PIB PER CAPITA E: %.10f\n", pib_per_capita1);
    pib_per_capita2 = (pib2 / populacao2);
    printf("O PIB PER CAPITA E: %.10f\n", pib_per_capita2);

    printf("populacao da carta 1 venceu ?:(%d)\n", populacao1 > populacao2);
    printf("a area da carta 1 venceu ?:(%d)\n", area1 > area2);
    printf("o pib1 da carta 1 venceu ?:(%d)\n", pib1 > pib2);
    printf("a quantidade de prontos turisticos da carta 1 é maior ?:(%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("o pib per capitada da carta 1 é maior ?:(%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("a densidade populacional da carta 1 é maior ?:(%d)\n", densidade_populacional1 > densidade_populacional2);
    

        super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade_populacional1);
        super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade_populacional2);

  
      
    return 0;
}