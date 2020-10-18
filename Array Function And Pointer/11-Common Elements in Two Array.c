# include<stdio.h>

//int isCommon(int a[],int b[],int m, int n);

int isCommon(int a[],int b[],int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j]){
                printf("\n At Least One Same Elements!\n");
            }

        }
    }
    return 0;

}

void main()
{
    int x[10],y[10],o,p;

    printf("Enter the size of the an array 'x' i.e. o:\n");
    scanf("%d",&o);

    printf("Enter the size of the an array 'y' i.e. p:\n");
    scanf("%d",&p);

    printf("Elements in an Array x:\n");

    for(int i=0;i<o;i++)
    {
        scanf("%d",&x[i]);
    }

    for(int i=0;i<o;i++)
    {
        printf("values are in an Array x: %d\n",x[i]);
    }

    printf("Elements in an Array y:\n");
    for(int i=0;i<p;i++)
    {
        scanf("%d",&y[i]);
    }


    for(int i=0;i<p;i++)
    {
        printf("values are in an Array y: %d\n",y[i]);
    }

    isCommon(x,y,o,p);
}

