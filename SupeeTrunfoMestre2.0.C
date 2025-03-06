#include <stdio.h>;


int main(){


printf("--------------------CADASTRO DE CARTAS SUPER TRUNFO--------------------\n");


 // Variaveis da carta 1
 char estado1[10];
 char codigo1[5];
 char cidade1[20];
  unsigned long int populacao1;
 int Pontosturistico1;
 float area1;
 float pib1;
 float densidadepopulacional1;
 float Pibpercapita1;
 float superpoder1;

// Vaiaveis da Carta 2
   char estado2[100];
   char codigo2[5];
   char cidade2[20];
   unsigned long int populacao2;
   int Pontosturistico2;
   float area2;
   float pib2;
   float densidadepopulacional2;
   float Pibpercapita2;
   float superpoder2;


   //Resultados Das Coparações
       int resultadoPopulacao;
       int resultadoArea;
       int resultadoPIB;
       int resultadoPontosTuristicos;
       int resultadoDensidadePopulacional;
       int resultadoPIBPerCapita;
       int resultadoSuperPoder;


    printf("\n=== Cadastro da Primeira Carta ===\n");

    printf("Digite Seu Estado 1: \n");
    scanf("%s", &estado1);  
 
    printf("Codigo 1: \n");
    scanf("%s", &codigo1);
 
    printf("Nome Da Cidade 1: \n");
    scanf("%s", &cidade1); 
 
    printf("Total de Habitantes 1: \n");
    scanf("%lu", &populacao1);
 
    printf("Area (em km²) 1: \n");
    scanf("%f", &area1);
 
    printf("PIB ( EM BILHOES) 1: \n");
    scanf("%f", &pib1);
 
    printf("Quantidade de Pontos Turisticos 1: \n");
    scanf("%d", &Pontosturistico1);


densidadepopulacional1 =(float) populacao1 / area1;
Pibpercapita1 = (pib1 * 1000000000.0) / (float)populacao1;



printf("\n=== Cadastro da Segunda Carta ===\n");
printf("Digite Seu Estado 2: \n");
   scanf("%s", &estado2);  

   printf("Codigo 2: \n");
   scanf("%s", &codigo2);

   printf("Nome Da Cidade 2: \n");
   scanf("%s", &cidade2);

   printf("Total de Habitantes 2: \n");
   scanf("%lu", &populacao2);

   printf("Area (em km²) 2: \n");
   scanf("%f", &area2);

   printf("PIB ( EM BILHOES) 2: \n");
   scanf("%f", &pib2);

   printf("Quantidade de Pontos Turisticos 2: \n");
   scanf("%d", &Pontosturistico2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
 densidadepopulacional2 =(float) populacao2 / area2;
 Pibpercapita2 = (pib2 * 1000000000.0) / (float)populacao2;

        // Cálculo do Super Poder para a primeira carta
superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + 
(float)Pontosturistico1 + Pibpercapita1 + (1.0f / densidadepopulacional1);

        // Cálculo do Super Poder para a segunda carta
 superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + 
 (float)Pontosturistico2 + Pibpercapita2 + (1.0f / densidadepopulacional2);


    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", Pontosturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", Pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Pontosturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", Pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

// Comparação das cartas atributo por atributo
resultadoPopulacao = (populacao1 > populacao2);
resultadoArea = (area1 > area2);
resultadoPIB = (pib1 > pib2);
resultadoPontosTuristicos = (Pontosturistico1 > Pontosturistico2);


    // Densidade populacional o menor valor vence
    resultadoDensidadePopulacional = (densidadepopulacional1 < densidadepopulacional2);
    
    resultadoPIBPerCapita = (Pibpercapita1 > Pibpercapita2);
    resultadoSuperPoder = (superpoder1 > superpoder2);



        // Exibição dos resultados das comparações
        printf("\nComparação de Cartas:\n");
        printf("População: Carta %d venceu (%d)\n", 
               resultadoPopulacao ? 1 : 2, resultadoPopulacao);
        printf("Área: Carta %d venceu (%d)\n", 
               resultadoArea ? 1 : 2, resultadoArea);
        printf("PIB: Carta %d venceu (%d)\n", 
               resultadoPIB ? 1 : 2, resultadoPIB);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
               resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", 
               resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);
        printf("PIB per Capita: Carta %d venceu (%d)\n", 
               resultadoPIBPerCapita ? 1 : 2, resultadoPIBPerCapita);
        printf("Super Poder: Carta %d venceu (%d)\n", 
               resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);
        
        return 0;


}