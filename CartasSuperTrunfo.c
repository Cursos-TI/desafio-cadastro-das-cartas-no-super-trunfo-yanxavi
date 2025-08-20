#include <stdio.h>

int main() {
  // ############################ DECLARAÇÃO DE VARIÁVEIS ############################
  // carta 1
  int populacao1, turismo1;
  float area1, pib1, densidadePopulacional1, pibpc1;
  char estado1[20], codigo1[3], cidade1[30];
  // carta 2
  int populacao2, turismo2;
  float area2, pib2, densidadePopulacional2, pibpc2;
  char estado2[20], codigo2[3], cidade2[30];

  // ############################ CADASTRO DA PRIMEIRA CARTA ############################
  printf("==== CADASTRO DA PRIMEIRA CARTA ====\n");
  
  printf("Nome do estado (SEM ESPAÇOS; ex. new-york):\n");
  scanf("%s", estado1);
  printf("Código do estado (Abreviatura; ex. NY):\n");
  scanf("%s", codigo1);
  printf("Nome da cidade (SEM ESPAÇOS; ex. nova-iorque):\n");
  scanf("%s", cidade1);
  printf("População da cidade (SEM PONTOS OU VÍRGULAS):\n");
  scanf("%d", &populacao1);
  printf("PIB:\n");
  scanf("%f", &pib1);
  printf("Área em Km²:\n");
  scanf("%f", &area1);
  printf("N° de Pontos turísticos:\n");
  scanf("%d", &turismo1);

  densidadePopulacional1 = (float)(populacao1 / area1);
  pibpc1 = (float)(pib1 / populacao1);


//   // ############################ CADASTRO DA SEGUNDA CARTA ############################
//   printf("\n==== CADASTRO DA SEGUNDA CARTA ====\n");

//   printf("Nome do estado (SEM ESPAÇOS; ex. new-york):\n");
//   scanf("%s", estado2);
//   printf("Código do estado (Abreviatura; ex. NY):\n");
//   scanf("%s", codigo2);
//   printf("Nome da cidade (SEM ESPAÇOS; ex. nova-iorque):\n");
//   scanf("%s", cidade2);
//   printf("População da cidade (SEM PONTOS OU VÍRGULAS):\n");
//   scanf("%d", &populacao2);
//   printf("PIB:\n");
//   scanf("%f", &pib2);
//   printf("Área em Km²:\n");
//   scanf("%f", &area2);
//   printf("N° de Pontos turísticos:\n");
//   scanf("%d", &turismo2);

  // ############################ IMPRESSÃO DAS CARTAS ############################
  printf("\n=====INFORMAÇÕES=====\n");
  printf("\nPRIMEIRA CARTA");
  printf("\nEstado: %s", estado1);
  printf("\nCódigo: %s", codigo1);
  printf("\nCidade: %s", cidade1);
  printf("\nPopulação: %d", populacao1);
  printf("\nPIB: %.1f", pib1);
  printf("\nÁrea: %.1f", area1);
  printf("\nPontos Turísticos: %d \n", turismo1);
  printf("\nPIB per Capita: %f \n", pibpc1);
  printf("\nDensidade Populacional: %f \n", densidadePopulacional1);

//   printf("\nSEGUNDA CARTA");
//   printf("\nEstado: %s", estado2);
//   printf("\nCódigo: %s", codigo2);
//   printf("\nCidade: %s", cidade2);
//   printf("\nPopulação: %d", populacao2);
//   printf("\nPIB: %.1f", pib2);
//   printf("\nÁrea: %.1f", area2);
//   printf("\nPontos Turísticos: %d", turismo2);


  printf("\n\n=====CADASTRO CONCLUÍDO!=====\n\n");
  return 0;
}
