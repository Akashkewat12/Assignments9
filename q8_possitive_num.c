#include<stdio.h>
int main()
{
int num;
printf("Enter a number:-\n");
scanf("%d",&num);
switch(num>0)
{
case 1:
    printf("possitive");
    break;
case 0:
    switch(num<0)
    {
    case 1:
        printf("Negative");
   break;
    case 0:
        printf("zero");
        break;
    }
}
return 0;
}
