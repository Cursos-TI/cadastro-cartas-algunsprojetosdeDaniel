#include <stdio.h>
int main () {
    char estado1;
    char carta1[10], cidade1[50];
    int populacao1, pontosturisticos1;
    float area1, PIB1;

    char estado2;
    char carta2[10], cidade2[50];
    int populacao2, pontosturisticos2;
    float area2, PIB2;

    printf("seja bem vindo ao super trunfo, vou te pedir informações sobre as 2 cartas\n");

    printf("vamos começar pela carta 1\n");

    printf("digite o estado\n");
    scanf(" %c", &estado1);

    printf("digite a carta\n");
    scanf("%s", carta1);

    printf("digite o nome da cidade\n");
    scanf("%s", cidade1);

    printf("digite a população\n");
    scanf("%d", &populacao1);

    printf("digite a área da cidade\n");
    scanf("%f", &area1);

    printf("digite o PIB da cidade\n");
    scanf("%f", &PIB1);

    printf("digite o número de pontos turisticos\n");
    scanf("%d", &pontosturisticos1);

    printf("tudo certo por aqui, agora vamos preencher os dados da carta 2\n");

    printf("digite o estado\n");
    scanf(" %c", &estado2);

    printf("digite a carta\n");
    scanf("%s", carta2);

    printf("digite o nome da cidade\n");
    scanf("%s", cidade2);

    printf("digite a população\n");
    scanf("%d", &populacao2);

    printf("digite a área da cidade\n");
    scanf("%f", &area2);

    printf("digite o PIB da cidade\n");
    scanf("%f", &PIB2);

    printf("digite o número de pontos turisticos\d");
    scanf("%d", &pontosturisticos2);

    printf("carta 1:\n");
    
    printf("estado: %c\n", estado1);

    printf("código: %s\n", carta1);

    printf("nome da cidade: %s\n", cidade1);

    printf("população: %d\n", populacao1);

    printf("área: %fkm^2\n", area1);

    printf("PIB %.2f bilhões de reais\n", PIB1);
    
    printf("número de pontos turisticos: %d\n", pontosturisticos1);

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("código: %s\n", carta2);

    printf("Nome da cidade: %s\n", cidade2);

    printf("população: %d\n", populacao2);

    printf("PIB: %.2f bilhões de reais\n", PIB2);

    printf("Número de pontos turisticos: %d\n", pontosturisticos2);

    
    

}
