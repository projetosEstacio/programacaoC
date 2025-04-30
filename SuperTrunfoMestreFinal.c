#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> // N�o foi ensinado em aula, como o resultado na tela fica feio quando h� acentos, pesquisei na internet como resolver isso.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
		
	char linha [60] = "====================================================="; //Imprime esta linha dupla
	
    // Atributos Pa�s 1: Brasil
    int populacao = 22000000;
    int area = 8224000;
    int pib = 2200000;
    int ptur = 50;
    int dp = 27;

    // Atributos Pa�s 2: Argentina
    int populacao2 = 110000000;
    int area2 = 5850000;
    int pib2 = 1750000;
    int ptur2 = 19;
    int dp2 = 18;

    int atributo1, atributo2;
    int val1_p1 = 0, val2_p1 = 0, val1_p2 = 0, val2_p2 = 0;
    int soma1 = 0, soma2 = 0;

    printf("Compara��o entre dois pa�ses: Brasil e Argentina\n");

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Popula��o\n");
	printf("2 - �rea Territorial\n");
	printf("3 - PIB\n");
	printf("4 - Pontos Tur�sticos\n");
	printf("5 - Densidade Demogr�fica\n");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo2 > 5) {
        printf("Atributo inv�lido...\n");
    }
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1 - Popula��o\n");
	printf("2 - �rea Territorial\n");
	printf("3 - PIB\n");
	printf("4 - Pontos Tur�sticos\n");
	printf("5 - Densidade Demogr�fica\n");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Atributo inv�lido ou repetido.\n");
        return 1;
    }

    // Atributo 1
    switch(atributo1){
    	case 1:
    		val1_p1 = populacao;
    		val1_p2 = populacao2;
    	break;
    	case 2:
    		val1_p1 = area;
    		val1_p2 = area2;
    	break;
    	case 3:
    		val1_p1 = pib;
    		val1_p2 = pib2;
    	break;
    	case 4:
    		val1_p1 = ptur;
    		val1_p2 = ptur2;
    	break;
    	case 5:
    		val1_p1 = populacao / area;
            val1_p2 = populacao2 / area2;
        break;
    	    		
	}
    // Atributo 2
    switch(atributo2){
    	case 1:
    		val2_p1 = populacao;
    		val2_p2 = populacao2;
    	break;
    	case 2:
    		val2_p1 = area;
    		val2_p2 = area2;
    	break;
    	case 3:
    		val2_p1 = pib;
    		val2_p2 = pib2;
    	break;
    	case 4:
    		val2_p1 = ptur;
    		val2_p2 = ptur2;
    	break;
    	case 5:
    		val2_p1 = populacao / area;
            val2_p2 = populacao2 / area2;
        break;
    	    		
	}

    // Mostrar valores
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n--- Atributos Escolhidos ---\n");
    printf("Brasil: %d e %d\n", val1_p1, val2_p1);
    printf("Argentina: %d e %d\n", val1_p2, val2_p2);

    // Soma total dos atributos escolhidos
    soma1 = val1_p1 + val2_p1;
    soma2 = val1_p2 + val2_p2;
	
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nSoma dos Atributos:\nBrasil: %d\nArgentina: %d\n", soma1, soma2);

	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\nResultado Final:\n");
   
    if (soma1 > soma2) {
    	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("Vencedor: Brasil\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    } else if (soma2 > soma1) {
    	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("Vencedor: Argentina\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    } else {
    	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("Empataram!\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }

    return 0;
}
