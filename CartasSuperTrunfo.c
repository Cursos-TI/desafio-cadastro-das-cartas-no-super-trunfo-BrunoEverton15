#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_da_cidade, populacao, numero_pontos_turisticos;
    float pib, area;
    char nome[5000];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
       
        printf("Informe nome da Cidade: \n");
        scanf("%s", &nome);

        printf("Codigo da Cidade: \n");
        scanf("%d", &codigo_da_cidade);

        printf("Numero de Pontos Turisticos: \n");
         scanf("%d", &numero_pontos_turisticos);

        printf("Quantidade de Habitantes: \n");
        scanf("%d", &populacao);

        printf("Informe a Expansao da Area: \n");
        scanf("%f", &area);

        printf("Me Informe o Pib: \n");
        scanf("%f", &pib);

        printf("Nome da Cidade: %s - Codigo da Cidade: %d\n", nome, codigo_da_cidade);
        printf("Pontos Turisticos: %d - Habitantes: %d\n", numero_pontos_turisticos, populacao);
        printf("Expansao da Area: %f - Numero Pib: %f", area, pib);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}