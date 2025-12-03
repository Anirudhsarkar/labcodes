#include <stdio.h>
int main()
{
    int m, n;
    int p, q;

    printf("Enter the row of 2d array 1 : ");
    scanf("%d", &m);
    printf("Enter the coloum  of 2d array 1:");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the number %d  %d   :  ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the row of 2d array 2 : ");
    scanf("%d", &p);
    printf("Enter the coloum  of 2d array 2:");
    scanf("%d", &q);
    int arr2[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the number %d  %d  :  ", p, q);
            scanf("%d", &arr[p][q]);
        }
    }
    if (n == p)
    {
        printf("its posible to multiply\n");
        printf("Matrix 1\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" %d \t", arr[i][j]);
            }
            printf("\n");
        }

        printf("Matrix 2\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf(" %d \t", arr[p][q]);
            }
            printf("\n");
        }
        int C[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                C[i][j] = 0;
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        C[i][j] += arr[i][k] * arr2[k][j];
                    }
                }
            }
        }
        printf("multiplyed Matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" %d \t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error ");
    }

    return 0;
}