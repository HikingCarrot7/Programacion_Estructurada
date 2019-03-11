#include <stdio.h>

int main() {
	
	int num[30], i, j, k, positivos, negativos;
	
	positivos = 0;
	negativos = 0;
	
	for (i=0; i<5; i++)
	{
		printf("Ingrese el número en la posición %i:\n" , i+1);
		scanf("%i",&num[i]);
		
		if(num[i] >= 0)
		{
			positivos++;
			
		}
		else
		{
			
			negativos++;
			
		}
	}
	
	int pos[positivos];
	int neg[negativos];
	
	j = 0;
	
	for (i=0; i<5; i++)
	{
		if(num[i] >= 0)
		{
			pos[j] = num[i];
			
			j++;
			
		}
	}
	
	j = 0;
	
	for (i=0; i<5; i++)
	{
		if(num[i] < 0)
		{
			neg[j] = num[i];
			
			j++;
		}
	}
	
	printf("Los elementos positivos introducidos fueron\n");
	for(j=0; j<positivos; j++)
	{
		printf("Elemento %i: %i\n", j + 1, pos[j]);
	}
	printf("Los elementos negativos introducidos fueron\n");
	for(k=0; k<negativos; k++)
	{
		printf("Elemento %i: %i\n", k + 1, neg[k]);
	}
	
	
	return 0;
}
