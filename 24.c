#include <stdio.h>

int main(void)
{
	printf("\n Bienvenido a la fabrica de vectores!\n");
	size_t largo;
	printf("Ingrese el largo de su vector:");
	fflush(stdin);
	scanf("%ld",&largo);
	printf("El largo ingresado es:  %ld\n",largo);
	int vector1[largo];
	int i;
		for (i=0;i<largo;i++)
			{
			printf("ingrese el valor para la posición [%d]:  ",i);
			fflush(stdin);
			scanf("%d",&vector1[i]);
			}
	for (i=0;i<largo;i++)
                        printf("Vector [%d] %d\n",i,vector1[i]);

return 0;
}
