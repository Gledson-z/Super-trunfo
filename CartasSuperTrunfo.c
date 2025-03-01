#include <stdio.h>

int main() {
   
    // Declaração das variaveis carta 01
    char Estado01;
    char CodigoDaCarta01[20];
    char NomeDaCidade01[40];
    int  PontosTuristicos01, Populacao01;
    float AreaEmKm01, PIB01;

    // Declaração das variaveis carta 02
    char Estado02;
    char CodigoDaCarta02[20];
    char NomeDaCidade02[40];
    int PontosTuristicos02, Populacao02;
    float AreaEmKm02, PIB02;

    //Entrada das informações da primeira carta forneciada pelo usuario
    printf("Digite uma letra de 'A' a 'H' para representar um estado: ");
    scanf("%c", &Estado01);

    printf("Digite a letra que representa o estado seguida de um número de 01 a 04: ");
    scanf("%s", CodigoDaCarta01);

    printf("Forneça um nome de uma cidade de um estado: ");
    scanf("%s", NomeDaCidade01);

    printf("Forneça o número de habitantes da cidade em questão: ");
    scanf("%d", &Populacao01);

    printf("Forneça a área da cidade em Km²: ");
    scanf("%f", &AreaEmKm01);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &PIB01);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &PontosTuristicos01);

    //Saida das informações da primeira carta fornecidas pelo usuario
    printf("Carta 01\n");
    printf("Estado: %c\n", Estado01);
    printf("Código: %s\n", CodigoDaCarta01);
    printf("Nome da Cidade: %s\n", NomeDaCidade01);
    printf("População: %d\n", Populacao01);
    printf("Área Total: %.2f Km²\n", AreaEmKm01);
    printf("PIB: %.2f Bilhões de reais\n", PIB01);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos01);

    //Entrada das informações da segunda carta forneciada pelo usuario
    printf("Digite uma letra de 'A' a 'H' para representar um estado: ");
    scanf("%c", &Estado02);

    printf("Digite a letra que representa o estado seguida de um número de 01 a 04: ");
    scanf("%s", CodigoDaCarta02);

    printf("Forneça um nome de uma cidade de um estado: ");
    scanf("%s", NomeDaCidade02);

    printf("Forneça o número de habitantes da cidade em questão: ");
    scanf("%d", &Populacao02);

    printf("Forneça a área da cidade em Km²: ");
    scanf("%f", &AreaEmKm02);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &PIB02);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &PontosTuristicos02);

    //Saida das informações da segunda carta fornecidas pelo usuario
    printf("Carta 02\n");
    printf("Estado: %c\n", Estado02);
    printf("Código: %s\n", CodigoDaCarta02);
    printf("Nome da Cidade: %s\n", NomeDaCidade02);
    printf("População: %d\n", Populacao02);
    printf("Área Total: %.2f Km²\n", AreaEmKm02);
    printf("PIB: %.2f Bilhões de reais\n", PIB02);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos02);

    return 0;
}
