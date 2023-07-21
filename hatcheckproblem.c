#include <stdio.h>
//arrangements means->!
int arrangements(int n)
{
    if (n == 1 || n == 2) {
        return n - 1;
    }

    return (n - 1) * (arrangements(n - 1) + arrangements(n - 2));
}
 
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("The total number of arrangements of a %d element set is %d",
        n, arrangements(n));
 
    return 0;
}
