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

   // ------------------------------------------------------------------------------
    // --- LÓGICA DO NOVO DESAFIO MESTRE TEMA 3: DUPLO ATRIBUTO, SOMA E TERNÁRIO
    // -----------------------------------------------------------------------------
    
    int primeiroAtributo = 0; // Inicializamos com 0 para sinalizar que a escolha ainda não foi feita ou é inválida
    int segundoAtributo = 0;
    double valor1_c1 = 0, valor2_c1 = 0, valor1_c2 = 0, valor2_c2 = 0;
    double soma_c1 = 0, soma_c2 = 0;
    int resultadoVitoria = 0; // 1 se C1 venceu, 0 caso contrário
    int erroValidacao = 0; // Sinaliza 1 se houve erro

    // --- ESCOLHA DO PRIMEIRO ATRIBUTO ---
    printf("\n==================================================\n");
    printf("       🏆 RODADA DUPLO ATRIBUTO - ATRIBUTO 1 🏆\n");
    printf("==================================================\n");
    printf("Escolha o primeiro atributo.\n");
    printf("  [1] Populacao\n");
    printf("  [2] Area\n");
    printf("  [3] PIB\n");
    printf("  [4] Numero de pontos turisticos\n");
    printf("  [5] Densidade Populacional (MENOR vence)\n");
    printf("  [6] PIB per Capita\n");

    printf("Escolha o atributo (1-6): ");
    
    if (scanf("%d", &primeiroAtributo) != 1) {
        printf("\nERRO DE ENTRADA: Invalida! Sera considerado opcao '0'.\n");
        // O erro sera capturado no default do switch
    }

    // --- SWITCH PRINCIPAL (Mapeamento do Primeiro Atributo) ---
    switch (primeiroAtributo) {
        case 1: 
            valor1_c1 = (double)Populacao; 
            valor1_c2 = (double)Populacao2; 
            printf("Você escolheu o Atributo Populacao.\n");
            break;
        case 2: 
            valor1_c1 = Area; 
            valor1_c2 = Area2; 
            printf("Você escolheu o Atributo Area.\n");
            break;
        case 3: 
            valor1_c1 = PIB; 
            valor1_c2 = PIB2; 
            printf("Você escolheu o Atributo PIB.\n");
            break;
        case 4: 
            valor1_c1 = (double)Numero; 
            valor1_c2 = (double)Numero2; 
            printf("Você escolheu o Atributo Numero de pontos turisticos.\n");
            break;
        case 5: 
            valor1_c1 = Densidade; 
            valor1_c2 = Densidade2; 
            printf("Você escolheu o Atributo Densidade Populacional.\n");
            break;
        case 6: 
            valor1_c1 = PIBPERCAPITA; 
            valor1_c2 = PIBPERCAPITA2; 
            printf("Você escolheu o Atributo PIB per Capita.\n");
            break;
        default:
            printf("\nOpcao de primeiro atributo invalida!\n");
            erroValidacao = 1; // Sinaliza erro
            break;
    }

    // --- ESCOLHA DO SEGUNDO ATRIBUTO (DINÂMICO E ANINHADO) ---
    // Apenas tenta a segunda escolha se a primeira foi válida
    if (erroValidacao == 0) {
        printf("\n==================================================\n");
        printf("       🏆 RODADA DUPLO ATRIBUTO - ATRIBUTO 2 🏆\n");
        printf("==================================================\n");
        printf("Escolha o segundo atributo.\n");
        printf("ATENCAO: Você deve escolher um atributo diferente do primeiro.\n");
        
        // Exibição do menu dinâmico
        if (primeiroAtributo != 1) printf("  [1] Populacao\n");
        if (primeiroAtributo != 2) printf("  [2] Area\n");
        if (primeiroAtributo != 3) printf("  [3] PIB\n");
        if (primeiroAtributo != 4) printf("  [4] Numero de pontos turisticos\n");
        if (primeiroAtributo != 5) printf("  [5] Densidade Populacional (MENOR vence)\n");
        if (primeiroAtributo != 6) printf("  [6] PIB per Capita\n");

        printf("Escolha o atributo (1-6): ");
        
        if (scanf("%d", &segundoAtributo) != 1) {
            printf("\nERRO DE ENTRADA: Invalida! Sera considerado opcao '0'.\n");
            erroValidacao = 1;
        }

        // Validação aninhada
        if (segundoAtributo == primeiroAtributo) {
            printf("\nVocê escolheu o mesmo atributo! Comparacao nao sera realizada.\n");
            erroValidacao = 1;
        } else {
        // Mapeia o segundo atributo
        switch (segundoAtributo) {
            case 1: 
                valor2_c1 = (double)Populacao; 
                valor2_c2 = (double)Populacao2; 
                    printf("Você escolheu o Atributo Populacao.\n");
                    break;
            case 2: 
                valor2_c1 = Area; 
                valor2_c2 = Area2; 
                    printf("Você escolheu o Atributo Area.\n");
                    break;
            case 3: 
                valor2_c1 = PIB; 
                valor2_c2 = PIB2; 
                    printf("Você escolheu o Atributo PIB.\n");
                    break;
            case 4: 
                valor2_c1 = (double)Numero; 
                valor2_c2 = (double)Numero2; 
                    printf("Você escolheu o Atributo Numero de pontos turisticos.\n");
                    break;
            case 5: 
                valor2_c1 = Densidade; 
                valor2_c2 = Densidade2; 
                    printf("Você escolheu o Atributo Densidade Populacional.\n");
                    break;
            case 6: 
                    valor2_c1 = PIBPERCAPITA; 
                    valor2_c2 = PIBPERCAPITA2; 
                    printf("Você escolheu o Atributo PIB per Capita.\n");
                    break;
            default:
                    printf("\nOpcao de segundo atributo invalida!\n");
                    erroValidacao = 1;
                    break;
            }
        }
    }


    // --- DECISÃO FINAL (EXECUTADA APENAS SE NÃO HOUVE ERRO) ---
    printf("\n==================================================\n");
    if (erroValidacao == 1) {
        printf("         RESULTADO FINAL: JOGO CANCELADO\n");
        printf("         Motivo: Escolha(s) invalida(s).\n");
    } else {
        printf("         RESULTADO FINAL DA RODADA\n");
        
        // CÁLCULOS DA SOMA (executados com sucesso)
        soma_c1 = valor1_c1 + valor2_c1;
        soma_c2 = valor1_c2 + valor2_c2;

        // Operador ternário para determinar se C1 tem a maior soma (resultado = 1) ou não (resultado = 0)
        resultadoVitoria = (soma_c1 == soma_c2) ? 0 : (soma_c1 > soma_c2) ? 1 : 0;
        
        printf("--------------------------------------------------\n");
        printf("Soma da Carta 1 (%s): %.2f\n", Cidade, soma_c1);
        printf("Soma da Carta 2 (%s): %.2f\n", Cidade2, soma_c2);
        printf("--------------------------------------------------\n");

        // IF-ELSE final para tratar vitória ou derrota/empate
        if (soma_c1 == soma_c2)
        {
            printf("Resultado: **Empate!**\n");
        } 
        else if (resultadoVitoria == 1) 
        {
            printf("Parabéns, você venceu com a Carta 1 (%s)!\n", Cidade);
        } 
        else 
        {
            printf("Infelizmente, você perdeu. A Carta 2 (%s) venceu!\n", Cidade2);
        }
    }

    printf("==================================================\n");
  
    return 0 ; // Indica que o programa finalizou sem erros
}