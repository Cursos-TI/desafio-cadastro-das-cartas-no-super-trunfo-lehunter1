#include <stdio.h>

int main() {
    int População, Pontos_turisticos;
    char Codigo_da_carta [5], Nome_da_cidade [50], Estado[10];
    float PIB, Area_por_Km;

printf("Digite o codigo da carta:\n");
scanf("%s", &Codigo_da_carta);

printf("Digite o nome do estado:\n");
scanf("%s", &Estado);

printf("Digite o nome da cidade:\n");
scanf("%s", &Nome_da_cidade);

printf("Digite o numero de habitantes da cidade:\n");
scanf("%d", &População);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &Pontos_turisticos);

printf("Digite a Area por Km da cidade:\n");
scanf("%f", &Area_por_Km);

printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB);

   printf("\nCodigo da carta: %s\nEstado: %s\nNome da cidade: %s\nPopulação: %d\nPontos turisticos: %d\nArea por km: %.0f\nPIB: %.2f\n", Codigo_da_carta, Estado, Nome_da_cidade, População, Pontos_turisticos, Area_por_Km, PIB);

return 0;
}
