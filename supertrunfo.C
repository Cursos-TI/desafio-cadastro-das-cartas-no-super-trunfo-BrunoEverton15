#include <stdio.h>;


int main(){


printf("--------------------CADASTRO DE CARTAS SUPER TRUNFO--------------------\n");


 // Variaveis da carta 1
 char estado1[10];
 char codigo1[5];
 char cidade1[20];
 int populacao1;
 int Pontosturistico1;
 float area1;
 float pib1;
 float densidadepopulacional;
 float Pibpercapita;
 float divisao;


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

//Operacao Divisao
   divisao = populacao1 / area1;


  // DADOS DA CARTA 1

    printf("Carta 1! \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da Carta: %s%s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Habitantes: %d \n", populacao1);
    printf("Area: %f  km²\n", area1);
    printf("Pib: %lf Bilhoes de Reais \n", pib1);
    printf("Pontos Turisticos: %d \n", Pontosturistico1);
    printf("Densidade Populacional: %.2f hab/km²", divisao);


    return 0;


}


