#include <stdio.h>
void max_of_four (int,int,int,int);
int main()
{
    int p,q,r,s;
    scanf("%d %d %d %d", &p, &q, &r, &s);
   max_of_four(p,q,r,s);
    return(0);
}
void max_of_four(int p,int q,int r,int s)
{

{
  if((p>q)&&(p>r)&&(p>s))
  {
    printf("%d",p);
  }
  else
    {
        if ((q>r) && (q>s))
        {
            printf("%d",q);
        }
        else
        {
            if (r>s)
            {
                printf("%d",r);
            }
            else
            {
                printf("%d",s);

            }
        }
    }
}
}

