#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5][2] = {{1, 4}, {3,5}, {0,6}, {7, 8}};
    int i, j;
    printf("The Two-dimensional Array is:\n");
    for(i=0;  i<4; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}