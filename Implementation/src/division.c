#include <division.h>

int division()
{
    int m, l, d;
    printf("enter numbers");

    printf("enter 1st number:");
    Scanf("%d",&m);

    printf("enter 2st number:");
    Scanf("%d",&l);

    d = m/l;
    printf("division of %d & %d is = %d",m,l,d);

    return 0;
}