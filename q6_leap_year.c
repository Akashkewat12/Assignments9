#include<stdio.h>
int main()
{
   int year=2013;
switch(year%100==0)
{
   case 0:
       switch(year%4==0)
       {
           case 0:
           printf("Not leap yaer\n");
           break;
           case 1:
            {
                printf("leap year\n");
            }
       }
       break;
   case 1:
       switch(year%100==0)
       {
       case 0:
        printf("not leap year\n");
        break;
       case 1:
        printf("leap year\n");
        break;
       }

}
return 0;
}
