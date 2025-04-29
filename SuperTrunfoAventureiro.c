#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> // N�o foi ensinado em aula, como o resultado na tela fica feio quando h� acentos, pesquisei na internet como resolver isso.

int main()
{
	setlocale(LC_ALL, "Portuguese");
		
	char linha [60] = "====================================================="; //Imprime esta linha dupla
	
//Declaracao de variaveis
    // Carta 1
     char pais[50]; // nome do pais, n�o sei porque o comprimento dessa string tem que ser grande para n�o imprimir caracter estranho 
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
     	
 	 //MENU DE COMPARA��O
	printf("%s", linha);
	printf("\n      MENU DE COMPARA��O ENTRE CARTAS DE DOIS PAISES \n");
	printf("%s\n", linha);
	 
	printf("1 - Popula��o\n"); // Popula��o do pa�s
	printf("2 - �rea territorial\n"); //�rea territorial do pa�s
	printf("3 - PIB\n"); // Produto interno bruto
	printf("4 - Pontos tur�sticos\n"); // Pontos tur�sticos do pais
	printf("5 - Densidade demogr�fica\n"); // Densidade demogr�fica do pa�s
	
	
			
	printf("Entre com o primeiro pais:\n"); //Nome de um pais
	scanf("%s", &pais);
	printf("Entre com o segundo pais:\n"); //Nome de outro pais
	scanf("%s", &pais2);
	
	printf("Escolha uma op��o:\n"); // Escolha de uma op��o entre a 5
	scanf("%d", &opcao1);
	
			
			
	switch(opcao1){
	case 1: // Comparando a popula��o
		printf("Entre com a popula��o:%s\n", pais);
		scanf("%d", &populacao);
		printf("Entre com a popula��o:%s\n", pais2);
		scanf("%d", &populacao2);
		if(populacao > populacao2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2d Hab. � maior que a poupula��o de %s: %.2d Hab.\n", pais, populacao, pais2, populacao2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(populacao2 > populacao){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2d Hab. � maior que a popula��o de %s: %.2d Hab. \n", pais2, populacao2, pais, populacao);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem a mesma popula��o");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
		
	case 2: // Comparando a �rea territorial
		printf("Entre com a �rea territorial do %s:\n", pais);
		scanf("%f", &area);
		printf("Entre com a �rea territorial do %s:\n", pais2);
		scanf("%f", &area2);
		if(area > area2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f km� � maior que �rea territorial de %s: %.2f km�\n", pais, area, pais2, area2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(area2 > area){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f km� � maior que �rea territorial de %s: %.2f km�\n", pais2, area2, pais, area);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem a mesma �rea territorial");
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
			printf("%s: Venceu! %.0f $ PIB � maior que o PIB de %s: %.0f $\n", pais, pib, pais2, pib2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(pib2 > pib){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.0f $ PIB � maior que o PIB de %s: %.0f $\n", pais2, pib2, pais, pib);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem PIB");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
	case 4: // Comparando pontos tur�sticos
		printf("Entre com a quantidade de pontos tur�sticos do %s:\n", pais);
		scanf("%d", &ptur);
		printf("Entre com a quantidade de pontos tur�sticos do %s:\n", pais2);
		scanf("%d", &ptur2);
		if(ptur > ptur2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %d pontos tur�sticos, � maior que pontos tur�stico de %s: %d pontos\n", pais, ptur, pais2, ptur2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(ptur2 > ptur){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %d pontos tur�sticos, � maior que pontos tur�stico de %s: %d pontos\n", pais2, ptur2, pais, ptur);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem o mesmo n�mero de pontos tur�sticos");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;
	case 5: // Comparando densidade demogr�fica
		printf("Entre com a popula��o:%s\n", pais);
		scanf("%d", &populacao);
		printf("Entre com a popula��o:%s\n", pais2);
		scanf("%d", &populacao2);
		printf("Entre com a �rea territorial do %s:\n", pais);
		scanf("%f", &area);
		printf("Entre com a �rea territorial do %s:\n", pais2);
		scanf("%f", &area2);
		
		//Calculando a densidade demogr�fica
		dp = (float)populacao / area;
		dp2 = (float)populacao2 / area2;
		if(dp < dp2){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f de hab/km, � menor que hab/km de %s: %.2f\n", pais, dp, pais2, dp2);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else if(dp2 < dp){
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("%s: Venceu! %.2f de hab/km, � menor que hab/km de %s: %.2f\n", pais2, dp2, pais, dp);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}else{
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("Os dois paises tem a mesma densidade demogr�fica");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
	break;		
	default:
		printf("Op��o inv�lida");
	}
		return 0;
	
	
}

