#include<stdio.h>
#include <string.h>

float CalcularDensidade(int populacao, float area){
    float densidade;
    densidade = ((float) populacao / area);
    return densidade;
}

float pibPerCapita(float pib, int populacao){
    float pibPerCapita;
    pibPerCapita = (pib / (float) populacao);
    return pibPerCapita;
}

float SuperPoder(int populacao, float area, float pib, float pibpercapita, float densidadepop){
    float superpoder = (populacao + area + pib + pibpercapita);
    superpoder -= densidadepop;

    return superpoder;
}


int main(){

    char estado1, estado2;
    char codigo1[5], codigo2[5], nome1[50], nome2[50];
    int populacao1, populacao2, pontos_tr1, pontos_tr2;
    float area1, area2, pib1, pib2;
    float densidadePop1, densidadePop2, pibCapita1, pibCapita2;
    
    // dados da carta1
    printf("Digite o estado da Carta1\n");
        scanf(" %c", &estado1);
        getchar();

    printf("Digite o codigo da Carta 1\n");
        scanf("%s", codigo1);
        getchar();

    printf("Digite o nome da cidade da Carta 1\n");
        fgets(nome1, sizeof(nome1), stdin);
        nome1[strcspn(nome1, "\n")] = 0;
        
    printf("Digite a População da Carta 1\n");
        scanf("%d", &populacao1);
    
    printf("Digite a área em km² da Carta 1\n");
        scanf("%f", &area1);

    printf("Digite o PIB da carta 1\n");
        scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos da Carta 1\n");
        scanf("%d", &pontos_tr1);
        

    // dados da carta 2
    printf("Digite o estado da Carta2\n");
        scanf(" %c", &estado2);
        getchar();

    printf("Digite o codigo da Carta 2\n");
        scanf("%s", codigo2);
        codigo2[strcspn(codigo2, "\n")] = 0;
         getchar();
    printf("Digite o nome da cidade da Carta 2\n");
         fgets(nome2, sizeof(nome2), stdin);
        nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite a quantidade de pessoas da Carta 2\n");
        scanf("%d", &populacao2);
    
    printf("Digite a área em km² da Carta 2\n");
        scanf("%f", &area2);

    printf("Digite o PIB da carta 2\n");
        scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da Carta 2\n");
        scanf("%d", &pontos_tr2);
    
    densidadePop1 = (populacao1, area1);
    densidadePop2 = CalcularDensidade(populacao2, area2);
    pibCapita1 = pibPerCapita(pib1, populacao1);
    pibCapita2 = pibPerCapita(pib2, populacao2);
    float superpoder1 = SuperPoder(populacao1, area1, pib1, pibCapita1, densidadePop1);
    float superpoder2 = SuperPoder(populacao2, area2, pib2, pibCapita2, densidadePop2);

    // Exibição dos dados
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tr1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);


    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tr2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);

    printf("\nComparação de cartas\n");
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu (1)\n");
    }else{
       printf("População: Carta 2 venceu (0)\n");
    }
    if(area1 > area2){
        printf("Área: Carta 1 venceu (1)\n");
    }else{
       printf("Área: Carta 2 venceu (0)\n");
    }
    if(pib1 > pib2){
        printf("PIB: Carta 1 venceu (1)\n");
    }else{
       printf("PIB: Carta 2 venceu (0)\n");
    }
    if(pontos_tr1 > pontos_tr2){
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    }else{
       printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu (1)\n");
    }else{
       printf("População: Carta 2 venceu (0)\n");
    }
    if(densidadePop1 < densidadePop2){
        printf("População: Carta 1 venceu (1)\n");
    }else{
       printf("População: Carta 2 venceu (0)\n");
    }
    if(pibCapita1 > pibCapita2){
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    }else{
       printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu (1)\n");
    }else{
       printf("População: Carta 2 venceu (0)\n");
    }
    if(superpoder1 > superpoder2){
       printf("SuperPoder: Carta 1 venceu (1)\n");
    }
    else{
        printf("SuperPoder: Carta 2 venceu (0)\n");
    }
   
    return 0;
}
