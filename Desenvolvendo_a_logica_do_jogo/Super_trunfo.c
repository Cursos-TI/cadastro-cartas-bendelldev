#include <stdio.h>
#include <string.h>

int main() {
    // ======== CADASTRO DAS CARTAS =========+

    char pais1[50], pais2[49];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;

    printf("=== Cadastro Carta 1 ===\n");
    printf("Nome do Pais: ");
    scanf(" %[^\n]", pais1);

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Area(km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;

    printf("=== Cadastro Carta 2 ===\n");
    printf("Nome do Pais: ");
    scanf(" %[^\n]", pais2);

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Area(km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &turismo2);
   
    densidade2 = populacao2 / area2;

    // ======= MENU DE ESCOLHAS ======== 

    int atributo1;
    int atributo2;

    printf("==== ESCOLHA UMA OPÇÃO PARA A BATALHA ====\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\nEscolha o atributo para batalhar: ");
    scanf("%d", &atributo1);

    // ARMAZENAR OS VALORES DO SCANF NA OPCAO ESCOLHIDA
    int resultado1, resultado2;

      switch (atributo1)
      {
        case 1:
        printf("Atributo: População\n");
        resultado1 = populacao1; resultado2 = populacao2;
            break;

        case 2:
            printf("Atributo: Area\n");
            resultado1 = area1; resultado2 = area2;
            break;

        case 3:
            printf("Atributo: PIB\n");
            resultado1 = pib1; resultado2 = pib2;
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            resultado1 = turismo1; resultado2 = turismo2;
            break;  

        case 5:
            printf("Atributo: Densidade Demografica (MENOR vence)\n");
            resultado1 = densidade1; resultado2 = densidade2;
            break;      

        default:
            printf("Opção Invalida!\n");

      }

      //   MENU PARA O SEGUNDO ATRIBUTO 
      printf("==== ESCOLHA O SEGUNDO ATRIBUTO ====\n\n");
      printf("1 - População\n");
      printf("2 - Área\n");
      printf("3 - PIB\n");
      printf("4 - Pontos Turisticos\n");
      printf("5 - Densidade Demografica\n");

      printf("\nEscolha o atributo para batalhar: ");
      scanf("%d", &atributo2);


      //Se o jogador escolher o mesmo atributo, enviara a seguinte mensagem.
      if (atributo1 == atributo2){
        printf("Você não pode escolher o mesmo atributo.");
      }
      else {
        switch (atributo2)
        {
        case 1:
        printf("Atributo: População\n");
        resultado1 = populacao1; resultado2 = populacao2;
            break;

        case 2:
            printf("Atributo: Area\n");
            resultado1 = area1; resultado2 = area2;
            break;

        case 3:
            printf("Atributo: PIB\n");
            resultado1 = pib1; resultado2 = pib2;
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            resultado1 = turismo1; resultado2 = turismo2;
            break;  

        case 5:
            printf("Atributo: Densidade Demografica (MENOR vence)\n");
            resultado1 = densidade1; resultado2 = densidade2;
            break;         

        default:
            printf("Opção Invalida!\n");
            break;
        }
      }

    // SOMA DOS ATRIBUTOS 
    float soma_atributos1 = resultado1 + resultado1; // RESULTADO 1 DO MENU 1 + RESULTADO1 DO MENU 2 
    float soma_atributos2 = resultado2 + resultado2; // RESULTADO 1 DO MENU 1 + RESULTADO1 DO MENU 2 

    // Resultado 

    printf("\n======= RESULTADO =======\n");
    printf("Carta 1 (%s): SOMA = %.2f\n",pais1, soma_atributos1);
    printf("Carta 2 (%s): SOMA = %.2f\n", pais2, soma_atributos2);

    if (soma_atributos1 > soma_atributos2) {
        printf("VENCEDORA: CARTA 1 (%s)\n", pais1);
    }else if (soma_atributos2 > soma_atributos1){
        printf("VENCEDORA: CARTA 2 (%s)\n", pais2);
    }else {
        printf("Empate\n");
    }
      
      
    return 0;

}
