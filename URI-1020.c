#include<stdio.h>
int main()
{
    int Something,Year,Year_Ses,Month,Day;
    scanf("%d",&Something);
    Year = Something/365;
    Year_Ses = Something%365;
    Month = Year_Ses/30;
    Day=Year_Ses%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Year,Month,Day);

    return 0;
}
