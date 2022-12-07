#include<stdio.h>
int main()
{
    int num;
printf("Enter a number:-\n");
scanf("%d",&num);
    switch(num%2==0)
    {
    case 1:
        printf("%d",num+1);
        break;
    case 0:
        printf("%d",num);
    }
    return 0;
}
