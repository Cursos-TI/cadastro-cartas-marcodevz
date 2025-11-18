#include <stdio.h>


int main() {
    // VARIÁVEIS CARTA 1
    char Estado[50];
    char Codigo[4];
    char Nome[30];
    int Populacao;
    float Area;
    double PIB;
    int Numero;

    // LEITURA CARTA 1
    printf("Digite seu estado: \n");
    scanf(" %s",Estado);
    

    printf("Digite o codigo da carta: \n");
    scanf(" %s",Codigo);
    
    printf("Digite o Nome da cidade: \n");
    scanf(" %s",Nome);
    
    printf("Digite a População: \n");
    scanf("%i",&Populacao);
    
    printf("Digite a Área em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &Numero);

    // IMPRIME CARTA 1

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n",Codigo);
    printf("Nome da cidade: %s\nPopulação: %i\n", Nome, Populacao);
    printf("Área: %.2fkm²\nPIB: %.2lf Bilhões de reais\n", Area, PIB);
    printf("Número de pontos turísticos: %i\n", Numero);

    return 0;

    } 
