#include <stdio.h>
int main(void)
{
int x=5;
int *puntero_entero;
puntero_entero=&x;
*puntero_entero+=2;
printf("x: %d\n",x);
printf("puntero: %d\n", *puntero_entero);
//muchas veces no sabemos a lo que estamos apuntando, así que le hacemos cast a los punteros
void *puntero_generico;
*(int*)puntero_generico=&x;
printf("%d",x);

//pero no podemos hacer esto
//printf("%d", *puntero_generico);


return 0;
}
