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

    // Comparação entre as cartas - Atributo 01
    int atributo01, atributo02, atributo03, resultado01, resultado02, resultado03;
    printf("\nCOMPARAÇÃO ENTRE AS CARTAS\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Densidade Populacional\n");
    printf("4. Área Total\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Sair\n");

    printf("Atributo a comparar: ");
    scanf("%d", &atributo01);

    switch (atributo01)
    {
    case 1:
        // Comparação - População
        printf("%s vs %s", pais01, pais02);
        printf("\nVocê escolheu o atributo: População!\n");
        printf("\nPrimeira Carta: %lu Habitantes \n", populacao01);
        printf("Segunda Carta: %lu Habitantes \n", populacao02);

        resultado01 = populacao01 > populacao02 ? 1 : 0;
        break;

    case 2:
        // Comparação - PIB
        printf("%s vs %s", pais01, pais02);
        printf("\nVocê escolheu o atributo: PIB\n");
        printf("\nPrimeira Carta: %.2f Bilhões de reais \n", pib01);
        printf("Segunda Carta: %.2f Bilhões de reais \n", pib02);

        resultado01 = pib01 > pib02 ? 1 : 0;
        break;

    case 3:
        // Comparação - Densidade Populacional
        printf("%s vs %s", pais01, pais02);
        printf("\nVocê escolheu o atributo: Densidade Populacional\n");
        printf("\nPrimeira Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional01);
        printf("Segunda Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional02);

        resultado01 = densidadepopulacional01 < densidadepopulacional02 ? 1 : 0;
        break;

    case 4:
        // Comparação - Área Total
        printf("%s vs %s", pais01, pais02);
        printf("\nVocê escolheu o atributo: Área Total\n");
        printf("\nPrimeira Carta: %.2f Km²\n", areaEmKm201);
        printf("Segunda Carta: %.2f Km²\n", areaEmKm202);

        resultado01 = areaEmKm201 > areaEmKm202 ? 1 : 0;
        break;

    case 5:
        // Comparação - Número de Pontos Turísticos
        printf("%s vs %s", pais01, pais02);
        printf("\nVocê escolheu o atributo: Número de Pontos Turísticos\n");
        printf("\nPrimeira Carta: Número de Pontos Turísticos %d\n", pontosTuristicos01);
        printf("Segunda Carta: Número de Pontos Turísticos %d\n", pontosTuristicos02);

        resultado01 = pontosTuristicos01 > pontosTuristicos02 ? 1 : 0;
        break;

    case 6:
        printf("Saindo...\n");
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }

    // Comparação entre as cartas - Atributo 02
    printf("\nEscolha o segundo atributo:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Densidade Populacional\n");
    printf("4. Área Total\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Sair\n");

    printf("Atributo a comparar: ");
    scanf("%d", &atributo02);

    if (atributo01 == atributo02)
    {
        printf("Escolha um atributo diferente do anterior.\n");
    }
    else
    {
        switch (atributo02)
        {
        case 1:
            // Comparação - População
            printf("%s vs %s", pais01, pais02);
            printf("\nVocê escolheu o atributo: População!\n");
            printf("\nPrimeira Carta: %lu Habitantes \n", populacao01);
            printf("Segunda Carta: %lu Habitantes \n", populacao02);

            resultado02 = populacao01 > populacao02 ? 1 : 0;
            break;

        case 2:
            // Comparação - PIB
            printf("%s vs %s", pais01, pais02);
            printf("\nVocê escolheu o atributo: PIB\n");
            printf("\nPrimeira Carta: %.2f Bilhões de reais \n", pib01);
            printf("Segunda Carta: %.2f Bilhões de reais \n", pib02);

            resultado02 = pib01 > pib02 ? 1 : 0;
            break;

        case 3:
            // Comparação - Densidade Populacional
            printf("%s vs %s", pais01, pais02);
            printf("\nVocê escolheu o atributo: Densidade Populacional\n");
            printf("\nPrimeira Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional01);
            printf("Segunda Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional02);

            resultado02 = densidadepopulacional01 < densidadepopulacional02 ? 1 : 0;
            break;

        case 4:
            // Comparação - Área Total
            printf("%s vs %s", pais01, pais02);
            printf("\nVocê escolheu o atributo: Área Total\n");
            printf("\nPrimeira Carta: %.2f Km²\n", areaEmKm201);
            printf("Segunda Carta: %.2f Km²\n", areaEmKm202);

            resultado02 = areaEmKm201 > areaEmKm202 ? 1 : 0;
            break;

        case 5:
            // Comparação - Número de Pontos Turísticos
            printf("%s vs %s", pais01, pais02);
            printf("\nVocê escolheu o atributo: Número de Pontos Turísticos\n");
            printf("\nPrimeira Carta: Número de Pontos Turísticos %d\n", pontosTuristicos01);
            printf("Segunda Carta: Número de Pontos Turísticos %d\n", pontosTuristicos02);

            resultado02 = pontosTuristicos01 > pontosTuristicos02 ? 1 : 0;
            break;

        case 6:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
        }

        // Comparação entre as cartas - Atributo 03
        printf("\nEscolha o terceiro atributo:\n");
        printf("1. População\n");
        printf("2. PIB\n");
        printf("3. Densidade Populacional\n");
        printf("4. Área Total\n");
        printf("5. Número de Pontos Turísticos\n");
        printf("6. Sair\n");

        printf("Atributo a comparar: ");
        scanf("%d", &atributo03);

        if (atributo03 == atributo01 || atributo03 == atributo02)
        {
            printf("Escolha um atributo diferente do anterior.\n");
        }
        else
        {
            switch (atributo03)
            {
            case 1:
                // Comparação - População
                printf("%s vs %s", pais01, pais02);
                printf("\nVocê escolheu o atributo: População!\n");
                printf("\nPrimeira Carta: %lu Habitantes \n", populacao01);
                printf("Segunda Carta: %lu Habitantes \n", populacao02);

                resultado03 = populacao01 > populacao02 ? 1 : 0;
                break;

            case 2:
                // Comparação - PIB
                printf("%s vs %s", pais01, pais02);
                printf("\nVocê escolheu o atributo: PIB\n");
                printf("\nPrimeira Carta: %.2f Bilhões de reais \n", pib01);
                printf("Segunda Carta: %.2f Bilhões de reais \n", pib02);

                resultado03 = pib01 > pib02 ? 1 : 0;
                break;

            case 3:
                // Comparação - Densidade Populacional
                printf("%s vs %s", pais01, pais02);
                printf("\nVocê escolheu o atributo: Densidade Populacional\n");
                printf("\nPrimeira Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional01);
                printf("Segunda Carta: Densidade Populacional %.2f hab./km²\n", densidadepopulacional02);

                resultado03 = densidadepopulacional01 < densidadepopulacional02 ? 1 : 0;
                break;

            case 4:
                // Comparação - Área Total
                printf("%s vs %s", pais01, pais02);
                printf("\nVocê escolheu o atributo: Área Total\n");
                printf("\nPrimeira Carta: %.2f Km²\n", areaEmKm201);
                printf("Segunda Carta: %.2f Km²\n", areaEmKm202);

                resultado03 = areaEmKm201 > areaEmKm202 ? 1 : 0;
                break;

            case 5:
                // Comparação - Número de Pontos Turísticos
                printf("%s vs %s", pais01, pais02);
                printf("\nVocê escolheu o atributo: Número de Pontos Turísticos\n");
                printf("\nPrimeira Carta: Número de Pontos Turísticos %d\n", pontosTuristicos01);
                printf("Segunda Carta: Número de Pontos Turísticos %d\n", pontosTuristicos02);

                resultado03 = pontosTuristicos01 > pontosTuristicos02 ? 1 : 0;
                break;

            case 6:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
            }
            
            // Resultado da comparação
            if ((resultado01 + resultado02 + resultado03) > 1)
            {
                printf("Parabéns, CARTA 1 venceu!\n");
            }
            else if ((resultado01 + resultado02 + resultado03) == 1)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("Parabéns, CARTA 2 venceu!\n");
            }
        }
    }

    return 0;
}