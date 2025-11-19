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
    printf("Número de pontos turísticos: %i\n\n", Numero);

    // VARIÁVEIS CARTA 2
    char Estado2[20];
    char Codigo2[10];
    char Nome2[20];
    int Populacao2;
    float Area2;
    double PIB2;
    int Numero2;

    // LEITURA CARTA 2
    printf("Digite seu estado: \n");
    scanf(" %s",Estado2);
    

    printf("Digite o codigo da carta: \n");
    scanf(" %s",Codigo2);
    
    printf("Digite o Nome da cidade: \n");
    scanf(" %s",Nome2);
    
    printf("Digite a População: \n");
    scanf("%i",&Populacao2);
    
    printf("Digite a Área em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &Numero2);

    // IMPRIME CARTA 2

    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n",Codigo2);
    printf("Nome da cidade: %s\nPopulação: %i\n", Nome2, Populacao2);
    printf("Área: %.2fkm²\nPIB: %.2lf Bilhões de reais\n", Area2, PIB2);
    printf("Número de pontos turísticos: %i\n", Numero2);

    return 0;

    } 
