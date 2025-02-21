#include <stdio.h>;

int main(){

    char estado [10];
    char codigo [5];
    char cidade [20];
    int populacao;
    int Pontosturistico;
    float area;
    float pib;




    printf("Digite Seu Estado: \n");
    scanf("%s", &estado);  

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Nome Da Cidade: \n");
    scanf("%s", &cidade); 

    printf("Total de Habitantes: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontosturistico);


    printf("Carta 1! \n");
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %s%s \n", estado, codigo);
    printf("Cidade: %s \n", cidade);
    printf("Habitantes: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos Turisticos: %d \n", Pontosturistico);



    return 0;








}