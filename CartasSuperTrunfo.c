#include <stdio.h>

int main() {

//variáveis da carta 1;
    char estado1[20];
    char codigo1[20];  // Ex: "A01" (+1 para o '\0');
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;


    // Variáveis da Carta 2;
    char estado2[20];
    char codigo2[20];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    //(Leitura, Cadastro da Carta 1 ===\n" );
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado de A-H: \n");
    scanf("%s", estado1);
    
    printf("Digite o Código da Carta 1, Ex: A01: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade 1: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade em (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB dessa cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //(leitura, cadastro da carta 2)
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado de A-H: \n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta 2, Ex: B02: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade 2: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

     //calculo de densidade e pib per capito da carta 1:
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    //calculo de densidade e pib per capito da carta 2:
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo os dados;
    printf("\n===== CARTA 1 =====\n");
    printf("Estado1: %s\n", estado1);
    printf("Código1: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.3f\n", densidadePopulacional1);
    printf("Pib Per Capita: %.3f\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado2: %s\n", estado2);
    printf("Código2: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.3f\n", densidadePopulacional2);
    printf("Pib Per Capita: %.3f\n", pibPerCapita2);

    return 0;
}
