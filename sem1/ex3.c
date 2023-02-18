#include <stdio.h>

int main(void)
{
	int i, j, sigma;
	i = j = 1;
	while(i != 11)
	{
		while(j != 11)
		{
			sigma = i * j;
			printf("%1d \t", sigma);
			j++;
		}
		printf("\n\n");
		i++;
		j = 1;
	}
}
