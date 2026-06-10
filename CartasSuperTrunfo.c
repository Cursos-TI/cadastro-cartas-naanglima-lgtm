#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

    int turistico;
    int populacao;
    char cidade[30];
    char estado[20];
    char codigo[4];
    float PIB;
    float area;

    printf("Bem-vindo ao SuperTrunfo Digital!\n \n Para prosseguir, digite os dados da primeira carta:\n");

    printf("Codigo da carta:\n");
    scanf("%s", codigo); // Sem '&'

    printf("Qual eh a cidade?\n");
    scanf("%s", cidade); // Sem '&'

    printf("Em que estado fica? \n");
    scanf("%s", estado); // Sem '&'

    printf("Qual eh a populacao?\n");
    scanf("%d", &populacao); // Mantém '&' porque é int

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &turistico);

    printf("Qual eh a area territorial?\n");
    scanf("%f", &area);

    printf("Qual eh o PIB?\n");
    scanf("%f", &PIB);

    int turistico2;
    int populacao2;
    char cidade2[30];
    char estado2[20];
    char codigo2[4];
    float PIB2;
    float area2;

    printf("\nAgora, digite os dados da segunda carta:\n");

    printf("Codigo da carta:\n");
    scanf("%s", codigo2); // Sem '&'

    printf("Qual eh a cidade?\n");
    scanf("%s", cidade2); // Sem '&'

    printf("Em que estado fica? \n");
    scanf("%s", estado2); // Sem '&'

    printf("Qual eh a populacao?\n");
    scanf("%d", &populacao2);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &turistico2);

    printf("Qual eh a area territorial?\n");
    scanf("%f", &area2);

    printf("Qual eh o PIB?\n");
    scanf("%f", &PIB2);

    //AQUI A PARADA FICOU SÉRIA KKKKKK

    printf("\nTEMOS UM GANHADOR! Compare abaixo:\n\n");

    printf("CARTA 1:\n");
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Populacao: %d\n", populacao);
    printf("Pontos turísticos: %d\n", turistico);
    printf("Area: %.3f km²\n", area);
    printf("PIB: %.2f bilhões\n\n", PIB);

    printf("CARTA 2:\n");
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", turistico2);
    printf("Area: %.3f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", PIB2);


return 0;
} 
