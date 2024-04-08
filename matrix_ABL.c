#include <stdio.h>
int main()
{
    // Declare matrix and loop control variables
    int a[5][5], b[5][5], c[5][5], i, j, k, n;
    char choice;

    // Prompt user to enter the operation to perform on the matrices
    printf("Enter operator +,-,* : ");
    scanf("%c", &choice);

    // Prompt user to enter the size of the matrices
    printf("\nEnter size of matrix between 0 to 5: ");
    scanf("%d", &n);

    // Input elements for the first matrix
    printf("\nEnter Elements in Matrix 1:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter value at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter Elements in Matrix 2:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter value at [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Perform the operation using switch case
    switch (choice)
    {
        case '+':
            // Addition of matrices
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
            // Subtraction of matrices
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
            // Multiplication of matrices
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
        
        default:
            // Handle invalid operator input
            printf("Invalid operator.");
    }
    return 0;
}
