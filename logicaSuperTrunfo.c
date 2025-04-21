#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//supertrunfologica
int main()
{
    double bilhoes = 1000000000;


    //printf("%lf", A);
    //system("chcp 1252 > nul");
    setlocale(LC_ALL, "Portuguese");

    //VARIAVEIS
    char estado[20], estado2[20];
    //strcpy(estado, "Algo"); "%s"
    char codigoCarta[20], codigoCarta2[20];

    char nomeCidade[30], nomeCidade2[30];

    int populacao, populacao2;

    int numeroPontosTuristicos, numeroPontosTuristicos2;

    //populacao = 20; "%d"
    float areaKm, areaKm2;
    float PIB, PIB2;

    int opcao, opcao2;

    float densidadePopulacional, densidadePopulacional2;
    double pibPerCapita, pibPerCapita2;
    float superPoder, superPoder2;
    int resultado, resultado2;
    //areaKm = 2.20;"%.2f"

    //entrada carta 1
    printf("CARTA 1: \n");
    printf("Digite o estado: ");
    fgets(estado, 20, stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o código da carta: ");
    fgets(codigoCarta, 20, stdin);
    codigoCarta[strcspn(codigoCarta, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 20, stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área KM²: ");
    scanf("%f", &areaKm);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos);

    getchar();

    //entrada carta 2;
    printf("\nCARTA 2: \n");
    printf("Digite o estado: ");
    fgets(estado2, 20, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o código da carta: ");
    fgets(codigoCarta2, 20, stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 20, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área KM²: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);

    densidadePopulacional = populacao / areaKm;
    densidadePopulacional2 = populacao2 / areaKm2;

    double pibBilhoes = PIB * bilhoes;
    double pibBilhoes2 = PIB2 * bilhoes;

    pibPerCapita = pibBilhoes / populacao;
    pibPerCapita2 = pibBilhoes2 / populacao2;

    printf("\nEscolha um dos atributos de comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Numero de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\nEscolha o segundo atributo de comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Numero de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao2);

    printf("\nCidade da carta 1: %s\n", nomeCidade);
    printf("Cidade da carta 2: %s\n", nomeCidade2);


    switch(opcao){
        case 1:
            printf("Atributo da comparação: População\n");
            printf("Valores de População\n");
            printf("Carta 1: %d\n", populacao);
            printf("Carta 2: %d\n", populacao2);
            resultado = (populacao > populacao2)? 1 : 0;
            break;
        case 2:
            printf("Atributo da comparação: Área\n");
            printf("Valores de Área\n");
            printf("Carta 1: %f\n", areaKm);
            printf("Carta 2: %f\n", areaKm2);
            resultado = (areaKm > areaKm2)? 1 : 0;
            break;
        case 3:
            printf("Atributo da comparação: Pib\n");
            printf("Valores de Pib\n");
            printf("Carta 1: %f\n", PIB);
            printf("Carta 2: %f\n", PIB2);
            resultado = (PIB > PIB2)? 1 : 0;
            break;
        case 4:
            printf("Atributo da comparação: Numero de pontos turísticos\n");
            printf("Valores de Numero de pontos turísticos\n");
            printf("Carta 1: %d\n", numeroPontosTuristicos);
            printf("Carta 2: %d\n", numeroPontosTuristicos2);
            resultado = (numeroPontosTuristicos > numeroPontosTuristicos2)? 1 : 0;
            break;
        case 5:
            printf("Atributo da comparação: Densidade Demográfica\n");
            printf("Valores de Densidade Demográfica\n");
            printf("Carta 1: %f\n", densidadePopulacional);
            printf("Carta 2: %f\n", densidadePopulacional2);
            resultado = (densidadePopulacional < densidadePopulacional2)? 1 : 0;
            break;
        default:
            printf("digite um valor válido\n");
        }
        printf("\n");
    
        if(opcao == opcao2){
            printf("Escolha atributos diferentes\n");
        }else{
            switch(opcao2){
        case 1:
            printf("Atributo da comparação: População\n");
            printf("Valores de População\n");
            printf("Carta 1: %d\n", populacao);
            printf("Carta 2: %d\n", populacao2);
            resultado2 = (populacao2 > populacao)? 1 : 0;
            break;
        case 2:
            printf("Atributo da comparação: Área\n");
            printf("Valores de Área\n");
            printf("Carta 1: %f\n", areaKm);
            printf("Carta 2: %f\n", areaKm2);
            resultado2 = (areaKm2 > areaKm)? 1 : 0;
            break;
        case 3:
            printf("Atributo da comparação: Pib\n");
            printf("Valores de Pib\n");
            printf("Carta 1: %f\n", PIB);
            printf("Carta 2: %f\n", PIB2);
            resultado2 = (PIB2 > PIB)? 1 : 0;
            break;
        case 4:
            printf("Atributo da comparação: Numero de pontos turísticos\n");
            printf("Valores de Numero de pontos turísticos\n");
            printf("Carta 1: %d\n", numeroPontosTuristicos);
            printf("Carta 2: %d\n", numeroPontosTuristicos2);
            resultado2 = (numeroPontosTuristicos2 > numeroPontosTuristicos)? 1 : 0;
            break;
        case 5:
            printf("Atributo da comparação: Densidade Demográfica\n");
            printf("Valores de Densidade Demográfica\n");
            printf("Carta 1: %f\n", densidadePopulacional);
            printf("Carta 2: %f\n", densidadePopulacional2);
            resultado2 = (densidadePopulacional2 < densidadePopulacional)? 1 : 0;
            break;
        default:
            printf("digite um valor válido\n");
        }
        if(resultado > resultado2){
            printf("\nCarta 1 venceu!!");
        }else if(resultado < resultado2){
            printf("\nCarta 2 venceu!");
        }else{
            printf("\nempate!!");
        }
        }
    
    return 0;
}
