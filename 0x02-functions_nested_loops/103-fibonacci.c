#include <stdio.h>
/**
 *main - main function
 *Return: nothing
 */
int main(void)
{
	int count = 2;
	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (count < 98)
	{
		count++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (count < 98)
		{
			print (", ");
		}
	}
	printf("\n");
	return (0);
}
