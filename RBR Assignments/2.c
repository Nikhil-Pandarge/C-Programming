/*2. A square is made by bending a single piece of wire.
    If we make a circle out of this wire, what will be radius and area of the circle?

    Assume the value of "pi" to be 3.14.

    input:
            length of one side of the square
    output:
            Radius of the circle is:
            Area of the circle is:
*/

#include<stdio.h>
#define pi 3.14
void main()
{
    float length,radius;
    printf("Enter the length of square:\n");
    scanf("%f",&length);

    radius = (4 * length) / (2 * pi);

    printf("Radius is: %0.2f\n",radius);

    printf("Area of Circle: %0.2f",pi*radius*radius);
}
