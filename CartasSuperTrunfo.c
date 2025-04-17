#include <stdio.h>

int main() {
    //Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Sao_Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio_de_Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    printf("\nCarta 1 \n");
    printf("ESTADO: 1\n", estado1);
    printf("CODIGO: A01\n", codigo1);
    printf("CIDADE: SAOPAULO\n", nomeCidade1);
    printf("POPULAÇAO: 12325000\n", populacao1);
    printf("AREA: 1521.11km²\n", area1);
    printf("PIB:699.28\n", pib1);
    printf("PONTOS TURISTICO: %d\n", pontosTuristicos1);


    printf("\nCarta 2 \n");
    printf("Estado: B\n", estado2);
    printf("Código: B2\n", codigo2);
    printf("Cidade: RIODEJANEIRO\n", nomeCidade2);
    printf("População: 6748000 \n", populacao2);
    printf("Área:1200.25km²\n", area2);
    printf("PIB: 300.50 \n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;

    
}
