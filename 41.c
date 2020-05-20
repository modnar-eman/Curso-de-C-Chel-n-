
//void *malloc(size_t numero_de_bytes) malloc sirve para asignar memoria dinámica
//free sirve para liberar memoria dinámica
//realloc, recolocar la memoria
#include <stdio.h>
#include <stdlib.h>

int main()
{

	//guardar en memoria dinámica

void * p1=NULL;
 printf("un int ocupa %d\n",sizeof(int));
p1=malloc(sizeof(int));

int * p1_convertido = (int*)p1;

*p1_convertido=3;

printf("p1 convertido: %d\n", *p1_convertido);

return 0;
}
