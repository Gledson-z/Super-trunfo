#include <stdio.h>

int main() {

    // Declaração das variaveis - CARTA 01
    char estado01;
    char codigoDaCarta01[20];
    char nomeDaCidade01[40];
    int pontosTuristicos01, populacao01;
    float areaEmKm2_01, pib01, densidadepopulacional01, pibpercapita01;

    // Declaração das variaveis - CARTA 02
    char estado02;
    char codigoDaCarta02[20];
    char nomeDaCidade02[40];
    int pontosTuristicos02, populacao02;
    float areaEmKm2_02, pib02, densidadepopulacional02, pibpercapita02;

    //Entrada das informações forneciada pelo usuário - CARTA 01
    printf("Digite uma letra de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado01);
    printf("Digite a letra que representa o estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoDaCarta01);
    printf("Forneça um nome de uma cidade de um estado: ");
    scanf("%s", nomeDaCidade01);
    printf("Forneça o número de habitantes da cidade em questão: ");
    scanf("%d", &populacao01);
    printf("Forneça a área da cidade em Km²: ");
    scanf("%f", &areaEmKm2_01);
    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib01);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos01);

    //Calculo da Densidade Populacional e do PIB per Capita - CARTA 01
    densidadepopulacional01 = (float)populacao01 / areaEmKm2_01;
    pibpercapita01 = (float)pib01 / populacao01;

    //Saida das informações fornecidas pelo usuário - CARTA 01
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigoDaCarta01);
    printf("Nome da Cidade: %s\n", nomeDaCidade01);
    printf("População: %d\n", populacao01);
    printf("Área Total: %.2f Km²\n", areaEmKm2_01);
    printf("PIB: %.2f Bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("PIB per Capita: %.2f reais\n", pibpercapita01);

    //Entrada das informações forneciada pelo usuário - CARTA 02
    printf("\nDigite uma letra de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado02);
    printf("Digite a letra que representa o estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoDaCarta02);
    printf("Forneça um nome de uma cidade de um estado: ");
    scanf("%s", nomeDaCidade02);
    printf("Forneça o número de habitantes da cidade em questão: ");
    scanf("%d", &populacao02);
    printf("Forneça a área da cidade em Km²: ");
    scanf("%f", &areaEmKm2_02);
    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib02);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos02);

    //Calculo da Densidade Populacional e do PIB per Capita - CARTA 02
    densidadepopulacional02 = (float)populacao02 / areaEmKm2_02;
    pibpercapita02 = (float)pib02 / populacao02;

    //Saida das informações fornecidas pelo usuário - CARTA 02
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigoDaCarta02);
    printf("Nome da Cidade: %s\n", nomeDaCidade02);
    printf("População: %d\n", populacao02);
    printf("Área Total: %.2f Km²\n", areaEmKm2_02);
    printf("PIB: %.2f Bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("PIB per Capita: %.2f reais\n", pibpercapita02);

    return 0;
}
