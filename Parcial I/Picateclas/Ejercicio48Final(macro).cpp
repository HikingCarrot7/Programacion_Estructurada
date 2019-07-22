/*Programa: SritaSimpatia.C
Descripci�n: Lee el voto de los 500 alimnos e imprime el nombre de la ganadora. Acepta votos nulos y empate.
Autor: Picateclas
Fecha: 17/02/2019
Versi�n: 1.0
*/

#include <stdio.h>
#include <conio.h>

//Constantes 
#define FOR_V(A,B) for(A=0; A<B; A++)

int main(void) {
	//Variables
	int Cont_A, Cont_H, i;
	char voto;
	Cont_A= 0;
	Cont_H= 0;
	
	printf("Recordatorio: Si escribe una opci�n diferente, su voto ser� anulado");
	FOR_V(i,500){
		//Entrada. Lee el voto.
		printf("\n�Por cu�l candidata desea votar? [Anacreta (A o a) u Hortencia (H o h)]: ");
		scanf(" %c", &voto);
		//Proceso. Determina si es para Anacreta u Hortencia y lo suma al contador.
		switch(voto){
			case 'a':
			case 'A':
				Cont_A++;
				break;
			case 'h':
			case 'H':
				Cont_H++;

		}
	}
	
	//Proceso. Determina qui�n gan� o si fue un empate.
	if(Cont_H>Cont_A){
		//Salida si gana Hortencia.
		printf("\nGanadora: HORTENCIA");
	}else{
		if(Cont_A>Cont_H){
			//Salida si gana Anacreta.
			printf("\nGanadora: ANACRETA");
		}else{
			//Salida si hay empate.
			printf("\nEMPATE. ");
		}
	}
	getch();
	return 0;
}



/*Revision.

-El c�digo funciona correctamente.
-No se imprimen los caracteres especiales (acentos), pero no afecta el funcionamiento.
-Toma en cuenta el empate y los votos anulados correctamente.
-Los nombres de las variables son adecuados.
Revis�: Programadores Emperdenidos.
*/

//Ctrl C + Ctrl V (x2):
/*Picateclas: Probamos el programa y los acentos s� se imprimen. Suponemos que est�n usando un 
compilador no compatible, mal configurado o usa un encoding diferente*/
