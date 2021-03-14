#include <stdio.h>
#include <math.h>
	
	int main(){
		float x, y;
		int escolha;
		int cont;
		
		do{
			//primeiro numero
			printf("Adicione o Primeiro Numero: ");
			scanf ("%f", &x);
			//segundo numero
			printf("Adicione o Segundo Numero: ");
			scanf ("%f", &y);
			//escolha da funcão matematica que o programa ira fazer
			printf("Escolha Uma Funcao:\n [1] Soma\n [2] Subtração\n [3]Divicao\n [4]Multiplicacao\n [5]Raiz Quadrada\n [6]Potenciacao\n [7]Log com base 10\n [8]seno\n [9]cosseno\n [10]tangente \n");
			scanf("%d", &escolha);
		
			//soma
			if(escolha == 1){
				float respsoma = x + y;
				printf("A soma de %.2f + %.2f eh igual: %.2f\n", x, y, respsoma);
			}
		
			//subtração
			if (escolha == 2){
				float respsub = x - y;
				printf("A subtração de %.2f - %.2f eh igual: %.2f\n", x, y, respsub);
			}
			//divisão
			if(escolha == 3){
				float respdiv = x / y;
				printf("A soma de %.2f / %.2f eh igual: %.2f\n", x, y, respdiv);
			}
			//multiplicação
			if(escolha == 4){
				float respmulti = x * y;
				printf("A soma de %.2f * %.2f eh igual: %.2f\n", x, y, respmulti);
			}
			//raiz quadrada
			if(escolha == 5){
				float respraiz1 = sqrt(x);
				float respraiz2 = sqrt(y);
				printf("A raiz do primeiro numero eh igual: %.2f\n A raiz do segundo numero eh igual: %.2f\n", respraiz1, respraiz2);
			}
			//potencia
			if(escolha == 6){
				int potencia;
				printf("Qual a potencia que vai elevar os numeros? \n");
				scanf("%d", &potencia);
				float resppoten1 = pow(x, potencia);
				float resppoten2 = pow(y, potencia);
				printf("A potencia do primeiro nuemro eh igual: %.2f\n A potencia do segundo nuemro eh igual: %.2f\n ", resppoten1, resppoten2);
			}
			//log10
			if(escolha == 7){
				float resplog101 = log10(x);
				float resplog102 = log10(y);
				printf("O log de base 10 do primeiro numero eh igual: %.2f\n O log de base 10 do segundo numero eh igual: %.2f\n", resplog101, resplog102);
			}
			//seno
			if(escolha == 8){
				float respsen1 = sin(x);
				float respsen2 = sin(y);
				printf("O seno do primeiro numero eh igual: %.2f\n O seno do segundo numero eh igual: %.2f\n", respsen1, respsen2);
			}
			//cosseno
			if(escolha == 9){
				float respcos1 = cos(x);
				float respcos2 = cos(y);
				printf("O cosseno do primeiro numero eh igual: %.2f\n O cosseno do segundo numero eh igual: %.2f\n", respcos1, respcos2);
			}
			//tangente
			if(escolha == 10){
				float resptan1 = tan(x);
				float resptan2 = tan(y);
				printf("A tangente do primeiro numero eh igual: %.2f\n A tangente do segundo numero eh igual: %.2f\n", resptan1, resptan2);
			}
		
			printf("deseja continua? (1) para sim e (2) para nao \n");
			scanf("%d", cont);
		}while (cont == 1);
		
		return 0;
	}
