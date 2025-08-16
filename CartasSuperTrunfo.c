#include <stdio.h>

int main(){
// CARTA 1
char estado, codigoDaCarta[5], cidade[20];
int populacao, qtdPontosTuristicos;
float area, pib;

// CARTA 2
char Estado2, CodigoDaCarta[5], Cidade[20];
int Populacao, QtdPontosTuristicos;
float Area, Pib;

// ENTRADA CARTA 1
printf("INICIANDO CADASTRO DA PRIMEIRA CARTA\n");

printf("Digite uma letra de 'a' ao 'h' para representar um dos 8 estados: ");
scanf("%c", &estado);

printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
scanf("%s", codigoDaCarta);

printf("Nome da cidade: ");
scanf("%s", cidade);

printf("Numero de habitantes da cidade: ");
scanf("%d", &populacao);

printf("A área da cidade em quilômetros quadrados: ");
scanf("%f", &area);

printf("Produto interno bruto da cidade: ");
scanf("%f", &pib);

printf("Quantidade de pontos turísticos na cidade: ");
scanf("%d", &qtdPontosTuristicos);

printf("\nCADASTRO DA PRIMEIRA CARTA FINALIZADO\n\n");

// ENTRADA CARTA 2

printf("INICIANDO CADASTRO DA SEGUNDA CARTA\n");

printf("Digite uma letra de 'a' ao 'h' para representar os estados: ");
scanf("\n%c", &Estado2);

printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
scanf("%s", CodigoDaCarta);

printf("Nome da cidade: ");
scanf("%s", Cidade);

printf("Numero de habitantes da cidade: ");
scanf("%d", &Populacao);

printf("A área da cidade em quilômetros quadrados: ");
scanf("%f", &Area);

printf("Produto interno bruto da cidade: ");
scanf("%f", &Pib);

printf("Quantidade de pontos turísticos na cidade: ");
scanf("%d", &QtdPontosTuristicos);

printf("\nCADASTRO DE CARTAS FINALIZADO\n\n");

// SAIDA CARTA 1
printf("CARTA 1\n");
printf("Estado: %c\n", estado);
printf("Codigo  da carta: %s\n", codigoDaCarta);
printf("Nome da cidade: %s\n", cidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos turistico: %d\n\n", qtdPontosTuristicos);

// SAIDA CARTA 2
printf("CARTA 2\n");
printf("Estado: %c\n", Estado2);
printf("Codigo  da carta: %s\n", CodigoDaCarta);
printf("Nome da cidade: %s\n", Cidade);
printf("Populacao: %d\n", Populacao);
printf("Area: %.2f km²\n", Area);
printf("PIB: %.2f\n", Pib);
printf("Pontos turistico: %d\n\n", QtdPontosTuristicos);

return 0;

}