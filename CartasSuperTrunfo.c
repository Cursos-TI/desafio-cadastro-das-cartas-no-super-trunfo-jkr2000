#include<stdio.h>
#include <string.h>

int main(){

    char estado1, estado2;
    char codigo1[5], codigo2[5], nome1[50], nome2[50];
    int populacao1, populacao2, pontos_tr1, pontos_tr2;
    float area1, area2, pib1, pib2;
    
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

    // Exibição dos dados
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tr1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tr2);
    
   
    return 0;
}
