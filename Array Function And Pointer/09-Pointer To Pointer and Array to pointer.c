#include<stdio.h>

int main(void)
{

    int a[]={10,20,30,40,50,60};

    int *p[]={a,a+1,a+2,a+3,a+4,a+5}; // array of pointers

    int **pp = p; //pointer to pointer p

    int r=10;

    int *q = &r;

    int **rq = &q;

    printf("facts=========================\n");

    printf("Value of r and address of r is : %d %u\n",r,&r);

    printf("Value of q and address of q is : %d %u\n",q,&q);

    printf("Value of rq and adess of rq is : %d %u\n",rq,&rq);

    printf("--------------------------------\n");

    printf("value of r => r=%d, *q=%d **rq=%u\n",r,*q,**rq);

    printf("addr of r => &r=%u, q=%u *rq=%u\n",&r,q,*rq);

    printf("Value of q => q=%u, *rq=%u\n",q,*rq);

    printf("addre of q => &q=%u, rq=%u\n", &q,rq);

    printf("Value of rq=> rq=%u\n",rq);

    printf("Addre of rq=> &rq=%u\n",&rq);

    //printf("value of *q,*rq,**rq using u are : %u %u %u\n",*q,*rq,**rq);

    printf("=============================================\n");

    printf("Value of a[0] => a[0]=%d\n",a[0]);

    printf("Addre of a => a=%u\n",a);

    printf("Value of p[0] => p[0]=%u\n",p[0]);

    printf("Addre of p => p=%u\n",p);

    printf("Value of pp => pp=%u\n",pp);

    printf("Addre of pp => &pp=%u\n",&pp);

    printf("--------------------------------\n");

    printf("Value of p[0] => p[0]=%u,*pp=%u \n",p[0], *pp);

    printf("Value of a[0] => a[0]=%d,**p=%u, ***pp=%u \n",a[0],**p, **pp);

    printf("===============================================\n");

    printf("address pointed by pp/ address of p %u \n",pp);

    printf("address pointed by p/ address of a %u \n",*p);

    pp++;

    printf("%d %d %d \n", pp-p, *pp-a, **pp);

    *pp++;

    printf("%d %d %d \n", pp-p,*pp-a,**pp);

    ++*pp;

    printf("%d %d %d \n",pp-p, *pp-a,**pp);

    ++**pp;

    printf("%d %d %d \n",pp-p, *pp-a,**pp);


}
