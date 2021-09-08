#include<stdio.h>

int main()
{
    int a[10][10] = { NULL };
    int i=0, j=0, n=0;
    printf("输入杨辉三角的行数：");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {

        for (j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            printf("%-3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}