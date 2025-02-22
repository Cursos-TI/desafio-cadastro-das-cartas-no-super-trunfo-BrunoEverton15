#include <stdio.h>;

int main(){
// Variaveis da carta 1
    char estado1[10];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    int Pontosturistico1;
    float area1;
    float pib1;


    // Variaveis da carta 2
     char estado2[100];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    int Pontosturistico2;
    float area2;
    float pib2;


    // Leitura de Dados da Carta 1

    printf("--------------------CARTA 1---------------------\n");

    printf("Digite Seu Estado 1: \n");
    scanf("%s", &estado1);  

    printf("Codigo 1: \n");
    scanf("%s", &codigo1);

    printf("Nome Da Cidade 1: \n");
    scanf("%s", &cidade1); 

    printf("Total de Habitantes 1: \n");
    scanf("%d", &populacao1);

    printf("Area (em km²) 1: \n");
    scanf("%f", &area1);

    printf("PIB ( EM BILHOES) 1: \n");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turisticos 1: \n");
    scanf("%d", &Pontosturistico1);


    // Leitura de Carta 2

    printf("--------------------CARTA 2---------------------\n");

    printf("Digite Seu Estado 2: \n");
    scanf("%s", &estado2);  

    printf("Codigo 2: \n");
    scanf("%s", &codigo2);

    printf("Nome Da Cidade 2: \n");
    scanf("%s", &cidade2); 

    printf("Total de Habitantes 2: \n");
    scanf("%d", &populacao2);

    printf("Area (em km²) 2: \n");
    scanf("%f", &area2);

    printf("PIB ( EM BILHOES) 2: \n");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turisticos 2: \n");
    scanf("%d", &Pontosturistico2);



    // DADOS DA CARTA 1

    printf("Carta 1! \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da Carta: %s%s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Habitantes: %d \n", populacao1);
    printf("Area: %f  km²\n", area1);
    printf("Pib: %lf Bilhoes de Reais \n", pib1);
    printf("Pontos Turisticos: %d \n", Pontosturistico1);


    // DADAOS CARTA 2: \n;


    printf("Carta 2! \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Habitantes: %d \n", populacao2);
    printf("Area: %f  km²\n", area2);
    printf("Pib: %lf Bilhoes de Reais \n", pib2);
    printf("Pontos Turisticos: %d \n", Pontosturistico2);


return 0;

}

