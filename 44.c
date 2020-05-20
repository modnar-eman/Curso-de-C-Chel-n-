#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct contacto
{
	int edad;
	long tel;
	char nombre[20];
}contacto_t;

int main()
{

	contacto_t* contacto1 = malloc(sizeof(contacto_t));
		if(contacto1==NULL)
			printf("no hay espacio en memoria dinamica");
		else
		{
		contacto1->edad=3;
		printf("Edad del contacto1 dinámico: %d\n",contacto1->edad);
		}

	contacto_t* contacto3=malloc(sizeof(contacto_t));

		  if(!contacto3)//esto es igual a ==NULL
                        printf("no hay espacio en memoria dinamica");
                else
                {
		contacto3->tel=4453662;
		strcpy(contacto3->nombre,"Chango Drilo");
		printf("Nombre: %s\n",contacto3->nombre);
		}

/*forma estática
	contacto_t contacto1;
	contacto1.edad=3;
	printf("edad del contacto1:  %i\n", contacto1.edad);
*/
	free (contacto1);
	free (contacto3);
return 0;
}
