#include <stdio.h>

int main(){

    char estado[30];
    char codigo[30];
    char capital[30];
    int populacao;
    float area;
    float pib;
    int turismo;

    char estado2[30];
    char codigo2[30];
    char capital2[30];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    printf("Qual o nome do estado 01? \n");
    scanf("%s", estado);
    printf("Qual o codigo postal 01? \n");
    scanf("%s", codigo);
    printf("Qual a capita 01? \n");
    scanf("%s", capital);
    printf("Quantidade de população 01: \n");
    scanf("%d", &populacao);
    printf("Área do estado 01: \n");
    scanf("%f", &area);
    printf("Qual o PIB do estado 01? \n");
    scanf("%f", &pib);
    printf("Numeros de Pontos Turisticos 01: \n");
    scanf("%d", &turismo);

    
    
    
    printf("Qual o nome do estado 02? \n");
    scanf("%s", estado2);
    printf("Qual o codigo postal 02? \n");
    scanf("%s", codigo2);
    printf("Qual a capital 02? \n");
    scanf("%s", capital2);
    printf("Quantidade de população 02: \n");
    scanf("%d", &populacao2);
    printf("Área do estado 02: \n");
    scanf("%f", &area2);
    printf("Qual o PIB 02? \n");
    scanf("%f", &pib2);
    printf("Numeros de Pontos Turisticos 02: \n");
    scanf("%d", &turismo2);

    
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Capital: %s\n", capital);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turismo);


    printf("\n--- Dados da Carta 02 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Capital: %s\n", capital2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turismo2);
        

    return 0;
}