#include <stdio.h>
#include <stdlib.h>

void printIntegers(int startInt, int endInt);
int main()
{
    int num;
    printf("Enter a positive Integer:");
    scanf("%d",&num);
    printf("Integers from 0 to%d\n",num);
    printIntegers(0,num);
    return 0;
}
void printIntegers(int startInt, int endInt)
{
    if(startInt<=endInt)
    {
        printf("%d",startInt);
        if(startInt !=endInt)
 printf(",");
        printIntegers(++startInt,endInt);
    }
}
