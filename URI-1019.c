#include<stdio.h>
int main()
{
    int x,H,M,S,n,Min,se;
    scanf("%d",&x);
    M=x/3600;
    S = x%3600;
    Min = S/60;
    se = S%60;
    printf("%d:%d:%d\n",M,Min,se);

    return 0;
}
