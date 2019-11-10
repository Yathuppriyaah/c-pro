#include <stdio.h>
#include <stdlib.h>
int main()

{
    //---------Declare_variables-------//
    int num_1;
    int num_2;
    int option;
    int result;

    //---------Define_function--------//
    void add()
    {
        result=num_1+num_2;
        printf("Result: %d\n\n",result);
    }
    void sub()
    {
        result=num_1-num_2;
        printf("Result: %d\n\n",result);
    }
    void mul()
    {
        result=num_1*num_2;
        printf("Result: %d\n\n",result);
    }
    void div()
    {
        result=num_1/num_2;
        printf("Result: %d\n\n",result);
    }
    void mod()
    {
        result=num_1%num_2;
        printf("Result: %d\n\n",result);
    }

    //----------User_Input_Collection----------//
    printf("MENU\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n\n");


    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&option);
        printf("Enter your two numbers:\n");
        scanf("%d%d",&num_1,&num_2);


    //----------------Function_call--------------//
        switch(option)
        {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                mod();
                break;
            default:
                printf("Invalid Option\n\n");
        }
    }


    return 0;

}
