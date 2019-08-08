#include <stdio.h>/*lab3-3*/
#include <stdlib.h>

int main()
{
    char name[40] = "yanika udommark";
    int distance;
    float velocity;
    int hour,min,sec;
    float x;


    printf("Input your name :");
    scanf("%[^\n]s",name);

    printf("Input distance (KM) : ");
    scanf("%d",distance);

    printf("Input avg velocity (KM/H) : ");
    scanf("%f",velocity);

    printf("My name is %s \n",name);
    printf("Distance between house and school : %.2f KMs\n",(float)distance);
    printf("I walk by velocity (KM / Hour) : %.2f \n",velocity);

    hour = distance/velocity;
    x = (float)distance/velocity;
    x = x - hour;
    x = x*60;
    min = (int)x;
    x = x-min;
    sec = x*60;

    printf("Time from home to school : %d Hours,%d mins,%d secs",hour,min,sec);

    return 0;
}
