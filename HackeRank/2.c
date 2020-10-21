#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);

    printf("%d \t %d\n %0.1f \t %0.1f",a+b,b-a,c+d,d-c);
    return 0;
}
