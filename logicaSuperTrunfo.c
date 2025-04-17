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

    float densidadePopulacional, densidadePopulacional2;
    double pibPerCapita, pibPerCapita2;
    float superPoder, superPoder2;
    int resultado;
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

    //pib per capita
    printf("\nCarta 1 - %s: %.2lf\n", nomeCidade, pibPerCapita);
    printf("Carta 2 - %s: %.2lf\n", nomeCidade2, pibPerCapita2);
    if(pibPerCapita > pibPerCapita2){
        printf("Resultado: Carta 1(%s) venceu!", nomeCidade);
    }else{
        printf("Resultado: Carta 2(%s) venceu!", nomeCidade2);
    }
    
    return 0;
}
