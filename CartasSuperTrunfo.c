#include <stdio.h>
int main () {
    
    //declarando váriaveis das cartas
    
    char estado1;
    char carta1[10], cidade1[50];
    int pontosturisticos1;
    unsigned long int populacao1;
    float area1, PIB1, densidadepopulacional1, PIBpercapta1, superpoder1; 
    

    char estado2;
    char carta2[10], cidade2[50];
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2, PIB2, densidadepopulacional2, PIBpercapta2, superpoder2;

    //declarando váriaveis resultado para comparação

    int pontosturisticos;
    unsigned long int populacao;
    float area, PIB, densidadepopulacional, superpoder, PIBpercapta;

    // declarando váriavel switch

    int comparandocartas;

    // bem vindo

    printf("seja bem vindo ao super trunfo, vou te pedir informações sobre as 2 cartas\n");

    // começar carta 1

    printf("vamos começar pela carta 1\n");

    //carta 1

    printf("digite o estado\n");
    scanf(" %c", &estado1);

    printf("digite a carta\n");
    scanf(" %s", carta1);

    printf("digite o nome da cidade\n");
    scanf("%s", cidade1);

    printf("digite a população\n");
    scanf("%lu", &populacao1);

    printf("digite a área da cidade\n");
    scanf("%f", &area1);

    printf("digite o PIB da cidade\n");
    scanf("%f", &PIB1);

    printf("digite o número de pontos turisticos\n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / area1;

    PIBpercapta1 = (float) PIB1 / populacao1;

    superpoder1 = (float) (populacao1 + area1 + PIB1 + pontosturisticos1
    + PIBpercapta1) - densidadepopulacional1;

    // começar carta 2

    printf("tudo certo por aqui, agora vamos preencher os dados da carta 2\n");

    //carta 2

    printf("digite o estado\n");
    scanf(" %c", &estado2);

    printf("digite a carta\n");
    scanf("%s", carta2);

    printf("digite o nome da cidade\n");
    scanf("%s", cidade2);

    printf("digite a população\n");
    scanf("%lu", &populacao2);

    printf("digite a área da cidade\n");
    scanf("%f", &area2);

    printf("digite o PIB da cidade\n");
    scanf("%f", &PIB2);

    printf("digite o número de pontos turisticos\n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / area2;

    PIBpercapta2 = (float) PIB2 / populacao2;

    superpoder2 = (float) (populacao2 + area2 + PIB2 + pontosturisticos2
    +  PIBpercapta2) - densidadepopulacional2;

    //print carta 1

    printf("carta 1:\n");
    
    printf("estado: %c\n", estado1);

    printf("código: %s\n", carta1);

    printf("nome da cidade: %s\n", cidade1);

    printf("população: %lu\n", populacao1);

    printf("área: %fkm^2\n", area1);

    printf("PIB %.2f bilhões de reais\n", PIB1);
    
    printf("número de pontos turisticos: %d\n", pontosturisticos1);

    printf("densidade populacional: %.2fhab/km^2\n", densidadepopulacional1);

    printf("PIB per capta: %.2f reais\n",PIBpercapta1);

    printf("Super poder: %f\n", superpoder1);

    //print carta 2
    
    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("código: %s\n", carta2);

    printf("Nome da cidade: %s\n", cidade2);

    printf("população: %lu\n", populacao2);

    printf("PIB: %.2f bilhões de reais\n", PIB2);

    printf("Número de pontos turisticos: %d\n", pontosturisticos2);

    printf("densidade populacional: %.2fhab/km^2\n", densidadepopulacional2);

    printf("PIB per capta: %.2f reais\n", PIBpercapta2);

    printf("Super poder: %f\n", superpoder2);

    // comparando cartas

    printf("Vencedor:\n");
    
    if (populacao1 > populacao2) {
        printf("População: carta 1 venceu!\n");
    } else {
        printf("População: carta 2 venceu!\n");
    }

    if (PIB1 > PIB2) {
        printf("PIB: carta 1 venceu!\n");
    } else {
        printf("PIB: carta 2 venceu!\n");
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf("Número de pontos turísticos: carta 1 venceu!\n");
    } else {
        printf("Número de pontos turísticos: carta 2 venceu!\n");
    }

    if (densidadepopulacional1 < densidadepopulacional2) {
        printf("Densidade populacional: carta 1 venceu!\n");
    } else {
        printf("Densidade populacional: carta 2 venceu!\n");
    }

    if (PIBpercapta1 > PIBpercapta2) {
        printf("PIB per capta: carta 1 venceu!\n");
    } else {
        printf("PIB per capta: carta 2 venceu!\n");
 
        if (superpoder1 > superpoder2) {
            printf("Super poder: carta 1 venceu!\n");
        } else {
            printf("Super poder: carta 2 venceu!\n");
        }
    }

    // comparando cartas

    printf("agora vamos comparar as cartas!\n");
    printf("digite o número que você deseja comparar:\n");
    printf("1. Carta\n");
    printf("2. população\n");
    printf("3. área\n");
    printf("4. PIB\n");
    printf("5. número de pontos turísticos\n");
    printf("6. densidade populacional\n");
    scanf("%d", &comparandocartas);

    switch (comparandocartas) {
        case 1:
        printf("A carta 1 é %s e a carta 2 é %s", carta1, carta2);
        break;
        case 2:
        if (populacao1 > populacao2) {
            printf("A população da carta 1 é %lu e a da carta 2 é %lu, então a carta %s, venceu a carta %s\n", 
                populacao1,populacao2, carta1, carta2);
        } else if (populacao1 < populacao2) {
            printf("A população da carta 1 é %lu e a da carta 2 é %lu, então a carta %s venceu a carta %s\n", 
                populacao1, populacao2, carta2, carta1);
        } else {
            printf("A população da carta 1 é %lu e a da carta 2 é %lu, então a carta %s, empatou com a carta %s\n", 
                populacao1, populacao2, carta1, carta2);
        break;
        case 3:
        if (area1 > area2) {
            printf("A área da carta 1 é %f e a área da carta 2 é %f, então a carta %s venceu a carta %s\n", 
                area1, area2, carta1, carta2);
        } else if (area1 < area2) {
            printf("A área da carta 1 é %f e a área da carta 2 é %f, então a carta %s venceu a carta %s\n", 
                area1, area2, carta2, carta1);
        } else {
            printf("A área da carta 1 é %F e a área da carta 2 é %f, então a carta %s empatou com a carta %s\n", 
                area1, area2, carta1, carta2);
        break;
        case 4:
        if (PIB1 > PIB2){
            printf("O PIB da carta 1 é %f e o PIB da carta 2 é %f, então a carta %s venceu a carta %s\n", 
                PIB1, PIB2, carta1, carta2);
        } else if (PIB1 < PIB2){
            printf("O PIB da carta 1 é %f e o PIB da carta 2 é %f, então a carta %s venceu a carta %s\n", 
                PIB1, PIB2, carta2, carta1);
        } else {
            printf("O PIB da carta 1 é %f e o PIB da carta 2 é %f, então a carta %s empatou com a carta %s\n", 
                PIB1, PIB2, carta1, carta2);
        break;
        case 5:
        if (pontosturisticos1 > pontosturisticos2) {
            printf("O número de pontos turísticos da carta 1 é %d e o número de pontos turísticos da carta 2 é %d, então a carta %s, venceu a carta %s\n", 
                pontosturisticos1, pontosturisticos2, carta1, carta2);
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("O número de pontos turísticos da carta 1 é %d e o número de pontos turísticos da carta 2 é %d, então a carta %s venceu a carta %s\n", 
                pontosturisticos1, pontosturisticos2, carta2, carta1);
        } else {
            printf("O número de pontos turísticos da carta 1 é %d e o número de pontos turísticos da carta 2 é %d, então a carta %s empatou com a carta %s\n", 
                pontosturisticos1, pontosturisticos2, carta1, carta2);
        break;
        case 6:
        if (densidadepopulacional < densidadepopulacional2) {
            printf("A densidade populacional da carta 1 é %f e a densidade populacional da carta 2 é %f, então a carta %s venceu a carta %s\n", 
                densidadepopulacional1, densidadepopulacional2, carta1, carta2);
        } else if (densidadepopulacional1 > densidadepopulacional2) {
            printf("A densidade populacional da carta 1 é %f e a densidade populacional da carta 2 é %f, então a carta %s venceu a carta %s\n", 
                densidadepopulacional1, densidadepopulacional2, carta2, carta1);
        } else {
            printf("A densidade populacional da carta 1 é %f e a densidade populacional da carta 2 é %f, então a carta %s empatou com a carta %s\n", 
                densidadepopulacional1, densidadepopulacional2, carta1, carta2);
        break;
        default: 
        printf("erro");    
        }
        }        
        }        
        }
        }
    }


    return 0;

    
    

}
