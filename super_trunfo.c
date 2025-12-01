#include <stdio.h>

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

   printf("\nComparação de Cartas:\n");

   // 1. População (Maior vence)
   int vencePopulacao = (Populacao > Populacao2);
   printf("População: Carta %i venceu (%i)\n", 2 - vencePopulacao, vencePopulacao);

   // 2. Área (Maior vence)
   int venceArea = (Area > Area2);
   printf("Área: Carta %i venceu (%i)\n", 2 - venceArea, venceArea);

   // 3. PIB (Maior vence)
   int vencePIB = (PIB > PIB2);
   printf("PIB: Carta %i venceu (%i)\n", 2 - vencePIB, vencePIB);

   // 4. Pontos Turísticos (Maior vence)
   int venceNumero = (Numero > Numero2);
   printf("Pontos Turísticos: Carta %i venceu (%i)\n", 2 - venceNumero, venceNumero);

   // 5. Densidade Populacional (Menor vence)
   int venceDensidade = (Densidade < Densidade2);
   printf("Densidade Populacional: Carta %i venceu (%i)\n", 2 - venceDensidade, venceDensidade);

   // 6. PIB per Capita (Maior vence)
   int vencePIBCapita = (PIBPERCAPITA > PIBPERCAPITA2);
   printf("PIB per Capita: Carta %i venceu (%i)\n", 2 - vencePIBCapita, vencePIBCapita);

   // 7. Super Poder (Maior vence)
   int venceSuperPoder = (SuperPoder > SuperPoder2);
   printf("Super Poder: Carta %i venceu (%i)\n", 2 - venceSuperPoder, venceSuperPoder);

   // Comparando cartas no Super Trunfo

   printf("Comparação de cartas (Atributo: População):\n\n");
  
   // Carta X - Cidade (Estado): Valor
   printf("Carta 1 - %s (%s): %lu\n", Cidade, Estado, Populacao);
   printf("Carta 2 - %s (%s): %lu\n", Cidade2, Estado2, Populacao2);

   // Estrutura IF-ELSE para determinar a vencedora
   // Regra: Para População, a carta com o maior valor vence.
   if (Populacao > Populacao2) {
       // Carta 1 venceu
       printf("Resultado: Carta 1 (%s) venceu!\n", Cidade);
   } else if (Populacao2 > Populacao) {
       // Carta 2 venceu
       printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
   } else {
       // Empate
       printf("Resultado: Empate! As populações são iguais.\n");
   }
  
  
   return 0 ; // Indica que o programa finalizou sem erros
}
