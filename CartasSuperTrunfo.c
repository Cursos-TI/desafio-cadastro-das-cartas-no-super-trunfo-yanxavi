#include <stdio.h>

int main() {
  // ############################ DECLARAÇÃO DE VARIÁVEIS ############################
  // carta 1
  int populacao1, turismo1;
  float area1, pib1, densidadePopulacional1, pibpc1;
  char primeiroEstado;
  char cidade1[30];
  char codigo1[3];
  // carta 2
  int populacao2, turismo2;
  float area2, pib2, densidadePopulacional2, pibpc2;
  char segundoEstado;
  char cidade2[30];
  char codigo2[3];

  // ############################ CADASTRO DA PRIMEIRA CARTA ############################
  printf("==== CADASTRO DA PRIMEIRA CARTA ====\n");
  
  printf("Nome do estado (Uma letra de A a H):\n");
  scanf("%c", &primeiroEstado);
  printf("Código do estado:\n");
  scanf("%s", codigo1);
  printf("Nome da cidade (SEM ESPAÇOS; ex. São-Paulo):\n");
  scanf("%s", cidade1);
  printf("População da Cidade:\n");
  scanf("%d", &populacao1);
  printf("Produto Interno Bruto (PIB):\n");
  scanf("%f", &pib1);
  printf("Área em Km² (ex. 123456.78):\n");
  scanf("%f", &area1);
  printf("N° de Pontos Turísticos:\n");
  scanf("%d", &turismo1);

  // cálculo de densidade e PPC
  densidadePopulacional1 = (float)(populacao1 / area1);
  pibpc1 = (float)(pib1 / populacao1);


  // ############################ CADASTRO DA SEGUNDA CARTA ############################
  printf("==== CADASTRO DA SEGUNDA CARTA ====\n");
  
  printf("Nome do estado (Uma letra de A a H):\n");
  scanf("%c", &segundoEstado);
  printf("Código do estado:\n");
  scanf("%s", codigo2);
  printf("Nome da cidade (SEM ESPAÇOS; ex. São-Paulo):\n");
  scanf("%s", cidade2);
  printf("População da Cidade:\n");
  scanf("%d", &populacao2);
  printf("Produto Interno Bruto (PIB):\n");
  scanf("%f", &pib2);
  printf("Área em Km² (ex. 123456.78):\n");
  scanf("%f", &area2);
  printf("N° de Pontos Turísticos:\n");
  scanf("%d", &turismo2);

    // cálculo de densidade e PPC
  densidadePopulacional2 = (float)(populacao2 / area2);
  pibpc2 = (float)(pib2 / populacao2);

  // ############################ IMPRESSÃO DAS CARTAS ############################
  printf("\n=====INFORMAÇÕES=====\n");
  printf("\nPRIMEIRA CARTA");
  printf("\nEstado: %c", primeiroEstado);
  printf("\nCódigo: %s", codigo1);
  printf("\nCidade: %s", cidade1);
  printf("\nPopulação: %d", populacao1);
  printf("\nPIB: %.1f", pib1);
  printf("\nÁrea: %.1f", area1);
  printf("\nPontos Turísticos: %d \n", turismo1);
  printf("\nPIB per Capita: %.2f \n", pibpc1);
  printf("\nDensidade Populacional: %.1f \n", densidadePopulacional1);

  printf("\nSEGUNDA CARTA");
  printf("\nEstado: %c", segundoEstado);
  printf("\nCódigo: %s", codigo2);
  printf("\nCidade: %s", cidade2);
  printf("\nPopulação: %d", populacao2);
  printf("\nPIB: %.1f", pib2);
  printf("\nÁrea: %.1f", area2);
  printf("\nPontos Turísticos: %d \n", turismo2);
  printf("\nPIB per Capita: %.2f \n", pibpc2);
  printf("\nDensidade Populacional: %.1f \n", densidadePopulacional2);

  printf("\n\n=====CADASTRO CONCLUÍDO!=====\n\n");
  return 0;
}
