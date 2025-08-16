#include <stdio.h>

int main(){
    char estado[1];
    char codigoDaCarta[2];
    char cidade[15];
    int populacao;
    float areaEmKm²;
    float pib;
    int qntPontosTuristicos;

    printf("Digite uma letra entre 'A' ao 'H': ");
    scanf("%s", estado);

    printf("\nDigite um numero entre '01' ao '04': ");
    scanf("%s", codigoDaCarta);

    printf("\nQual a cidade: ");
    scanf("%s", cidade);

    printf("\nNumero de habitantes na cidade: ");
    scanf("%d", &populacao);

    printf("\nArea da cidade em quilometros quadrado: ");
    scanf("%.2f", areaEmKm²);

    printf("\nProduto interno bruto da cidade: ");
    scanf("%f", pib);

    printf("\nQuantidade de pontos turisticos da cidade: ");
    scanf("%d", qntPontosTuristicos);

    
    printf("%f", areaEmKm²);














}
