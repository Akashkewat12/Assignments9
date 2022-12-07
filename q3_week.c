
#include<stdio.h>
int main()
{
    int week;
    printf("Enter week number(1-7) \n");
    scanf("%d",&week);
    switch(week)
    {
        case 1:
        printf("monday\n");
        printf("You have a good day");
        break;
         case 2:
        printf("tuesday\n");
        break;
         case 3:
        printf("wednesday\n");
        break;
        case 4:
        printf("thusday\n");
        break;
         case 5:
        printf("friday\n");
        break;
         case 6:
        printf("saturday\n");
        break;
         case 7:
        printf("sunday\n");
        break;
        default:
        printf("Invailid number\n");
        break;
    }
     return 0;
}

