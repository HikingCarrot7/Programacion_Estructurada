#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Se llevar� a cabo en la Universidad el concurso Srita. Simpat�a.
Existen dos candidatas: Hortencia y Anacreta. E.P. que lea el voto de
los 500 alumnos y que determine e imprima el nombre de la ganadora.
Considerar la posibilidad de votos nulos y empate en el concurso.*/
//Autor: Punto C
//Fecha: 17/02/19
//Ejercicio numero 48(Sin macros)
int main(int argc, char *argv[]) {
	char Voto[10];//Declaracion de variables
	int Nvoto;
	int Vhortencia = 0;
	int Vanacreta = 0;
	int Vnulos = 0;
	int Cvotos = 0;
	for (Nvoto =1;Nvoto <= 5;Nvoto++){//inicio de bucle
		printf("Por favor introduzca su voto (Hortencia o Anacreta)  \n");
		printf("-Utilice inicial en mayusculas-  \n");
		scanf ("%s", Voto);//entrada
		system("cls");
		if (strcmp(Voto,"Hortencia")==0){//proceso
			Vhortencia++;
		}
		else if (strcmp(Voto,"Anacreta")==0){
			Vanacreta++;
		}
		else if (strcmp(Voto,"Hortencia")!=0 && strcmp(Voto,"Anacreta")!=0){
			Vnulos++;
		}
		printf("Gracias por su voto \n");
		Cvotos++;
	}
		
	if (Vhortencia > Vanacreta){//Salida
		printf("Su ganadora ha sido Hortencia!\n");
	}
	else if (Vhortencia < Vanacreta){
		printf ("Su ganadora ha sido Anacreta!\n");
	}
	else{
		printf ("Ha ocurrido un empate! Todos pierden\n");
	}
	printf("votos totales: %d \n", Cvotos);
	printf("votos para Hortencia: %d \n", Vhortencia);
	printf("votos para Anacreta: %d \n", Vanacreta);
	printf("votos nulos: %d \n", Vnulos);

	return 0;
}

