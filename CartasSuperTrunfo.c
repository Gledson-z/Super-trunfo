#include <stdio.h>

void processCityData(char estado[3], char codigoDaCarta[4], char nomeDaCidade[25], 
                     unsigned long int *populacao, float *areaEmKm2, float *pib, 
                     float *densidadepopulacional, float *pibpercapita, int *pontosTuristicos) {

    // Entrada das informações fornecidas pelo usuário
    printf("\nDigite um nome de uma cidade: ");
    scanf("%s", nomeDaCidade);
    printf("Coloque o número de habitantes da cidade em questão: ");
    scanf("%lu", populacao);
    printf("Forneça a área da cidade em Km²: ");
    scanf("%f", areaEmKm2);
    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", pib);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", pontosTuristicos);

    // Cálculo da Densidade Populacional e do PIB per Capita
    *densidadepopulacional = (float)(*populacao) / (*areaEmKm2);
    *pibpercapita = (float)(*pib) / (*populacao);

    // Saída das informações fornecidas pelo usuário
    printf("\nCARTA\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %lu\n", *populacao);
    printf("Área Total: %.2f Km²\n", *areaEmKm2);
    printf("PIB: %.2f Bilhões de reais\n", *pib);
    printf("Número de Pontos Turísticos: %d\n", *pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", *densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", *pibpercapita);
}

int main() {
    // Declaração das variáveis - CARTA 01
    char estado01[3] = "A";
    char codigoDaCarta01[4] = "A01";
    char nomeDaCidade01[25];
    unsigned long int populacao01;
    float areaEmKm201, pib01, densidadepopulacional01, pibpercapita01;
    int pontosTuristicos01;

    // Declaração das variáveis - CARTA 02
    char estado02[3] = "B";
    char codigoDaCarta02[4] = "B02";
    char nomeDaCidade02[25];
    unsigned long int populacao02;
    float areaEmKm202, pib02, densidadepopulacional02, pibpercapita02;
    int pontosTuristicos02;

    // Processo dos dados da CARTA 1
    processCityData(estado01, codigoDaCarta01, nomeDaCidade01, &populacao01, 
                    &areaEmKm201, &pib01, &densidadepopulacional01, 
                    &pibpercapita01, &pontosTuristicos01);

    // Processo dos dados da CARTA 2
    processCityData(estado02, codigoDaCarta02, nomeDaCidade02, &populacao02, 
                    &areaEmKm202, &pib02, &densidadepopulacional02, 
                    &pibpercapita02, &pontosTuristicos02);

    //Comparação entre as cartas
    //Comparação - População
    printf("\nCOMPARAÇÃO ENTRE AS CARTAS\n");
    printf("Atributo: População\n");
    printf("\nPrimeira Carta: %s  %lu Habitantes \n", nomeDaCidade01, populacao01);
    printf("Segunda Carta: %s  %lu Habitantes \n", nomeDaCidade02, populacao02);

    if (populacao01 > populacao02) {
        printf("\nPrimeira Carta %s Venceu!.\n", nomeDaCidade01);
    } else if (populacao01 < populacao02) {
        printf("\nSegunda Carta: %s Venceu!.\n", nomeDaCidade02);
    } else {
        printf("\nAs cidades %s e %s possuem a mesma quantidade de habitantes.\n", nomeDaCidade01, nomeDaCidade02);
    }
    
    //Comparação - PIB
    printf("\nAtributo: PIB\n");
    printf("\nPrimeira Carta: %s  %.2f Bilhões de reais \n", nomeDaCidade01, pib01);
    printf("Segunda Carta: %s  %.2f Bilhões de reais \n", nomeDaCidade02, pib02);

    if (pib01 > pib02) {
        printf("\nPrimeira Carta: %s Venceu!.\n", nomeDaCidade01);
    } else if (pib01 < pib02) {
        printf("\nSegunda Carta: %s Venceu!.\n", nomeDaCidade02);
    } else {
        printf("\nAs cidades %s e %s possuem o mesmo PIB.\n", nomeDaCidade01, nomeDaCidade02);
    }

    //Comparação - Densidade Populacional
    printf("\nAtributo: Densidade Populacional\n");
    printf("\nPrimeira Carta: %s Densidade Populacional %.2f hab./km²\n", nomeDaCidade01, densidadepopulacional01);
    printf("Segunda Carta: %s Densidade Populacional %.2f hab./km²\n", nomeDaCidade02, densidadepopulacional02);

    if (densidadepopulacional01 < densidadepopulacional02) {
        printf("\nPrimeira Carta %s Venceu!.\n", nomeDaCidade01);
    } else if (densidadepopulacional01 > densidadepopulacional02) {
        printf("\nSegunda Carta: %s Venceu!.\n", nomeDaCidade02);
    } else {
        printf("\nAs cidades %s e %s possuem a mesma Densidade Populacional\n", nomeDaCidade01, nomeDaCidade02);
    }

    return 0;
}
