#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 
#include <malloc.h>
#define for_i for(int i = 0; i < n; i++) 

void Bubble(int* a, int* b)
{
	int o = *a;
	*a = *b;
	*b = o;

}

void av(int n, int* e)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < (n - i); j++)
		{

			if (e[j] < e[j - 1])
			{
				Bubble(&e[j], &e[j - 1]);
			}
			c=c+1;
		}

	}
	printf("Number of comparisons:");
	printf("%d\n", c);
}




int main()
{
	int n;
	printf("Array's size:");
	scanf("%d", &n);
	int* e = (int*)calloc(n, sizeof(int));
	printf("Array:");
	for_i
	{
	e[i] = rand()%100;
	printf("%d ", e[i]);
	
	}
	printf("\n");
	av(n, e);
	printf("Bubbled array:");
	for_i
	{
	printf("%d ", e[i]);
	}
	free(e);
}
