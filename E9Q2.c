#include <stdio.h>
#include <stdlib.h>

int sum(int x,int y)
{
    if (x!=0)
    {
        y=y+x;
        sum(--x,y);
    }
    else
    {
        return y;
    }
}
int main()
{
    int x;
    int total;
    printf("Enter a positive Integer:");
    scanf("%d,",&x);
    total=sum(x,0);
    printf("The sum of integer from 0 to %d: %d",x,total);
    return 0;
}
