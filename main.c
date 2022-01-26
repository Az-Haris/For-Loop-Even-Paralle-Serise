#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    for(a=2; a<=100; a=a+2)
    {
        sum=sum+a;
    }

    printf("2+4+6+......+100 = %d",sum);


    getch();
    return 0;
}
