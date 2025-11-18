#include <stdio.h>
#include <string.h>

int main() {
    // ======== CADASTRO DAS CARTAS =========

    char pais1[50], pais2[50];
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
    scanf(" %[^\n]", &pais2);

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

    int opcao;

    printf("==== ESCOLHA UMA OPÇÃO PARA A BATALHA ====\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\nEscolha o atributo para batalhar: ");
    scanf("%d", &opcao);

    int vencedor = 0;

      switch (opcao)
      {
      case 1:
        printf("Atributo: População\n");
        printf("%s: %d habitantes", pais1, populacao1);
        printf("%s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao1) 
                vencedor = 1; 
            else if (populacao2 > populacao1)
                vencedor = 2;
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", pais1, area1);
            printf("%s: %.2f km2\n", pais2, area2);

            if (area1 > area2)
                vencedor = 1;
            else if (area2 > area1)
                vencedor = 2;
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2)
                vencedor = 1;
            else if (pib2 > pib1)
                vencedor = 2;
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, turismo1);
            printf("%s: %d\n", pais2, turismo2);

            if (turismo1 > turismo2)
                vencedor = 1;
            else if (turismo2 > turismo1 )
                vencedor = 2;
            break;  

        case 5:
            printf("Atributo: Densidade Demografica (MENOR vence)\n");
            printf("%s: %.2f hab/km2\n", pais1, densidade1);
            printf("%s: %.2f hab/km2\n", pais2, densidade2);

            // menor densidade vence
            if (densidade1 < densidade2)
                vencedor = 1;
            else if (densidade2 < densidade1)
                vencedor = 2;
            break;      

        default:
            printf("Opção Invalida!\n");

      }

    if (vencedor == 1)
        printf("\nVencedor: Carta 1 (%s)\n", pais1);
    else if (vencedor == 2)
        printf("\nVencedor: Carta 2 (%s)\n", pais2);
    else
        printf("\nEmpate!\n");
      
    return 0;
}
