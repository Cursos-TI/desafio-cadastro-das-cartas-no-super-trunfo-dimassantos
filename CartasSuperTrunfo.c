#include <stdio.h>

#define MAX_CIDADE_TAM 20
#define MAX_COD_TAM 4
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Variáveis que representam os atributos das cartas

    char estadoCarta1, estadoCarta2;
    char codigoCarta1[MAX_COD_TAM], codigoCarta2[MAX_COD_TAM];
    char nomeCidadeCarta1[MAX_CIDADE_TAM], nomeCidadeCarta2[MAX_CIDADE_TAM];
    int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    int numeroPontosTuristicosCarta1, numeroPontosTuristicosCarta2;

    //Descrição

    printf("** SUPER TRUNFO - Cadastro de Cartas **\n\n");

    //Início do cadastro da carta 01

    printf("Cadastre os dados da Carta ( 1 )\n");
    printf("--------------------------------\n\n");

    printf("\n\nEstado: ");
    scanf(" %c", &estadoCarta1);

    printf("\nCodigo : ");
    scanf(" %3[^\n]", codigoCarta1);

    printf("\nNome da Cidade : ");
    scanf(" %19[^\n]", nomeCidadeCarta1);

    printf("\nPopulação: ");
    scanf("%d", &populacaoCarta1);

    printf("\nÁrea: ");
    scanf("%f", &areaCarta1);

    printf("\nPIB: ");
    scanf("%f", &pibCarta1);

    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicosCarta1);

    //Início do cadastro da carta 02

    printf("\n\nCadastre os dados da Carta ( 2 )\n");
    printf("--------------------------------");

    printf("\n\nEstado: ");
    scanf(" %c", &estadoCarta2);

    printf("\nCodigo : ");
    scanf(" %3[^\n]", codigoCarta2);

    printf("\nNome da Cidade : ");
    scanf(" %19[^\n]", nomeCidadeCarta2);

    printf("\nPopulação: ");
    scanf("%d", &populacaoCarta2);

    printf("\nÁrea: ");
    scanf("%f", &areaCarta2);

    printf("\nPIB: ");
    scanf("%f", &pibCarta2);

    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicosCarta2);

    //Início da exibição das cartas.

    //Exibição da carta 1

    printf("\n\nCarta 1\n");
    printf("--------------------------------\n\n");

    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Area: %.2f\n", areaCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCarta1);

    //Exibição da carta 2

    printf("\n\nCarta 2\n");
    printf("--------------------------------\n\n");

    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Area: %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n\n", numeroPontosTuristicosCarta2);

    return 0;
}
