#include <stdio.h>
#include <string.h>
#define MAX_LINE 100

int main(void)
{
	//Переменные
	char name[MAX_LINE]; 
	int i;
	i = 0;
	//Ввод имени
	printf("INPUT NAME\n");
	scanf("%s", name);

	//Формирование рамки с именем при помощи while
	while(i != strlen(name) + 4)
	{	
		printf("*");
		i++;	
	}

	printf("\n* %s *", name);
	printf("\n");
	i = 0;

	while(i != strlen(name) + 4)
	{
		printf("*");
		i++;	
	}

	printf("\n");
	return 0;
}
