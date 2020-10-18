#include<stdio.h>
#include<math.h>
void main()
{
    //comments
    float Fahr,celcius;

    printf("Fahr \t celcius\n");

    for(Fahr=0;Fahr<=300;Fahr += 20)
    {
        celcius = 5*(Fahr - 32) / 9;
        printf("%3.0f %6.1f \n",Fahr,celcius);
    }
}
