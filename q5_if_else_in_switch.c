#include<stdio.h>
int main()
{
    int var;
    printf("Enter a number(1-3)\n\n");
    scanf("%d",&var);
    switch(var)
    {
    case 1:
    printf("Good");
    break;
    case 2:
    printf("Better");
    break;
    case 3:
    printf("Best");
    break;
    default:
        printf("invalid");
    }

    return 0;
}
