#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;


  // Área para entrada de dados
    printf("|+=+| BEM VINDO AO SUPER TRUNFO |+=+|\n");
    printf("Prepare-se para montar as suas cartas.\n\n");

    printf("PRIMEIRO VAMOS MONTAR A CARTA 01\n\n");

    //COLETANDO DADOS DO ESTADO1
    printf("Digite apenas a primeira letra do Estado Desejado: \n");
    scanf("%c", &estado1);

    //COLETANDO DADOS DO CODIGO1
    printf("Digite o código da sua carta sendo ele de 01 a 04, informando a letra do seu Estado antes do código.\nExemplo: A02, D01.\n");
    scanf("%s", &codigo1);
    
    //COLETANDO DADOS DA CIDADE1
    printf("Digite o nome da Cidade que deseja (Sem Espaços): \n");
    scanf("%s", &cidade1);

    //COLETANDO DADOS DE NUMERO DE HABITANTES1
    printf("Informe o numero de hábitantes da cidade: \n");
    scanf("%u", &populacao1);

    //COLETANDO DADOS DE KM²1
    printf("Informe a Área (em km²): \n");
    scanf("%f", &area1);

    //COLETANDO DADOS DO PIB1
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);

    //COLETANDO DADOS DE PONTOS TURISTICOS1
    printf("Quantos pontos túriscos essa cidade possui? ");
    scanf("%d", &turismo1);

    // DADOS DA CARTA 1 COLETADOS COM SUCESSO
    printf("\nPERFEITO, SUA CARTA 01 ESTÁ PRONTA!\n\nAGORA VAMOS CRIAR A SUA CARTA 02\n\n");

    // COLETANDO DADOS DA CARTA 2

    //COLETANDO DADOS DO ESTADO2
    printf("Digite apenas a primeira letra do Estado Desejado: \n");
    scanf(" %c", &estado2);

    //COLETANDO DADOS DO CODIGO2
    printf("Digite o código da sua carta sendo ele de 01 a 04, informando a letra do seu Estado antes do código.\nExemplo: A02, D01. \n");
    scanf("%s", &codigo2);
    
    //COLETANDO DADOS DA CIDADE2
    printf("Digite o nome da Cidade que deseja (Sem Espaços): \n");
    scanf("%s", &cidade2);

    //COLETANDO DADOS DE NUMERO DE HABITANTES2
    printf("Informe o numero de hábitantes da cidade: ");
    scanf("%u", &populacao2);

    //COLETANDO DADOS DE KM²2
    printf("Informe a Área (em km²): \n");
    scanf("%f", &area2);

    //COLETANDO DADOS DO PIB2
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    //COLETANDO DADOS DE PONTOS TURISTICOS2
    printf("Quantos pontos túriscos essa cidade possui? \n");
    scanf("%d", &turismo2);

    float densidade_populacao1 = (float) populacao1 / area1;
    float densidade_populacao2 = (float) populacao1 / area2;
    float pib_capita1 = (float) pib1 / populacao1;
    float pib_capita2 = (float) pib2 / populacao2;

    //Calculado poder da densidade 
    float densidade1 = 1.0 / densidade_populacao1;
    float densidade2 = 1.0 / densidade_populacao2;

    //Super Poder
    float superpoder1 = (float) populacao1 + area1 + pib1 + turismo1 + pib_capita1 + densidade1;
    float superpoder2 = (float) populacao2 + area2 + pib2 + turismo2 + pib_capita2 + densidade2;
    
    // Comparando as Cartas
    int r_populacao = populacao1 > populacao2;
    int r_area = area1 > area2;
    int r_pib = pib1 > pib2;
    int r_turismo = turismo1 > turismo2;
    int r_densidade = densidade1 < densidade2;
    int r_pibcapta = pib_capita1 < pib_capita2;
    int super_poder = superpoder1 > superpoder2;

  // Área para exibição dos dados da cidade
    printf("PERFEITO!!!\n, ESSAS SÃO AS INFORMAÇÕES DAS SUAS CARTAS!\n\n");
    printf("CARTA 01\n");
    printf("Estado: %c\nCódigo da Carta: %s\nCidade: %s\nPopulação: %u\nÁrea: %.2f km²\nPIB: %.2fbilhões de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f Hab/km2\nPib per Capita: %.2f reais\n\n", 
      estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1, densidade_populacao1, pib_capita1);

    printf("CARTA 02\n");
    printf("Estado: %c\nCódigo da Carta: %s\nCidade: %s\nPopulação: %u\nÁrea:  %.2f km²\nPIB: %.2fbilhões de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f Hab/km2\nPib per Capita: %.2f reais\n\n", 
      estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2, densidade_populacao2, pib_capita2);


    printf("Comparação de Cartas\n\n");
    printf("RESULTADO 1: CARTA 1 VENCE\n");
    printf("RESULTADO 0: CARTA 2 VENCE\n\n");
    


    printf("População: (%d)\n", r_populacao);
    printf("Área: (%d)\n", r_area );
    printf("Pib: (%d)\n", r_pib);
    printf("Pontos Turísticos: (%d)\n", r_turismo);
    printf("Densidade Populacional: (%d)\n", r_turismo);
    printf("PIB per Capita: (%d)\n", r_pibcapta);
    printf("Super Poder: (%d)\n", super_poder);

return 0;

} 
