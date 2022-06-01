#include <stdio.h>
#include <math.h>
float valor1, valor2, resultado;
int operador;

int main()
{
	printf("Bem Vindo a Calculadora\n");
	printf("------------------------------------------------------\n");
	printf("Entre com os valores:");
	scanf("%f",&valor1);
	scanf("%f",&valor2);
	printf("------------------------------------------------------\n");
	printf("1- Soma\n");
	printf("2- Subtração\n");
	printf("3- Divisao\n");
	printf("4- Multiplicação\n");
	printf("5- Divisao inteira\n");
	printf("6- Exponencial\n");
	printf("7- Resto de divisão\n");
	scanf("%d",&operador);
	printf("------------------------------------------------------\n");

	switch(operador){
		case(1):
			resultado=valor1+valor2;
			printf("Resultado:%2.f\n",resultado );
			break;

		case(2):
			resultado = valor1 - valor2;
			printf("Resultado:%2.f\n",resultado );
			break;

		case(3):
			resultado = valor1 / valor2;
			printf("Resultado: %2.f", resultado);
			break;

		case(4):
   			resultado=valor1*valor2;
    		printf("Resultado:%2.f",resultado );
   
			break;

		case(5):
			break;

		case(6):
			resultado=pow(valor1,valor2);
			printf("Resultado:%2.f\n",resultado );
			break;
		case(7):
			resultado = (int)valor1 % (int)valor2;
			printf("Resultado: %2.f\n",resultado );
			break;
		default:
			printf("Operação inválida!\n");
			break;
			
	}

	
	return 0;
}
