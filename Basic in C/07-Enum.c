// Enum

/*#include<stdio.h>
enum week{Mon,Tue,Wen=102,Thu,Fri,Sat,Sun};

int main()
{
    enum week day;
    day = Sat;
    printf("%d",day);
    return 0;
}*/

#include<stdio.h>

enum year{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

int main()
{
    int i;
    for(i=Jan;i<=Dec;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
