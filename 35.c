#include <stdio.h>
int main (void)
{
	int a;
	a=10;
	int *p1, *p2;
	p1=&a;
	p2=p1;
	printf("El valor de a %d\n",a);
	printf("La dirección de a %d\n",&a);
	printf("El puntero p1 %p\n",p1);
	printf("El valor de p1 %d\n",p1);
        printf("La dirección de p1 %d\n",&p1);
	printf("Lo que apunta p1 %d\n\n",*p1);
	printf("El puntero p2 %p\n",p2);
	printf("El valor de p2 %d\n",p2);
        printf("La dirección de p2 %d\n",&p2);
        printf("Lo que apunta p2 %d\n",*p2);


return 0;
} 
