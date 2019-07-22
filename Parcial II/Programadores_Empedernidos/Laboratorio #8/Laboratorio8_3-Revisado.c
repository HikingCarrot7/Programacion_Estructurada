//Programa que lee 30 elementos de un vector y que imprime un vector con los n�meros positivos
//y uno con los numeros negativos.
//Autor: Programadores Empedernidos.
//Fecha: 08/03/19. Versi�n: 1.0

#include <stdio.h>
#define SIZE 10 //macros para el tama�o de los vectores.

int main(){
	int numeros[SIZE]; //vector principal.
	int positivos[SIZE]; //vector que guarda los n�meros postivos.
	int negativos[SIZE]; //vector que guarda los n�meros negativos.
	int contadorCeros=0; //contador de ceros.
	int i, j, k;
	
	for(i=0; i<SIZE; i++){ //Entrada de datos.
		printf("Digita el elemento no. %d> ", i+1);
		scanf("%d", &numeros[i]);
		
		negativos[i]=0; //Inicializaci�n de los vectores de elementos positivos y  de elementos negativos.
		positivos[i]=0;
		
		if(numeros[i]<0){ //Validaci�n y asignaci�n de elementos.
			negativos[i]=numeros[i];
		}else if(numeros[i]>0){
			positivos[i]=numeros[i];
		}else{
			contadorCeros++;
		}
	}
	printf("Vector con n\243meros positivos:\n"); //salida de datos
	for(j=0; j<SIZE; j++){
		if(positivos[j]==0){ //validaci�n de datos.
			printf(""); //si no hay datos ingresados en la posici�n j, es decir es 0, se imprime un espacio en blanco.
		}else{
			printf("%d\n", positivos[j]);
		}
	}
	printf("vector con n\243meros negativos:\n");
	for(k=0; k<SIZE; k++){
		if(negativos[k]==0){
			printf("");
		}else{
			printf("%d\n", negativos[k]);
		}
	}
	printf("Ingresaste %d ceros", contadorCeros); //Impresi�n de ceros ingresados por el usuario.
	return 0;
}

/*

------Revision-------
Nombre Equipo: Los Compiladores
Revisado por: Chan Chan Norely
Fecha: 11/03/2019
Descripci�n: El programa funciona correctamente
me gusto porque al final agrega los venctores postiviso y los negativos
tambien tomaron en cuenta que el usuario ingresara el numero 0 y ustedes imprimieron ese dato,
donde dicen cuantos ceros se ingresaron

*/
