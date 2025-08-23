
#include <stdio.h>

int main() {
  int populacao1, turismo1;
  float area1, pib1, densidadePopulacional1, pibpc1;
  char estado1;
  char *cidade1[30];
  char *codigo1[3];
  int populacao2, turismo2;
  float area2, pib2, densidadePopulacional2, pibpc2;
  char estado2;
  char *cidade2[30];
  char *codigo2[3];

  printf("==== SUPRERTRUNFO EM C ====\n\n==== CADASTRO DE CARTAS ====\n");

// ############################ CADASTRO DAS CARTAS ############################    
  printf("Primeira Carta \n");
  
  printf("Estado (Uma letra de A a H): ");
  scanf("%c", &estado1);
  printf("Código do estado: ");
  scanf("%s", codigo1);
  printf("Nome da cidade (SEM ESPAÇOS; ex. São-Paulo): ");
  scanf("%s", cidade1);
  printf("População da Cidade: ");
  scanf("%d", &populacao1);
  printf("Produto Interno Bruto (PIB): ");
  scanf("%f", &pib1);
  printf("Área em Km² (ex. 123456.78): ");
  scanf("%f", &area1);
  printf("Nº de Pontos Turísticos: ");
  scanf("%d", &turismo1);

  // Cálculo de densidade e PPC primeira carta
  densidadePopulacional1 = (float)(populacao1 / area1);
  pibpc1 = (float)(pib1 / populacao1);
    
  printf("\n==== CADASTRO DE CARTAS ====\n");

  // Segunda carta
  printf("Segunda Carta \n");

  printf("Estado (Uma letra de A a H): ");
  scanf(" %c", &estado2);
  printf("Código do estado: ");
  scanf("%s", codigo2);
  printf("Nome da cidade (SEM ESPAÇOS; ex. São-Paulo): ");
  scanf("%s", cidade2);
  printf("População da Cidade: ");
  scanf("%d", &populacao2);
  printf("Produto Interno Bruto (PIB): ");
  scanf("%f", &pib2);
  printf("Área em Km² (ex. 123456.78): ");
  scanf("%f", &area2);
  printf("Nº de Pontos Turísticos: ");
  scanf("%d", &turismo2);

  // Cálculo de densidade e PPC segunda carta
  densidadePopulacional2 = (float)(populacao2 / area2);
  pibpc2 = (float)(pib2 / populacao2);

// ############################ IMPRESSÃO DAS CARTAS ############################
  printf("\n=====INFORMAÇÕES=====\n");
  printf("\nPRIMEIRA CARTA");
  printf("\nEstado: %c", estado1);
  printf("\nCódigo: %s", codigo1);
  printf("\nCidade: %s", cidade1);
  printf("\nPopulação: %d", populacao1);
  printf("\nPIB: %.1f", pib1);
  printf("\nÁrea: %.1f", area1);
  printf("\nPontos Turísticos: %d", turismo1);
  printf("\nPIB per Capita: %.2f", pibpc1);
  printf("\nDensidade Populacional: %.1f", densidadePopulacional1);
    
  printf("\n");
  
  printf("\nSEGUNDA CARTA");
  printf("\nEstado: %c", estado2);
  printf("\nCódigo: %s", codigo2);
  printf("\nCidade: %s", cidade2);
  printf("\nPopulação: %d", populacao2);
  printf("\nPIB: %.1f", pib2);
  printf("\nÁrea: %.1f", area2);
  printf("\nPontos Turísticos: %d", turismo2);
  printf("\nPIB per Capita: %.2f", pibpc2);
  printf("\nDensidade Populacional: %.1f", densidadePopulacional2);

  // fim do código
  printf("\n\n=====CADASTRO CONCLUÍDO!=====\n\n");

return 0;
  
}
