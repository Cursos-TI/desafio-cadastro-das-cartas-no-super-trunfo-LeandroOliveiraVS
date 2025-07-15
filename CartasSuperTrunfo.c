#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo_carta[];
    char cidade[];
    int população;
    float Área;
    float PIB;
    int Num_Pontos_turisticos

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Insira o codigo da carta: \n");
    scanf("%s", codigo_carta);
    printf("Insira o nome da cidade: \n");
    scanf("%c", cidade);
    printf("Insira a população: \n");
    scanf("%i", população);
    printf("Insira a Área: \n");
    scanf("%f", Área);
    printf("Insira o PIB: \n");
    scanf("%f", PIB);
    printf("Insira o Número de pontos turísticos: \n");
    scanf("%i", Num_Pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %c\n", cidade);
    printf("População: %i\n", população);
    printf("Área: %f\n", Área);
    printf("O PIB é: %f\n", PIB);
    printf("A quantidade de pontos turisticos é: %i\n", Num_Pontos_turisticos)

    return 0;
}
