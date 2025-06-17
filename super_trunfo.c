#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {
    // Variáveis da carta 1 (declara valores para o programa e caracteristicas da carta)
    char estado1; // Uma letra de A a H
    char codigo1[4]; // Exemplo: A01 (letra do estado + 2 números de 01 a 04 + '\0')
    char nomeCidade1[50]; // Nome da cidade
    int populacao1; // numero inteiro aqui
    float area1; // numero quebrado aqui
    float pib1; // numero quebrado aqui 
    int pontosTuristicos1; // numero inteiro aqui

    // Variáveis da carta 2 (repete a mesma logica da carta 1 acima)
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1, printf exibe no terminal junto com scanf para preencher dados
    printf("Cadastro da Carta 1:\n"); // pula uma linha no terminal para preencher a linha e o dado abaixo
    printf("Digite o Estado (A-H): "); // cursor cai aqui como planejado para o preenchimento
    scanf(" %c", &estado1); // scanf recebe dados do teclado para a variavel estado1

    printf("Digite o Codigo da Carta (Ex: A01): "); // cursor cai aqui
    scanf("%s", codigo1); // recebe dados do teclado para a variavel codigo1

    printf("Digite o Nome da Cidade: "); // cursor aqui
    scanf(" %[^\n]", nomeCidade1); // recebe dados do teclado para a variavel nome da cidade1

    printf("Digite a Populacao: "); // cursor aqui
    scanf("%d", &populacao1); // recebe dados do teclado para a variavel populacao 1

    printf("Digite a Area (em km^2): "); // cursor aqui
    scanf("%f", &area1); // recebe dados do teclado para a variavel area1

    printf("Digite o PIB (em bilhoes de reais): "); // cursor aqui
    scanf("%f", &pib1); // recebe dados do teclado para a variavel pib1

    printf("Digite o Numero de Pontos Turisticos: "); // cursor aqui
    scanf("%d", &pontosTuristicos1); // recebe dados do teclado para a variavel pontos turisticos1

    // Cadastro da Carta 2 (repete a mesma logica do cadastro da carta 1 acima)
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km^2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Impressão formatada das cartas, exibe as cartas prontas de acordo com o algoritmo anterior
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Área: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=============================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\n=============================\n");

    getchar(); 
    getchar(); 

    return 0; // Fim do programa
}