#include<stdio.h>
/*Autor: Jos� de la Rosa Baeza P�rez

Intoduccion: El programa va recibir un numero,
ya teniendo esto se analizara con un ciclo for
para luego determinar cuantos digitos tiene ese numeron*/
int main()
{
	/*Se definen las variables*/
	int numero,i=0,salida; /*variables
	
	Entrada*/
	printf("Ingrese el numero deseado \n");
	scanf("%d",&numero);
	
	/*Procedimiento*/
	do
	{
		numero=numero/10;/*Aqui se va dividiendo el numero para que la condicion se cumpla y asi hacer que este llegue a 0*/
		i=i+1;/*Este contados nos ayuda a saber cuandos digitos tiene el numero*/
	}
	while(numero!=0);/*La condicion para cerrar el ciclo*/
	salida=i;
	
	/*Salida: En este momento se imprime la variable la cual indica la cantidad de digitos que tiene dicho numero*/
	printf("La cantidad de digitos que tiene este numero es %d",salida);
	return(0);
}
