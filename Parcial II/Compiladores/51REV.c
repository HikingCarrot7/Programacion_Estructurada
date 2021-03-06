#include <stdio.h>
#include <stdlib.h>

/*
51.E.P que lea un vector de n elementos y que calcule e imprima su sumatoria
Elabor�:Los compiladores
Ciclo utilizado: while
Fecha:9/Marzo/2019
Versi�n 1.0

*/

int main() {
	float m,validacion,valor;//variables usadas para la lectura del n�mero de elementos a leer y para verificar que la validacion del valor ingresado no sea de tipo flotante.
	int n,x,band1,band2;
	band1=band2=1;//indican si el valor ingresado es de tipo flotante o negativo para el numero de elementos a leer
	x=0;//variable destinada para la conversion de tipo flotante a entero,posteriormente, asignar ese valor entero al tama�o del vector
		
	//Entrada
	printf("\n Ingrese el n%cmero de elementos que desea ingresar: ",163);//se pide ingresar el
	scanf("%f",&m);
	valor=(int)m;//convertimos el valor de tipo flotante a entero, para despues verificar que no sea decimal
	validacion=m-valor;//se comprueba que el valor ingresado sea entero
	
	if(validacion>0 ){//si el valor no es entero la bandera 2 toma el valor de 0
		band2=0;
	}
	if(m<0){//si el valor ingresado es negativo la bandera 1 toma el valor de 0
		band1=0;
	}
	
	//Validacion de datos, se comprueba que el el numero de los elementos a leer sea de tipo entero y positivo
	while(band2==0 || band1==0){//si alguna de las dos banderas vale 0, se pedira ingresar los valores nuevamente
		printf("\n ***El valor ingresado no es valido***");
		printf("\n Ingrese solo valores enteros positivos");
		printf("\n ingrese el n%cmero de elementos que desea ingresar: ",163);
		
		scanf("%f",&m);
		validacion=0;
		valor=(int)m;
		validacion=m-valor;
		
		
		if(validacion==0){
			band2=1;
		}else band2=0;
		if(m>0){
			band1=1;
		}else band1=0;
	}
	x=(int)m;//convertimos el valor ingresado para el tama�o del arreglo en entero
	n=x;
	system("cls");//se limpia la pantalla
	
	//variables usadas para la lectura de los datos y la sumatoria de estos
	float elementos[n];
	float sumatoria_elementos;
	int contador;
	sumatoria_elementos=0;
	contador=1;
	//
	
	//PROCESO
	while(contador<=n){
		printf("\n Elemento %d",contador);
		printf("\n Ingrese el valor: ");
		scanf("%f",&elementos[contador]);
		sumatoria_elementos+=elementos[contador];
		system("cls");
		contador++;
	}
	//SALIDA
	printf("\n La sumatoria de los %d elementos ingresados es: %.2f",n,sumatoria_elementos);
	
	return 0;
}
/*Revisado por: Equipo Picateclas
Observaciones: He ingresado el tama�o del vector y sus elementos, funciona correctamente
Estatus: Working
*/
