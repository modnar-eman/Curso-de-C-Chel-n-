#include <stdio.h>
int main ()
{
	int vector[4];
	vector[0]=1;
	vector[1]=2;
	vector[2]=3;
	vector[3]=4;
	vector[4]=5;

	int* punt1;
	int* punt2;
	punt1=&vector[0];
	punt2=&vector[2];

	printf("punt1 apunta a %d\n",*punt1);

	printf("punt2 apunta a %d\n",*punt2);

	punt1++;
	printf("punt1 apunta a %d\n",*punt1);

        punt1++;
        printf("punt1 apunta a %d\n",*punt1);

	punt1++;
        printf("punt1 apunta a %d\n",*punt1);

	 punt2--;
        printf("punt2 apunta a %d\n",*punt2);

        punt2--;
        printf("punt2 apunta a %d\n",*punt2);


return 0;
}
