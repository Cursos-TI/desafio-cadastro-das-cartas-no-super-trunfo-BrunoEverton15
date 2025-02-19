#include <stdio.h>

int main() {     

     
  int populacao, ponto_turistico;
 char nome[500];
 float area, pib;
 char letra; 
  int numero;


        printf("Digite Numero da Carta: \n");
        scanf("%d", &numero);

        printf("Digite Letra Da Carta: \n");
        scanf("%s", &letra);

        printf("Digite Nome da Cidade: \n");
        scanf("%s", &nome);

        printf("Quantidade de Habitantes: \n");
        scanf("%d", &populacao);

        printf("Informe a Expansao da Area: \n");
        scanf("%f", &area);

        printf("Me Informe o Pib: \n");
        scanf("%f", &pib);

        printf("Quantidade de Pontos Turisticos: \n");
        scanf("%d", &ponto_turistico);

    
        printf("Cidade: %s\n", nome);
        printf("Populacao: %d\n", populacao);
        printf("Area: %f\n", area);
        printf("Pib: %f\n", pib);
        printf("Ponto Turistico: %d\n", ponto_turistico);



return 0;

  


























}