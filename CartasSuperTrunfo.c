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
    
        super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade_populacional1);
    
        super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade_populacional2);
    
        int opçoes_de_atributo;
        printf("¨¨¨¨ comparaçao de cartas ¨¨¨¨\n");
        printf("escolha uma opçao de 1 a 6:\n");
        printf("1. comparar populaçao: \n");
        printf("2. comparar area1: \n");
        printf("3. comparar pib1: \n");
        printf("4. comparar pontos turisticos1: \n");
        printf("5. comparar pib per capita: \n");
        printf("6. comparaçao da densidade populacional: \n");
        scanf("%d", &opçoes_de_atributo);
    
        switch (opçoes_de_atributo)
        {
        case 1:
        if(populacao1 > populacao2)
        {
            printf("populaçao da carta 1 venceu \n",nome_cidade1);
        } else if(populacao1 == populacao2)
        {
            printf("empate!: \n", nome_cidade1);
        } else {
            printf("populaçao da carta 2 venceu: \n",nome_cidade2);
        }
            break;
    
            case 2:
        if(area1 > area2)
        {
            printf("a area da carta 1 venceu \n",nome_cidade1);
        } else if(area1 == area2)
        {
            printf("empate!: \n", nome_cidade1);
        } else {
            printf("a area da carta 2 venceu: \n",nome_cidade2);
        }
            break;
            case 3:
        if(pib1 > pib2)
        {
            printf("o pib da carta 1 venceu \n",nome_cidade1);
        } else if(pib1 == pib2)
        {
            printf("empate!: \n", nome_cidade1);
        } else {
            printf("o pib da carta 2 venceu: \n",nome_cidade2);
        }
        break;
        case 4:
        if(pontos_turisticos1 > pontos_turisticos2)
        {
        printf("a quantidade de pontos turisticos da carta 1 venceu \n",nome_cidade1);
        } else if(pontos_turisticos1 == pontos_turisticos2)
        {
        printf("empate!: \n", nome_cidade1);
        } else {
        printf("a quantidade de pontos turisticos da carta 2 venceu: \n",nome_cidade2);
        }
        break;
        case 5:
        if(pib_per_capita1 < pib_per_capita2)
        {
        printf("o pib per capita da carta 1 venceu \n",nome_cidade1);
        } else if(pib_per_capita1 == pib_per_capita2)
        {
        printf("empate!: \n", nome_cidade1);
        } else {
        printf("o pib per capita da carta 2 venceu: \n",nome_cidade2);
        }
        break;
        case 6:
        if(densidade_populacional1 < densidade_populacional2)
        {
            printf("a densidade populacional da carta 1 venceu \n",nome_cidade1);
        } else if(densidade_populacional1 == densidade_populacional2)
        {
            printf("empate!: \n", nome_cidade1);
        } else {
            printf("a densidade pupulacional da carta 2 venceu: \n",nome_cidade2);
        }
            break;
        default:
        printf("invalido:\n");
        break;
        }
    
    
    
    return 0;
    
} 




