//https://github.com/jsrgodoy
#include <stdio.h> // Biblioteca padrão - Comando de entrada e saída.
#include <math.h> //Referência de biblioteca para cálculos http://linguagemc.com.br/a-biblioteca-math-h/
#include <locale.h> // Referencia de biblioteca para usar acentuação gráfica https://programacaopratica.com.br/2019/09/17/acentuacao-de-caracteres-em-c-com-locale-h/
int main()// Declaração da função para devolver algo do tipo inteiro
 { //Demais referências foram da Apostila Algoritmos e Programação Universidade LaSalle
setlocale (LC_ALL,"");// Referencia de biblioteca para usar acentuação gráfica https://programacaopratica.com.br/2019/09/17/acentuacao-de-caracteres-em-c-com-locale-h/
printf("Aluno Jeferson da Silveira Rosa - Análise e Desenvolvimento de Sistemas\nUniversidade LaSalle Polo Capão da Canoa - Matrícula 202221001");
int retor=1;//variável para estrutura de retorno da operação
int num1, num2;
while(retor==1)//Estrututa para retornar a operação
{
int raizQuadrada, soma, multiplicacao, divisao, subtracao, potenciacao;
printf("\n\n********  CALCULADORA BÁSICA ********");
printf("\n\n==>Escolha a operação, digite o número correspondente:\n\n 1 (Raíz Quadrada)\n 2 (Soma)\n 3 (Multiplicação)\n 4 (Divisão)\n 5 (Subtração)\n 6 (Potenciação)\n\n "); //Solicitando a operação ao usuário
// Referência para usar quebra de linha https://pt.stackoverflow.com/questions/474388/onde-usar-o-n-no-printf
scanf("%d", &raizQuadrada, &soma, &multiplicacao, &divisao, &subtracao, &potenciacao);
// Referência para usar Switch case http://linguagemc.com.br/o-comando-switch-case-em-c/
switch (raizQuadrada)//Usei Switch case para não usar tanto IF e ELSE, código fica mais limpo
{// Usei este tutorial para converter int para float https://social.msdn.microsoft.com/Forums/pt-BR/3ac45109-3bd3-4468-9d7a-3d9d45ff1de0/converter-int-para-float?forum=vscsharppt
	case 1: 
    	printf("\n***** Você escolheu Raíz Quadrada *****\n");
    	printf("\nDigite o número: ");
		scanf("%d", &num1);
		float raizQuadrada=sqrt((float)num1); // conveter int para float
		printf("Resultado: %.2f\n", raizQuadrada);
		break;	
	case 2:
		printf("\n***** Você escolheu a Soma *****\n");
		printf("\nDigite o primeiro número: ");
		scanf("%d", &num1);
		printf("Digite o segundo número: ");
		scanf("%d", &num2);
		soma=num1+num2;
		printf("Resultado: %d\n", soma);
		break;
    case 3:
		printf("\n***** Você escolheu a Multiplicação *****\n");
		printf("\nDigite o primeiro número: ");
		scanf("%d", &num1);
		printf("Digite o segundo número: ");
		scanf("%d", &num2);
		multiplicacao=num1*num2;
		printf("Resultado: %d\n", multiplicacao);
		break;
	case 4:
		printf("\n***** Você escolheu a Divisão *****\n");
		printf("\nDigite o primeiro número (Dividendo): ");
		scanf("%d", &num1);
		printf("Digite o segundo número (Divisor): ");
		scanf("%d", &num2);
		//este comando para resolver o erro do Divisor zero.
		while(num2==0){
			printf("\nNúmero inválido!\n");
		    printf("\nDigite um Divisor válido: ");
		    scanf("%d", &num2);	
		} 			
		float divisao= ((float)num1/num2); // converterint para float
		printf("Resultado: %.2f\n", divisao);
		break;
	case 5:
		printf("\n***** Você escolheu a Subtração *****\n");
		printf("\nDigite o primeiro número: ");
		scanf("%d", &num1);
		printf("Digite e segundo número: ");
		scanf("%d", &num2);
		subtracao=num1-num2;
		printf("Resultado: %d\n", subtracao);
		break;
	case 6:
		printf("\n***** Você escolheu a Potenciação *****\n");
		printf("\nDigite o número base: ");
		scanf("%d", &num1);
		printf("Digite o expoente: ");
		scanf("%d", &num2);
		potenciacao=pow(num1,num2); 
		printf("Resultado: %d\n", potenciacao);
		break;
   default: 
	printf("\nNúmero inválido...\n");

}

 printf("\nPara Retornar a operação tecle 1.\nPara finalizar tecle 2. ");
scanf("%d", &retor);
}
return 0;
}
