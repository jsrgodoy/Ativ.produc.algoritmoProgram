//https://github.com/jsrgodoy
#include <stdio.h> // Biblioteca padr�o - Comando de entrada e sa�da.
#include <math.h> //Refer�ncia de biblioteca para c�lculos http://linguagemc.com.br/a-biblioteca-math-h/
#include <locale.h> // Referencia de biblioteca para usar acentua��o gr�fica https://programacaopratica.com.br/2019/09/17/acentuacao-de-caracteres-em-c-com-locale-h/
int main()// Declara��o da fun��o para devolver algo do tipo inteiro
 { //Demais refer�ncias foram da Apostila Algoritmos e Programa��o Universidade LaSalle
setlocale (LC_ALL,"");// Referencia de biblioteca para usar acentua��o gr�fica https://programacaopratica.com.br/2019/09/17/acentuacao-de-caracteres-em-c-com-locale-h/
printf("Aluno Jeferson da Silveira Rosa - An�lise e Desenvolvimento de Sistemas\nUniversidade LaSalle Polo Cap�o da Canoa - Matr�cula 202221001");
int retor=1;//vari�vel para estrutura de retorno da opera��o
int num1, num2;
while(retor==1)//Estrututa para retornar a opera��o
{
int raizQuadrada, soma, multiplicacao, divisao, subtracao, potenciacao;
printf("\n\n********  CALCULADORA B�SICA ********");
printf("\n\n==>Escolha a opera��o, digite o n�mero correspondente:\n\n 1 (Ra�z Quadrada)\n 2 (Soma)\n 3 (Multiplica��o)\n 4 (Divis�o)\n 5 (Subtra��o)\n 6 (Potencia��o)\n\n "); //Solicitando a opera��o ao usu�rio
// Refer�ncia para usar quebra de linha https://pt.stackoverflow.com/questions/474388/onde-usar-o-n-no-printf
scanf("%d", &raizQuadrada, &soma, &multiplicacao, &divisao, &subtracao, &potenciacao);
// Refer�ncia para usar Switch case http://linguagemc.com.br/o-comando-switch-case-em-c/
switch (raizQuadrada)//Usei Switch case para n�o usar tanto IF e ELSE, c�digo fica mais limpo
{// Usei este tutorial para converter int para float https://social.msdn.microsoft.com/Forums/pt-BR/3ac45109-3bd3-4468-9d7a-3d9d45ff1de0/converter-int-para-float?forum=vscsharppt
	case 1: 
    	printf("\n***** Voc� escolheu Ra�z Quadrada *****\n");
    	printf("\nDigite o n�mero: ");
		scanf("%d", &num1);
		float raizQuadrada=sqrt((float)num1); // conveter int para float
		printf("Resultado: %.2f\n", raizQuadrada);
		break;	
	case 2:
		printf("\n***** Voc� escolheu a Soma *****\n");
		printf("\nDigite o primeiro n�mero: ");
		scanf("%d", &num1);
		printf("Digite o segundo n�mero: ");
		scanf("%d", &num2);
		soma=num1+num2;
		printf("Resultado: %d\n", soma);
		break;
    case 3:
		printf("\n***** Voc� escolheu a Multiplica��o *****\n");
		printf("\nDigite o primeiro n�mero: ");
		scanf("%d", &num1);
		printf("Digite o segundo n�mero: ");
		scanf("%d", &num2);
		multiplicacao=num1*num2;
		printf("Resultado: %d\n", multiplicacao);
		break;
	case 4:
		printf("\n***** Voc� escolheu a Divis�o *****\n");
		printf("\nDigite o primeiro n�mero (Dividendo): ");
		scanf("%d", &num1);
		printf("Digite o segundo n�mero (Divisor): ");
		scanf("%d", &num2);
		//este comando para resolver o erro do Divisor zero.
		while(num2==0){
			printf("\nN�mero inv�lido!\n");
		    printf("\nDigite um Divisor v�lido: ");
		    scanf("%d", &num2);	
		} 			
		float divisao= ((float)num1/num2); // converterint para float
		printf("Resultado: %.2f\n", divisao);
		break;
	case 5:
		printf("\n***** Voc� escolheu a Subtra��o *****\n");
		printf("\nDigite o primeiro n�mero: ");
		scanf("%d", &num1);
		printf("Digite e segundo n�mero: ");
		scanf("%d", &num2);
		subtracao=num1-num2;
		printf("Resultado: %d\n", subtracao);
		break;
	case 6:
		printf("\n***** Voc� escolheu a Potencia��o *****\n");
		printf("\nDigite o n�mero base: ");
		scanf("%d", &num1);
		printf("Digite o expoente: ");
		scanf("%d", &num2);
		potenciacao=pow(num1,num2); 
		printf("Resultado: %d\n", potenciacao);
		break;
   default: 
	printf("\nN�mero inv�lido...\n");

}

 printf("\nPara Retornar a opera��o tecle 1.\nPara finalizar tecle 2. ");
scanf("%d", &retor);
}
return 0;
}
