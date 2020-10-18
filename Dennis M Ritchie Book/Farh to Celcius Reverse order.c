#include<stdio.h>
#include<math.h>
void main()
{
    //comments
    float Fahr,celcius;

    printf("Fahr \tcelcius\n");

    for(Fahr=300;Fahr>=0;Fahr -= 20)
    {
        celcius = 5*(Fahr - 32) / 9;
        printf("%3.0f %10.1f \n",Fahr,celcius);
    }
}

