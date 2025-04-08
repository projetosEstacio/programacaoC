/* Programa de cartas para informar dados de algumas cidades 
do Brasil. 
*/

#include <stdio.h>

int main()
{
	char linha [60] = "=====================================================\n";
	
	printf("%s", linha);
	printf("DADOS DA CARTA 1            DADOS DA CARTA 2\n");
	printf("Estado: AL                   Estado: BA\n");
	printf("Codigo: A01                 Codigo: B05\n"); 
	printf("Nome da Cidade: Maceio      Nome da Cidade: Salvador\n"); 
	printf("Populacao: 957.916 hab.     Populacao: 2.418.000 hab\n");
	printf("Area: 509.600 Km2           Area: 693.442 km2\n");   
	printf("PIB: R$ 27.484.016,31       PIB: R$ 62.954.487.49\n");
	printf("Pontos turisticos: 30       Pontos turisticos: 60\n");
	printf("%s", linha);
	
//Declaracao de variaveis
    // Carta 1
	 char estado[3]; //Letra correspondente ao ao estado
	 char codigo[4]; //Codigo da carta
	 char cidade[10]; //Nome da cidade
	 //float populacao; //Numero de habitantes
	 unsigned long int populacao; //Numero de habitantes
	 float area; //Area territorial
	 float pib; //PIB da cidade
	 int ptur; // Quantidade de pontos turistico
	 float dp; //Densidade populacional
	 float pibper; //Pib per capita
	 float SuperPoder; //Poder da carta1
	 
	 //=======================================================================
	 // Carta 2
	 char estado2[3]; //Letra correspondente ao ao estado
	 char codigo2[4]; //Codigo da carta
 	 char cidade2[10]; //Nome da cidade
	 //float populacao2; //Numero de habitantes
	 unsigned long int populacao2; //Numero de habitantes
	 float area2; //Area territorial
	 float pib2; //PIB da cidade
	 int ptur2; // Quantidade de pontos turistico
 	 float dp2; //Densidade populacional
	 float pibper2; //Pib per capita
	 float SuperPoder2; //Poder da carta2
     
     //=======================================================================
 	 //Entrada de dados

	printf("\nEntrada de dados da Carta 1:\n");
	 
	printf("Entre com o estado:"); //Coleta a letra do estado
	scanf("%2s", estado);
	
	printf("\n"); //Salta uma linha
	
	printf("Entre como o codigo da carta:"); //Coleta o código da carta
	scanf("%3s", codigo);
	
	printf("\n"); //Salta uma linha
	
	printf("Entre com o nome da cidade:"); //Coleta o nome da cidade
	scanf("%s",cidade);
		
	 printf("\n"); 
		
	 printf("Entre com a populacao da cidade: "); //Coleta a população da cidade
	 scanf("%lu", &populacao);
		
	 printf("\n"); 
		
	 printf("Entre com a a area territorial da cidade: "); //Coleta a área territorial da cidade
	 scanf("%f", &area);
		
	 printf("\n"); 
		
	 printf("Entre com o PIB da cidade: "); //Coleta o PIB da cidade
	 scanf("%f", &pib);
		
	 printf("\n"); 
		
	 printf("Entre com a quantidade de pontos turiristicos: "); //Coleta a quantidade de pontos turisticos da cidade
	 scanf("%i", &ptur);
		
	 printf("\n"); 
	
	 //==============================================================================
	 printf("\nEntrada de dados da Carta 2:\n");
	 
	 printf("Entre com o estado:"); //Coleta a letra do estado
	 scanf("%2s", estado2);
		
	 printf("\n"); 
	
	 printf("Entre como o codigo da carta:");
	 scanf("%3s", codigo2);
	
	 printf("\n"); 
	
	 printf("Entre com o nome da cidade:");
	 scanf("%s",cidade2); 
		
	 printf("\n"); 
		
	 printf("Entre com a populacao da cidade: ");
	 scanf("%lu", &populacao2);
		
	 printf("\n"); 
		
	 printf("Entre com a a area territorial da cidade: ");
	 scanf("%f", &area2);
		
	 printf("\n"); 
		
	 printf("Entre com o PIB da cidade: ");
	 scanf("%f", &pib2);
		
	 printf("\n"); 
		
	 printf("Entre com a quantidade de pontos turiristicos: ");
	 scanf("%i", &ptur2);
		
	 printf("\n"); 
//	 printf("Codigo do Estado carta 1: %s\n", estado);
//     printf("Codigo da Carta 1: %s\n", codigo);
//	 printf("Nome da cidade da carta 1: %s\n", cidade);
//	 printf("\n", linha);
//	 
//	 printf("Codigo do Estado carta 2: %s\n", estado2);
//     printf("Codigo da Carta 2: %s\n", codigo2);
//	 printf("Nome da cidade da carta 2: %s\n", cidade2);
	 //======================================================================
	 //COMPARATIVO ENTRE AS CARTAS
	 //======================================================================
	 printf("%s\n", linha);
	 printf("COMPARATIVO ENTRE AS CARTAS\n");
	 printf("%s\n", linha);
//	 printf("Resultado com valor 1 = vencedor, 0 = perdedor, exceto densidade populacional\n");
//	 printf("OBS: Comparacao sempre e Carta 1 maior ou menor que carta 2\n");
//	 printf("%s\n", linha);
//	 //POPULACAO
//	 printf("A populacao carta 1 e: %lu\n", populacao);
//	 printf("A populacao2 carta 2 e: %lu\n", populacao2);
//	 printf("Comparacao do Resultado da populacao: %d\n", (float)populacao > (float)populacao2);
//	 printf("%s\n", linha);
//	 //AREA
//	 printf("A area carta 1 e: %.0f\n", area);
//	 printf("A area carta 2 e: %.0f\n", area2);
//	 printf("Comparacao do Resultado da area: %d\n", area > area2);
//	 printf("%s\n", linha);
//	 //PIB
//	 printf("O PIB carta 1 e: %.2f\n", pib);
//	 printf("O PIB carta 2 e: %.2f\n", pib2);
//	 printf("Comparacao do Resultado do PIB: %d\n", pib > pib2);
//	 printf("\n", linha);
//	 //PONTO TURISTIO
//	 printf("O Ponto turistico carta 1 e: %i\n", ptur);
//	 printf("O Ponto turistico carta 2 e: %i\n", ptur2);
//	 printf("Comparacao do Resultado do ponto turistico: %d\n", ptur > ptur2);
//	 printf("%s\n", linha);
//	 //DENSIDADE DEMOGRAFICA
//	 printf("A Densidade demografica carta 1 e: %.2f\n", (float)populacao / area);
//	 printf("O Densidade demografica carta 2 e: %.2f\n", (float)populacao2 / area2);
//	 printf("Comparacao do resultado da densidade demografica: %d\n", ((float)populacao / area > (float)populacao2 / area2));
//	 printf("%s\n", linha);
//	 //RENDA PERCAPTA
//	 printf("A renda per capita carta 1 e: %.2f\n", pib / (float)populacao);
//	 printf("O renda per capita carta 2 e: %.2f\n", pib2 / (float)populacao2);
//	 printf("Comparacao do resultado da renda per capita: %d\n", ((float)populacao > pib / (float)populacao2));
//	 printf("%s\n", linha);
//	 //SUPER PODER
//	 printf("Super Poder carta 1 e: %.2f\n", (float)populacao + area + pib + ptur + (pib / (float)populacao) + (1 / ((float)populacao / area)));
//	 printf("Super Poder carta 2 e: %.2f\n", (float)populacao2 + area2 + pib2 + ptur2 + (pib2 / (float)populacao2) + (1 / ((float)populacao2 / area2)));
//	 printf("Comparacao do resultado do Super Poder: %d\n", (float)populacao + area + pib + ptur + (pib / (float)populacao) + (1 / ((float)populacao / area))
//	        > (float)populacao2 + area2 + pib2 + ptur2 + (pib2 / (float)populacao2) + (1 / ((float)populacao2 / area2)));
//	 printf("%s\n", linha);
//	 printf("OBS: A soma do Super Poder no excel deu diferente, não sei porque. Plataforma? ");
	
	//Comparando qual a população é maior 
	if((float)populacao > (float)populacao2){
		printf("Carta 1 - %s, (%s): %.0f\n", cidade, estado, (float)populacao ); //mostrando o resultado da comparação se for verdadeiro
		printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
	}
	else
		printf("Carta 2 - %s, (%s): %.0f\n", cidade2, estado2, (float)populacao2); //mostrando o resultado da comparação se for falso
		printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);	 
    return 0;


}

