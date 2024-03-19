#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 4
//завдання: при обході матриці по рядочкам, знайти останній максимальний елемент (в межах всієї матриці), вивести його значення та координати.

//час на виконання: 20хв. завантажити додатковий файл task.c
int main()
{
    int a[m][n];
    printf("IN matrix a\n");//in
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            //a[i][j]= rand()%20-5;
            scanf("%d", &a[i][j]);

    int  ind_i,ind_j,max = a[0][0];
    for(int i=0; i<m; i++)//condition
        for(int j=0; j<n; j++)
            if(max<=a[i][j])
            {
                max = a[i][j];
                ind_i = i;
                ind_j = j;
            }

    printf("OUT matrix a\n");//out
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("MAX matrix a\n");
    printf("max [%d][%d] = %d\n",ind_i,ind_j, max);
    return 0;
}
