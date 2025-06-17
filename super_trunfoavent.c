#include <stdio.h>

int main() {
    // Variáveis da Carta 1, aqui o algoritmo segue da mesma forma que no nivel novato
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1, aqui o algoritmo segue da mesma forma que no nivel novato
    printf("Cadastro da Carta 1:\n"); 
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo do PIB per capita (convertendo PIB de bilhões para reais) é uma nova variavel que será definida pela relação matemática de duas variáveis anteriores
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // float considera o restulado do calculo como possível numero quebrado
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2; // aqui a mesma coisa do caso acima

    // Exibição das cartas, aqui o algoritmo segue da mesma forma que no nivel novato 
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação baseada no PIB per capita
    printf("\n=============================\n"); // recurso de separação entre os prints, melhora da legibilidade
    printf("Comparacao de cartas (Atributo: PIB per capita):\n"); // inicia a linha de leitura deste tópico em questão
    printf("Carta 1 - %s: R$ %.2f\n", nomeCidade1, pibPerCapita1); // resgata valores relacionados a variáveis declaradas anteriormente, para exibir a comparação de nome da cidade e pib per capita
    printf("Carta 2 - %s: R$ %.2f\n", nomeCidade2, pibPerCapita2); // mesma coisa aqui

    if (pibPerCapita1 > pibPerCapita2) { // sinaliza pra linguagem c o inicio de uma comparação, carta 1 caso vença
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1); // exibe essa carta como vencedora caso o calculo esteja de acordo
    } else if (pibPerCapita2 > pibPerCapita1) { // continuação da comparação, para exibir o vencedor caso ele seja a carta 2
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2); // exibe essa carta como vencedora caso o calculo esteja de acordo
    } else {
        printf("Resultado: Empate!\n"); // um porém que define empate caso o calculo resulte na igualdade do pibpercapita
    }

    // Pausar antes de encerrar
    printf("\nPressione ENTER para sair...");
    getchar(); // limpar buffer
    getchar(); // aguardar enter

    return 0;
}
