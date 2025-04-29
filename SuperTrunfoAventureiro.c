#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> // Não foi ensinado em aula, como o resultado na tela fica feio quando há acentos, pesquisei na internet como resolver isso.

int main()
{
	setlocale(LC_ALL, "Portuguese");
		
	char linha [60] = "====================================================="; //Imprime esta linha dupla
	
//Declaracao de variaveis
    // Carta 1
     char pais[50]; // nome do pais, não sei porque o comprimento dessa string tem que ser grande para não imprimir caracter estranho 
	 int populacao; //Numero de habitantes
	 float area; //Area territorial
	 float pib; //PIB da cidade
	 int ptur; // Quantidade de pontos turistico
	 float dp; //Densidade populacional
	 // Carta 2
     char pais2[80]; // nome do pais	
	 int populacao2; //Numero de habitantes
	 float area2; //Area territorial
	 float pib2; //PIB da cidade
	 int ptur2; // Quantidade de pontos turistico
	 float dp2; //Densidade populacional
	 
	 int opcao1;
	 int opcao2;
	 //=======================================================================
	 // Coletando dados     
     //=======================================================================
     	
 	 //MENU DE COMPARAÇÃO
	printf("%s", linha);
	printf("\n      MENU DE COMPARAÇÃO ENTRE CARTAS DE DOIS PAISES \n");
	printf("%s\n", linha);
	 
	printf("1 - População\n"); // População do país
	printf("2 - Área territorial\n"); //Área territorial do país
	printf("3 - PIB\n"); // Produto interno bruto
	printf("4 - Pontos turísticos\n"); // Pontos turísticos do pais
	printf("5 - Densidade demográfica\n"); // Densidade demográfica do país
	
	
			
	printf("Entre com o primeiro pais:\n"); //Nome de um pais
	scanf("%s", &pais);
	printf("Entre com o segundo pais:\n"); //Nome de outro pais
	scanf("%s", &pais2);
	
	printf("Escolha uma opção:\n"); // Escolha de uma opção entre a 5
	scanf("%d", &opcao1);
	
			
			
	switch(opcao1){
	case 1: // Comparando a população
		printf("Entre com a população:%s\n", pais);
		scanf("%d", &populacao);
		printf("Entre com a população:%s\n", pais2);
		scanf("%d", &populacao2);
		if(populacao > populacao2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2d Hab. é maior que a poupulação de %s: %.2d Hab.\n", pais, populacao, pais2, populacao2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(populacao2 > populacao){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2d Hab. é maior que a população de %s: %.2d Hab. \n", pais2, populacao2, pais, populacao);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem a mesma população");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
		
	case 2: // Comparando a área territorial
		printf("Entre com a área territorial do %s:\n", pais);
		scanf("%f", &area);
		printf("Entre com a área territorial do %s:\n", pais2);
		scanf("%f", &area2);
		if(area > area2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f km² é maior que área territorial de %s: %.2f km²\n", pais, area, pais2, area2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(area2 > area){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f km² é maior que área territorial de %s: %.2f km²\n", pais2, area2, pais, area);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem a mesma área territorial");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
	case 3: // Comparando o PIB
		printf("Entre com o PIB do %s:\n", pais);
		scanf("%f", &pib);
		printf("Entre com PIB do %s:\n", pais2);
		scanf("%f", &pib2);
		if(pib > pib2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.0f $ PIB é maior que o PIB de %s: %.0f $\n", pais, pib, pais2, pib2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(pib2 > pib){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.0f $ PIB é maior que o PIB de %s: %.0f $\n", pais2, pib2, pais, pib);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem PIB");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
	case 4: // Comparando pontos turísticos
		printf("Entre com a quantidade de pontos turísticos do %s:\n", pais);
		scanf("%d", &ptur);
		printf("Entre com a quantidade de pontos turísticos do %s:\n", pais2);
		scanf("%d", &ptur2);
		if(ptur > ptur2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %d pontos turísticos, é maior que pontos turístico de %s: %d pontos\n", pais, ptur, pais2, ptur2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(ptur2 > ptur){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %d pontos turísticos, é maior que pontos turístico de %s: %d pontos\n", pais2, ptur2, pais, ptur);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem o mesmo número de pontos turísticos");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
	case 5: // Comparando densidade demográfica
		printf("Entre com a população:%s\n", pais);
		scanf("%d", &populacao);
		printf("Entre com a população:%s\n", pais2);
		scanf("%d", &populacao2);
		printf("Entre com a área territorial do %s:\n", pais);
		scanf("%f", &area);
		printf("Entre com a área territorial do %s:\n", pais2);
		scanf("%f", &area2);
		
		//Calculando a densidade demográfica
		dp = (float)populacao / area;
		dp2 = (float)populacao2 / area2;
		if(dp < dp2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f de hab/km, é menor que hab/km de %s: %.2f\n", pais, dp, pais2, dp2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(dp2 < dp){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f de hab/km, é menor que hab/km de %s: %.2f\n", pais2, dp2, pais, dp);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem a mesma densidade demográfica");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;		
	default:
		printf("Opção inválida");
	}
		return 0;
	
	
}

