#include<stdio.h>
int main()
{
    int choice,x,y,z;
    while(1)
    {
    printf("1. Addition\n");
    printf("2. subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division \n");
    printf("5. Exit\n");
    printf("Enter your coice\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter 2 Number\n");
        scanf("%d %d",&x,&y);
        z=x+y;
        printf("Addition of %d+%d=%d\n\n",x,y,z);
        break;
    case 2:
        printf("Enter 2 Number\n");
        scanf("%d %d",&x,&y);
        z=x-y;
        printf("subtraction of %d-%d=%d\n\n",x,y,z);
        break;
    case 3:
        printf("Enter 2 Number\n");
        scanf("%d %d",&x,&y);
        z=x*y;
        printf("Multiplication of %d*%d=%d\n\n",x,y,z);
        break;
    case 4:
        printf("Enter 2 Number\n");
        scanf("%d %d",&x,&y);
        z=x/y;
        printf("Division of %d/%d=%d \n",x,y,z);
        break;
    case 5:
        return 0;
        break;
        default:
        printf("invailid num \n");
    }
    }


    return 0;
}
