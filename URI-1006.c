#include<stdio.h>
int main()
{
    double one,two,three,four,five;
    one =4.00;
    two =4.50;
    three =5.00;
    four =2.00;
    five =1.50;

    int X,Y;
    double Result;
    scanf("%d %d",&X,&Y);
    switch(X){
    case 1:
        Result = one*Y;
        printf("Total: R$ %.2f\n",Result);
        break;
    case 2:
        Result = two*Y;
        printf("Total: R$ %.2f\n",Result);
        break;
    case 3:
        Result = three*Y;
        printf("Total: R$ %.2f\n",Result);
        break;
    case 4:
        Result = four*Y;
        printf("Total: R$ %.2f\n",Result);
        break;
    case 5:
        Result = five*Y;
        printf("Total: R$ %.2f\n",Result);
        break;
    }

    return 0;
}
