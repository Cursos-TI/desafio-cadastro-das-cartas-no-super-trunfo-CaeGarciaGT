#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo \n");


    char estado;
    char codigo[3];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int npt;

    //
    printf("- Preencha a Primeira Carta - \n");

    printf("Digite um estado: \n");
    scanf("%c", &estado);

    printf("Digite o código do estado: \n");
    scanf("%s", &codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt);

    printf("Carta 1 \n");

    printf("Estado: %c \n", estado);
    printf("Código: %c%s \n", estado,codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", npt);

    //
    printf("\n- Preencha a Segunda Carta  - \n");

    printf("Digite um estado: \n");
    scanf("%c", &estado);

    printf("Digite o código do estado: \n");
    scanf("%s", &codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt);

    printf("Carta 2 \n");
 
    printf("Estado: %c \n", estado);
    printf("Código: %c%s \n", estado,codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", npt);

    return 0;

}