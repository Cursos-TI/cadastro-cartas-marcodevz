#include <stdio.h>


int main() {
    char Estado[50];
    char Codigo[3];
    char Nome[30];
    int Populacao;
    float Area;
    float PIB;
    int Numero;

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
    scanf("%f", &PIB);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &Numero);
    
    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n",Codigo);
    printf("Nome da cidade: %s\n - População: %i\n", Nome, Populacao);
    printf("Área em km²: %f\n - PIB: %f\n", Area, PIB);
    printf("Número de pontos turísticos: %i\n", Numero);

    return 0;

    } 
