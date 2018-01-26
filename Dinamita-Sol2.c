#include <stdio.h>
/*Autor: José de la Rosa Baeza Pérez

Intoduccion: El programa va recibir un numero,
ya teniendo esto se analizara con un ciclo for
para luego determinar cuantos digitos tiene ese numero*/

int main(int argc, char *argv[]) {
	//Se definen las variables
	int numero,i=1,salida,n=1; //variables
	
	//Entrada
	printf("Ingrese el numero deseado \n");
	scanf("%i",&numero);
	
	//Procedimiento
	do
	{
		numero/=10;//Aqui se va dividiendo el numero para que la condicion se cumpla y asi hacer que este llegue a 0
		i++;//Este contados nos ayuda a saber cuandos digitos tiene el numero
	}
	while(numero==0);//La condicion para cerrar el ciclo
	salida=i;
	
	//Salida: En este momento se imprime la variable la cual indica la cantidad de digitos que tiene dicho numero
	printf("La cantidad de digitos que tiene este numero es %d",salida);
	
	return 0;
}

