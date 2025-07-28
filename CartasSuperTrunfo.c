#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Cauê Serra

int main() {
    char carta[02];
    char estado[8];
    char codigoDaCarta[03];
    char NomeDaCidade[20];
    int população;
    float area;
    float pib;
    int PontosTuristicos;
    int km²;

    printf("Digite a carta (1 ou 2): \n");
    scanf("%s", carta);

    printf("Digite a letra inicial do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta de 1 a 4: \n");
    scanf("%s", estado, codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeDaCidade);  

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área: \n");
    scanf("%f", &area, &km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Digite a carta (1 ou 2): \n");
    scanf("%s", carta);

    printf("Digite a letra inicial do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta de 1 a 4: \n");
    scanf("%s", estado, codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeDaCidade);  

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área: \n");
    scanf("%f", &area, &km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Carta %s:\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", estado, codigoDaCarta);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", area, &km²);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", PontosTuristicos);

    printf("Carta %s:\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", estado, codigoDaCarta);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", area, &km²);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", PontosTuristicos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
