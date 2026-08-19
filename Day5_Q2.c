#include <stdio.h>
/*Program to input time in seconds and convert it to hours:minutes:seconds format.*/
int main()
{
    int seconds,hours,minutes;
    printf("Enter time in seconds:");
    scanf("%d",&seconds);
    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    seconds=seconds%60;
    printf("Time in hours:minutes:seconds format is %d:%d:%d",hours,minutes,seconds);
    return 0;
}