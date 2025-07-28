#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Cauê Serra

int main() {
    char carta[2];
    char estado[8];
    char codigoDaCarta[3];
    char NomeDaCidade[20];
    int população;
    float area;
    float pib;
    int PontosTuristicos;

    printf("Digite a carta: \n");
    scanf("%s", carta);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeDaCidade);  

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos);


    printf("carta1: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", PontosTuristicos);

    printf("carta2: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", area);
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
