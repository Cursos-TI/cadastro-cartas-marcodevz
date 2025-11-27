#include <stdio.h>

// Programa para cadastrar e exibir dados de duas cartas de cidades.
// Cada carta contém: estado, código, nome da cidade, população,
// área, PIB e número de pontos turísticos. O objetivo é treinar
// entrada de dados e exibição formatada usando printf/scanf.

int main() {
    // VARIÁVEIS CARTA 1

    char Estado[50]; // Armazena o nome do estado da primeira carta
    char Codigo[4]; // Código identificador da carta (ex: A01)
    char Nome[30]; // Nome da cidade
    int Populacao; // População total da cidade
    float Area; // Área da cidade em km²
    double PIB; // Produto interno bruto (em bilhões de reais)
    int Numero; // Número de pontos turísticos da cidade
    float Densidade; // Calcula a Densidade Populacional
    float PIBPERCAPITA; // Calcula o PIB per capita da cidade.


    // LEITURA CARTA 1
    // Cada printf solicita um dado e cada scanf armazena na variável
    // correspondente.

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
    // São exibidos todos os valores fornecidos pelo usuário,
    // com formatação (como duas casas decimais).

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n",Codigo);
    printf("Nome da cidade: %s\nPopulação: %i\n", Nome, Populacao);
    printf("Área: %.2fkm²\nPIB: %.2lf Bilhões de reais\n", Area, PIB);
    printf("Número de pontos turísticos: %i\n", Numero);
    Densidade = (float)(Populacao/Area);
    printf("Densidade Populacional: %.2f Hab/km²\n",Densidade);
    PIBPERCAPITA = (float) (PIB/Populacao);
    printf("PIB per Capita: %.2f reais\n\n", PIBPERCAPITA);
    
    // VARIÁVEIS CARTA 2
    // São as mesmas da carta 1, porém separadas para armazenar
    // dados independentes.

    char Estado2[20];
    char Codigo2[10];
    char Nome2[20];
    int Populacao2;
    float Area2;
    double PIB2;
    int Numero2;
    float Densidade2; // Calcula a Densidade Populacional
    float PIBPERCAPITA2; // Calcula o PIB per capita da cidade.

    // LEITURA CARTA 2
    // Processo idêntico ao anterior, porém armazenado em novas variáveis.

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
    // Exibe todos os valores coletados da segunda carta

    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n",Codigo2);
    printf("Nome da cidade: %s\nPopulação: %i\n", Nome2, Populacao2);
    printf("Área: %.2fkm²\nPIB: %.2lf bilhões de reais\n", Area2, PIB2);
    printf("Número de pontos turísticos: %i\n", Numero2);
    Densidade2 = (float)(Populacao/Area);
    printf("Densidade Populacional: %.2f Hab/km²\n",Densidade2);
    PIBPERCAPITA2 = (float) (PIB/Populacao);
    printf("PIB per Capita: %.2f reais\n\n", PIBPERCAPITA2);

    return 0; // Indica que o programa finalizou sem erros

    } 
