#include <stdio.h>
#include <string.h>
int main(void)
{
	char nombre1[]="Mi nombre es chelín";
	char nombre2[]="Mi nombre es tutorials";
	printf("%s\n",nombre1);
	printf("%s\n",nombre2);
//	strcpy(nombre2,nombre1);
	printf("%s\n",nombre2);


	int largo;
	largo=strlen(nombre1);
	printf("Longitud de nombre1: %d\n",largo);

	int i;
	i=strcmp(nombre1,nombre2);
	printf("comparación :%d\n",i);

	char mayus;
	mayus=toupper(nombre1[7]);
	printf("Caracter 7 en mayuscula: %c\n",mayus);


return 0;
}
