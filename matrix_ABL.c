#include <stdio.h>
int main()
{
	int a[5][5], b[5][5], c[5][5], i, j, k, n;
	char choice;

	printf("Enter operator +,-,* : ");
	scanf("%c", &choice);

	printf("Enter size of matrix between 0 to 5: ");
	scanf("%d", &n);
	printf("\nEnter Elements in Matrix 1:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Enter value at [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter Elements in Matrix 2:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Enter value at [%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	switch (choice)
	{
		case '+':
			printf("\nAddition of Matrices:\n");
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					c[i][j] = a[i][j] + b[i][j];
					printf(" %d ", c[i][j]);
				}
				printf("\n");
			}
			break;

		case '-':
			printf("\nSubtraction of Matrices:\n");
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					c[i][j] = a[i][j] - b[i][j];
					printf(" %d ", c[i][j]);
				}
				printf("\n");
			}
			break;

		case '*':
			printf("\nMultiplication of Matrices:\n");
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					c[i][j] = 0;
					for (k = 0; k < n; k++)
					{
						c[i][j] += a[i][k] * b[k][j];
					}
					printf(" %d ", c[i][j]);
				}
				printf("\n");
			}
			break;
		}
	return 0;
}
