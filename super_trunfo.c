#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Programa para cadastrar e exibir dados de duas cartas de cidades.
// Cada carta contém: estado, código, nome da cidade, população,
// área, PIB e número de pontos turísticos. O objetivo é treinar
// entrada de dados e exibição formatada usando printf/scanf.

int main() {
   // VARIÁVEIS CARTA 1

   char Estado[50]; // Armazena o nome do estado da primeira carta
   char Codigo[4]; // Código identificador da carta (ex: A01)
   char Cidade[30]; // Nome da cidade
   unsigned long int Populacao; // População total da cidade
   float Area; // Área da cidade em km²
   double PIB; // Produto interno bruto (em bilhões de reais)
   int Numero; // Número de pontos turísticos da cidade
   float Densidade; // Calcula a Densidade Populacional
   float PIBPERCAPITA; // Calcula o PIB per capita da cidade.
   float SuperPoder; // soma todos os atributos númericos.
   int escolhajogador1;


   // LEITURA CARTA 1
   // Cada printf solicita um dado e cada scanf armazena na variável
   // correspondente.

   printf("Digite seu estado: \n");
   scanf(" %20[^\n]",Estado);
  
   printf("Digite o codigo da carta: \n");
   scanf(" %s",Codigo);
  
   printf("Digite o Nome da cidade: \n");
   scanf(" %s",Cidade); // Uso da variável Cidade
  
   printf("Digite a População: \n");
   scanf("%lu",&Populacao);
  
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
   printf("Nome da cidade: %s\nPopulação: %lu\n", Cidade, Populacao);
   printf("Área: %.2fkm²\nPIB: %.2lf Bilhões de reais\n", Area, PIB);
   printf("Número de pontos turísticos: %i\n", Numero);

   Densidade = (float)((double)Populacao/Area);
   printf("Densidade Populacional: %.2f Hab/km²\n",Densidade);

   PIBPERCAPITA = (float) (PIB/Populacao);
   printf("PIB per Capita: %.2f reais\n\n", PIBPERCAPITA);

   SuperPoder = Populacao + Area + PIB + Numero + PIBPERCAPITA + (1.0f / Densidade);
   printf("Super Poder: %.2f\n\n", SuperPoder);
  
   // VARIÁVEIS CARTA 2
   // São as mesmas da carta 1, porém separadas para armazenar
   // dados independentes.

   char Estado2[20];
   char Codigo2[10];
   char Cidade2[20];
   unsigned long int Populacao2;
   float Area2;
   double PIB2;
   int Numero2;
   float Densidade2; // Calcula a Densidade Populacional
   float PIBPERCAPITA2; // Calcula o PIB per capita da cidade.
   float SuperPoder2; // soma todos os atributos númericos.
   int escolhajogador2;

   // LEITURA CARTA 2
   // Processo idêntico ao anterior, porém armazenado em novas variáveis.

   printf("Digite seu estado: \n");
   scanf(" %20[^\n]",Estado2);
  
   printf("Digite o codigo da carta: \n");
   scanf(" %s",Codigo2);
  
   printf("Digite o Nome da cidade: \n");
   scanf(" %s",Cidade2);
  
   printf("Digite a População: \n");
   scanf("%lu",&Populacao2);
  
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
   printf("Nome da cidade: %s\nPopulação: %lu\n", Cidade2, Populacao2);
   printf("Área: %.2fkm²\nPIB: %.2lf bilhões de reais\n", Area2, PIB2);
   printf("Número de pontos turísticos: %i\n", Numero2);

   Densidade2 = (float)((double)Populacao2/Area2);
   printf("Densidade Populacional: %.2f Hab/km²\n",Densidade2);

   PIBPERCAPITA2 = (float) (PIB2/Populacao2);
   printf("PIB per Capita: %.2f reais\n\n", PIBPERCAPITA2);

   SuperPoder2 = Populacao2 + Area2 + PIB2 + Numero2 + PIBPERCAPITA2 + (1.0f / Densidade2);
   printf("Super Poder: %.2f\n\n", SuperPoder2);

   // ----------------------------------------------------------------
   //             🏆 NOVO MENU E LÓGICA DE COMPARAÇÃO 🏆
   // ----------------------------------------------------------------
   
    char *nome_atributo = ""; // Armazena o nome do atributo para exibição

    printf("\n============================================\n");
    printf("        🏆 SUPER TRUNFO - COMPARACAO 🏆      \n");
    printf("============================================\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade Demografica (ATENCAO: MENOR vence)\n");
    printf("--------------------------------------------\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolhajogador1);
    
    printf("\n");

    // ESTRUTURA SWITCH: Direciona a lógica de comparação
    switch (escolhajogador1) {
        case 1: // População (Maior vence)
            nome_atributo = "População";
            printf("Atributo escolhido: **%s**\n", nome_atributo);
            printf("Carta 1 (%s): %lu\n", Cidade, Populacao);
            printf("Carta 2 (%s): %lu\n", Cidade2, Populacao2);
            printf("Regra: MAIOR População vence.\n");

            // Lógica de Comparação IF-ELSE ANINHADA
            if (Populacao == Populacao2) {
                printf("Resultado: **Empate!**\n");
            } else {
                if (Populacao > Populacao2) {
                    printf("Resultado: **Carta 1** (%s) venceu!\n", Cidade);
                } else { 
                    printf("Resultado: **Carta 2** (%s) venceu!\n", Cidade2);
                }
            }
            break;
            
        case 2: // Área (Maior vence)
            nome_atributo = "Área";
            printf("Atributo escolhido: **%s**\n", nome_atributo);
            printf("Carta 1 (%s): %.2f km²\n", Cidade, Area);
            printf("Carta 2 (%s): %.2f km²\n", Cidade2, Area2);
            printf("Regra: MAIOR Área vence.\n");

            if (Area == Area2) {
                printf("Resultado: **Empate!**\n");
            } else {
                if (Area > Area2) {
                    printf("Resultado: **Carta 1** (%s) venceu!\n", Cidade);
                } else { 
                    printf("Resultado: **Carta 2** (%s) venceu!\n", Cidade2);
                }
            }
            break;

        case 3: // PIB (Maior vence)
            nome_atributo = "PIB";
            printf("Atributo escolhido: **%s**\n", nome_atributo);
            printf("Carta 1 (%s): %.2lf Bilhões\n", Cidade, PIB);
            printf("Carta 2 (%s): %.2lf Bilhões\n", Cidade2, PIB2);
            printf("Regra: MAIOR PIB vence.\n");

            if (PIB == PIB2) {
                printf("Resultado: **Empate!**\n");
            } else {
                if (PIB > PIB2) {
                    printf("Resultado: **Carta 1** (%s) venceu!\n", Cidade);
                } else { 
                    printf("Resultado: **Carta 2** (%s) venceu!\n", Cidade2);
                }
            }
            break;

        case 4: // Número de pontos turísticos (Maior vence)
            nome_atributo = "Número de pontos turísticos";
            printf("Atributo escolhido: **%s**\n", nome_atributo);
            printf("Carta 1 (%s): %i\n", Cidade, Numero);
            printf("Carta 2 (%s): %i\n", Cidade2, Numero2);
            printf("Regra: MAIOR Número de pontos turísticos vence.\n");

            if (Numero == Numero2) {
                printf("Resultado: **Empate!**\n");
            } else {
                if (Numero > Numero2) {
                    printf("Resultado: **Carta 1** (%s) venceu!\n", Cidade);
                } else { 
                    printf("Resultado: **Carta 2** (%s) venceu!\n", Cidade2);
                }
            }
            break;

        case 5: // Densidade Demográfica (Menor vence - REGRA INVERTIDA)
            nome_atributo = "Densidade Demográfica";
            printf("Atributo escolhido: **%s**\n", nome_atributo);
            printf("Carta 1 (%s): %.2f Hab/km²\n", Cidade, Densidade);
            printf("Carta 2 (%s): %.2f Hab/km²\n", Cidade2, Densidade2);
            printf("Regra: **MENOR** Densidade Demográfica vence.\n");

            if (Densidade == Densidade2) {
                printf("Resultado: **Empate!**\n");
            } else {
                // Lógica Invertida: se Densidade < Densidade2, Carta 1 vence.
                if (Densidade < Densidade2) {
                    printf("Resultado: **Carta 1** (%s) venceu com o MENOR valor!\n", Cidade);
                } else {
                    printf("Resultado: **Carta 2** (%s) venceu com o MENOR valor!\n", Cidade2);
                }
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            break;
    }
    
    printf("\n============================================\n");
  
    return 0 ; // Indica que o programa finalizou sem erros
}