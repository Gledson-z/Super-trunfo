#include <stdio.h>

void processCityData(
    char pais[21],
    char estado[4],
    char codigoDaCarta[5],
    char nomeDaCidade[26],
    unsigned long int populacao,
    float areaEmKm2,
    float pib,
    float densidadepopulacional,
    float pibpercapita,
    int pontosTuristicos)
{
    // Saída das informações fornecidas pelo usuário
    printf("\nEstado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %lu Habitantes\n", populacao);
    printf("Área Total: %.2f Km²\n", areaEmKm2);
    printf("PIB: %.2f Milhões de reais\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
}

void readCityData(
    char pais[21],
    char estado[4],
    char codigoDaCarta[5],
    char nomeDaCidade[26],
    unsigned long int *populacao,
    float *areaEmKm2,
    float *pib,
    int *pontosTuristicos)
{
    // Entrada das informações fornecidas pelo usuário
    printf("Escolha um país: ");
    scanf(" %20[^\n]", pais);
    printf("Sigla de um Estado desse país (ex: RJ): ");
    scanf("%3s", estado);
    printf("Nome de uma Cidade desse Estado: ");
    scanf(" %25[^\n]", nomeDaCidade);
    printf("Sua População: ");
    scanf("%lu", populacao);
    printf("Sua Área Total (Km²): ");
    scanf("%f", areaEmKm2);
    printf("O PIB da cidade: ");
    scanf("%f", pib);
    printf("É o Número de Pontos Turísticos: ");
    scanf("%d", pontosTuristicos);
}

int main()
{
    // Declaração das variáveis - CARTA 01
    char pais01[21];
    char estado01[4];
    char codigoDaCarta01[5] = "A01";
    char nomeDaCidade01[26];
    unsigned long int populacao01;
    float areaEmKm201, pib01, densidadepopulacional01, pibpercapita01;
    int pontosTuristicos01;

    // Declaração das variáveis - CARTA 02
    char pais02[21];
    char estado02[4];
    char codigoDaCarta02[5] = "B02";
    char nomeDaCidade02[26];
    unsigned long int populacao02;
    float areaEmKm202, pib02, densidadepopulacional02, pibpercapita02;
    int pontosTuristicos02;

    // Leitura dos dados da CARTA 1
    printf("Informe os dados da CARTA 1:\n");
    readCityData(pais01, estado01, codigoDaCarta01, nomeDaCidade01, &populacao01, &areaEmKm201, &pib01, &pontosTuristicos01);

    // Cálculo da Densidade Populacional e do PIB per Capita CARTA 1
    densidadepopulacional01 = (float)populacao01 / areaEmKm201;
    pibpercapita01 = pib01 / populacao01;

    // Processo dos dados da CARTA 1
    processCityData(pais01, estado01, codigoDaCarta01, nomeDaCidade01, populacao01,
                    areaEmKm201, pib01, densidadepopulacional01,
                    pibpercapita01, pontosTuristicos01);

    // Leitura dos dados da CARTA 2
    printf("\nInforme os dados da CARTA 2:\n");
    readCityData(pais02, estado02, codigoDaCarta02, nomeDaCidade02, &populacao02, &areaEmKm202, &pib02, &pontosTuristicos02);

    // Cálculo da Densidade Populacional e do PIB per Capita CARTA 2
    densidadepopulacional02 = (float)populacao02 / areaEmKm202;
    pibpercapita02 = pib02 / populacao02;

    // Processo dos dados da CARTA 2
    processCityData(pais02, estado02, codigoDaCarta02, nomeDaCidade02, populacao02,
                    areaEmKm202, pib02, densidadepopulacional02,
                    pibpercapita02, pontosTuristicos02);

    int opcao;
    printf("\nCOMPARAÇÃO ENTRE AS CARTAS\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Densidade Populacional\n");
    printf("4. Área Total\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Sair\n");
    printf("Atributo: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // Comparação - População
        printf("%s vs %s", pais01, pais02);
        printf("\nAtributo: População\n");
        printf("\nPrimeira Carta: %lu Habitantes \n", populacao01);
        printf("Segunda Carta: %lu Habitantes \n", populacao02);

        if (populacao01 > populacao02)
        {
            printf("\nCarta 1 Venceu!");
        }
        else if (populacao01 < populacao02)
        {
            printf("\nCarta 2 Venceu!");
        }
        else
        {
            printf("\nEmpate!");
        }
        break;

    case 2:
        // Comparação - PIB
        printf("%s vs %s", pais01, pais02);
        printf("\nAtributo: PIB\n");
        printf("\nPrimeira Carta: %.2f Bilhões de reais \n", pib01);
        printf("Segunda Carta: %.2f Bilhões de reais \n", pib02);

        if (pib01 > pib02)
        {
            printf("\nCarta 1 Venceu!");
        }
        else if (pib01 < pib02)
        {
            printf("\nCarta 2 Venceu!");
        }
        else
        {
            printf("\nEmpate!");
        }
        break;

    case 3:
        // Comparação - Densidade Populacional
        printf("%s vs %s", pais01, pais02);
        printf("\nAtributo: Densidade Populacional\n");
        printf("\nPrimeira Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional01);
        printf("Segunda Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional02);

        if (densidadepopulacional01 < densidadepopulacional02)
        {
            printf("\nCarta 1 Venceu!");
        }
        else if (densidadepopulacional01 > densidadepopulacional02)
        {
            printf("\nCarta 2 Venceu!");
        }
        else
        {
            printf("\nEmpate!");
        }
        break;

        case 4:
        // Comparação - Área Total
        printf("%s vs %s", pais01, pais02);
        printf("\nAtributo: Área Total\n");
        printf("\nPrimeira Carta: %.2f Km²\n", areaEmKm201);
        printf("Segunda Carta: %.2f Km²\n", areaEmKm202);

        if (areaEmKm201 > areaEmKm202)
        {
            printf("\nCarta 1 Venceu!");
        }
        else if (areaEmKm201 < areaEmKm202)
        {
            printf("\nCarta 2 Venceu!");
        }
        else
        {
            printf("\nEmpate!");
        }
        break;

        case 5:
        // Comparação - Número de Pontos Turísticos
        printf("%s vs %s", pais01, pais02);
        printf("\nAtributo: Número de Pontos Turísticos\n");
        printf("\nPrimeira Carta: Número de Pontos Turísticos %d\n", pontosTuristicos01);
        printf("Segunda Carta: Número de Pontos Turísticos %d\n", pontosTuristicos02);

        if (pontosTuristicos01 > pontosTuristicos02)
        {
            printf("\nCarta 1 Venceu!");
        }
        else if (pontosTuristicos01 < pontosTuristicos02)
        {
            printf("\nCarta 2 Venceu!");
        }
        else
        {
            printf("\nEmpate!");
        }
        break;

    case 6:
        printf("Saindo...\n");
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }

    return 0;
}
