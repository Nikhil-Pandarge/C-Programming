#include<stdio.h>
#include<math.h>
void main()
{
    //comments
    float Fahr,celcius;

    printf("Celcius\t Fahr\n");

    for(celcius =0;celcius <= 300;celcius += 20)
    {
        Fahr = ((9.0 * celcius)/5.0)+32;
        printf("%3.0f %10.1f \n",celcius,Fahr);
    }
}

