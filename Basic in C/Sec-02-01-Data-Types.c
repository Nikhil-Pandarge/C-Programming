// Data Types in C and their Size:

/*#include<stdio.h>
void main()
{
    printf("%d",sizeof(char));
    printf("\n%d",sizeof(int));
    printf("\n%d",sizeof(float));
    printf("\n%d",sizeof(double));
}*/

// And

// For finding Range of the Each Data Types in C:

#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
    printf("Range of Signed Char %d to %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("Range of UnSigned Char 0 to %d\n\n",UCHAR_MAX);

    printf("Range of Signed Short int %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("Range of UnSigned Short Int 0 to %d\n\n",USHRT_MAX);

    printf("Range of Signed int %d to %d\n",INT_MIN,INT_MAX);
    printf("Range of UnSigned int 0 to %d\n\n",UINT_MAX);

    printf("Range of Signed long int %d to %d\n",LONG_MIN,LONG_MAX);
    printf("Range of UnSigned long int 0 to %d\n\n",ULONG_MAX);

    printf("Range of float %e to %e\n", FLT_MIN, FLT_MAX);

    printf("Range of double %e to %e\n", DBL_MIN, DBL_MAX);

    printf("Range of long double %e to %e\n", LDBL_MIN, LDBL_MAX);
}


