/*54. E.P. que lea dos vectores de n elementos y que genere e imprima
un tercer vector con la suma de cada uno de los elementos de los dos
anteriores.*/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int NUM,i;
	printf("Especificar el tama�o del vector  ");
	scanf ("%d", &NUM);
	int vector1[NUM], vector2[NUM], vector3[NUM];
	i=0;
	do 
	{
		printf("Por favor, introduzca el n�mero: ");
		scanf ("%d", &vector1 [i] ) ;
		i++;
	} while (i<NUM);
	i=0;
    do
	{
		printf("Por favor, introduzca el n�mero de su segundo vector: ");
		scanf ("%d", &vector2 [i] ) ;
		i++;
	}while (i<NUM);
	i=0;
	do 
	{
		vector3[i]=vector1 [i] + vector2 [i];
		i++;
	}while (i<NUM);
	
	
	printf ("\n Nuevo Vector de n�meros : " ) ;//Salida
	for (int i= 0; i < NUM; i++)
	{
		printf ("%d ",vector3[i] ) ;
	}
	return 0;
}
/*
Revis�: Programadores Empedernidos.
-El c�digo cumple su funci�n.
-No se debe poner acentos en el printf, ya que muchos IDE no lo compilan adecuadamente.
-La declaraci�n de las variables iterativas deben estar fuera del for o que cada for tenga su propia variable ya que
muchos IDE no compilan adecuadamente de otra forma.
-Las variables tienen nombres representativos.
*/
