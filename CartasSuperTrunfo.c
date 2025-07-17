#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Definindo as variaveis:
    char codigo_carta1[10];
    char cidade1[20];
    unsigned long int população1;
    float Área1;
    float PIB1;
    int Num_Pontos_turisticos1;

    char codigo_carta2[10];
    char cidade2[20];
    unsigned long int população2;
    float Área2;
    float PIB2;
    int Num_Pontos_turisticos2;

    // Cadastro das Cartas:
    printf("Insira o codigo da carta 1: \n");
    scanf("%s", codigo_carta1);
    printf("Insira o nome da cidade 1: \n");
    scanf("%c", cidade1);
    printf("Insira a população 1: \n");
    scanf("%lu", população1);
    printf("Insira a Área 1: \n");
    scanf("%f", Área1);
    printf("Insira o PIB 1: \n");
    scanf("%f", PIB1);
    printf("Insira o Número de pontos turísticos 1: \n");
    scanf("%i", Num_Pontos_turisticos1);

    printf("Insira o codigo da carta 2: \n");
    scanf("%s", codigo_carta2);
    printf("Insira o nome da cidade 2: \n");
    scanf("%c", cidade2);
    printf("Insira a população 2: \n");
    scanf("%lu", população2);
    printf("Insira a Área 2: \n");
    scanf("%f", Área2);
    printf("Insira o PIB 2: \n");
    scanf("%f", PIB2);
    printf("Insira o Número de pontos turísticos 2: \n");
    scanf("%i", Num_Pontos_turisticos2);
    
    // Calculo da densidade populacional e PIB per Capita.
    float densidade_populacional1 = população1/Área1;
    float pib_per_capta1 = PIB1/população1;

    float densidade_populacional2 = população2/Área2;
    float pib_per_capta2 = PIB2/população2;
    
    // Exibição dos Dados das Cartas:
    printf("==============CARTA 1==============")
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %c\n", cidade1);
    printf("População: %lu\n", população1);
    printf("Área: %f\n", Área1);
    printf("O PIB é: %f\n", PIB1);
    printf("A quantidade de pontos turisticos é: %i\n", Num_Pontos_turisticos1);
    printf("A densidade populacional é: %f\n", densidade_populacional1);
    printf("O PIB per Capta é: %f\n", pib_per_capta1);

    printf("==============CARTA 2==============")
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %c\n", cidade2);
    printf("População: %lu\n", população2);
    printf("Área: %f\n", Área2);
    printf("O PIB é: %f\n", PIB2);
    printf("A quantidade de pontos turisticos é: %i\n", Num_Pontos_turisticos2);
    printf("A densidade populacional é: %f\n", densidade_populacional2);
    printf("O PIB per Capta é: %f\n", pib_per_capta2);

    return 0;
}
