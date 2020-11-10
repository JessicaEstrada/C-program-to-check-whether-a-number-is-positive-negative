#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if ( num >= 0)
        printf("%d is positive number \n", num);
    else
        printf("%d is negative number \n", num);

    getch();

}
