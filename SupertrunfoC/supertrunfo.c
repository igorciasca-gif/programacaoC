#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades
struct Carta1 {
  char estado1;
  char cdcarta1[4];
  char nomecidade1[50];
  int populacao1;
  float areacidade1;
  float pib1;
  int nrptturisticos1; 

};

struct Carta2{
  char estado2;
  char cdcarta2[4];
  char nomecidade2[50];
  int populacao2;
  float areacidade2;
  float pib2;
  int nrptturisticos2; 
};


int main() {
    struct Carta1 u1;
  
    // Área para entrada de dados
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite uma letra de 'A' a 'H' que representa o Estado: ");
    scanf("%c", &u1.estado1);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 para representar o Código da Carta: ");
    scanf("%s", u1.cdcarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", u1.nomecidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &u1.populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &u1.areacidade1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &u1.pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &u1.nrptturisticos1);
    

    struct Carta2 u2;

    // Área para entrada de dados da segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite uma letra de 'A' a 'H' que representa o Estado: ");
    scanf(" %c", &u2.estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 para representar o Código da Carta: ");
    scanf("%s", u2.cdcarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", u2.nomecidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &u2.populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &u2.areacidade2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &u2.pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &u2.nrptturisticos2);


     // Área para exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", u1.estado1);
    printf("Código: %s\n", u1.cdcarta1);
    printf("Nome da cidade: %s\n", u1.nomecidade1);
    printf("População: %d\n", u1.populacao1);
    printf("Área: %.2f km²\n", u1.areacidade1);
    printf("PIB: %.2f bilhões de reais\n", u1.pib1);
    printf("Número de pontos turísticos: %d\n", u1.nrptturisticos1);

    // Área para exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", u2.estado2);
    printf("Código: %s\n", u2.cdcarta2);
    printf("Nome da cidade: %s\n", u2.nomecidade2);
    printf("População: %d\n", u2.populacao2);
    printf("Área: %.2f km²\n", u2.areacidade2);
    printf("PIB: %.2f bilhões de reais\n", u2.pib2);
    printf("Número de pontos turísticos: %d\n", u2.nrptturisticos2);

    return 0; // Fim do programa
} 