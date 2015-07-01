#include <stdio.h>
// Marco Castillo González
// 19.363.131-2
int main ()
{
	int pasos=0,i=0,val=1,final=0,largo=0;
	char palabra[15],letra='a';
	printf("Ingrese una palabra\n");
	scanf ("%s",&palabra);
	for (i = 0; i < 15; ++i)
	{
		if (palabra[i] == '\0')
		{
			break;
		}
		largo = largo+1;
	}
	i = 0;
	while (val==1)
	{
		if (final==largo) 
			break;
		if (palabra[i]>letra) 
		{
			pasos++;
			letra++; 
		}
		
		if (palabra[i]<letra)
		{ 
			pasos++; 
			letra--;
		}
		if (letra==palabra[i])
		{
			i++;
			final++;
		}		
	}
	printf("Cantidad de Pasos\n");
	printf ("%d\n",pasos);
	printf("Cantidad de Letras\n");
	printf("%d\n",largo);
}