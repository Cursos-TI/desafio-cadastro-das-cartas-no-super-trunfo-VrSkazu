#include <stdio.h>
//variaveis a guardar

int main() {
    char A, C;
    char cd_da_carta[8];
    char nome_cidade[15] ;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("dados da carta 1: \n");
    printf("letra do estado A01:");
    scanf("%c", &A);
    //
    printf("codigo da carta:");
    scanf("%s", &cd_da_carta);
    //
    printf("nome da cidade:");
    scanf(" %[^\n]", &nome_cidade);
    //
    printf("populaçao:");
    scanf("%d", &populacao);
    //
    printf("area (km2):");
    scanf("%f", &area);
    //
    printf("pib da cidade em B$:");
    scanf("%f", &pib);
    //
    printf("digite um numero de pontos turisticos:");
    scanf("%d", &pontos_turisticos);
    //
    //
    //
    printf("dados da carta 2: \n");
    getchar();
    printf("letra correspondente ao estado:");
    scanf("%c",&C);
    //
    printf("codigo da carta C02:");
    scanf("%s", &cd_da_carta);
    //
    printf("nome da cidade:");
    scanf(" %[^\n]", &nome_cidade);
    //
    printf("populacao:");
    scanf("%d", &populacao);
    //
    printf("area (km2):");
    scanf("%f", &area);
    //
    printf("pib da cidade em B$:");
    scanf("%f", &pib);
    //
    printf("digite um numero de pontos turisticos:");
    scanf("%d", &pontos_turisticos);

    return 0;
    


    
}
