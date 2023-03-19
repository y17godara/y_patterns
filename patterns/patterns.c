#include <stdio.h>

// Solutions Function
void welcome()
{
    printf("Program Starts Here!\n");
}


void q_1(int myNum)
{

    /*
    1.  *****
        *****
        *****
        *****
        *****
    */
    printf("Entered -Solution 1\n");

    for (int row = 0; row < myNum; row++)
    {
        for (int col = 0; col < myNum; col++)
        {
            /* code */
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}


void q_2(int myNum)
{

    /*
    2.  *
        **
        ***
        ****
        *****
    */
    printf("Entered -Solution 2\n");

    for (int row = 0; row <= myNum; row++)
    {
        for (int col = 0; col < row; col++)
        {
            /* code */
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}


void q_3(int myNum)
{

    /*
    3.  *****
        ****
        ***
        **
        *
    */
    printf("Entered -Solution 3\n");

    for (int row = myNum + 1; row > 0; row--)
    {
        for (int col = 1; col < row; col++)
        {
            /* code */
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}


void q_4(int myNum)
{

    /*
    4.  1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
    printf("Entered -Solution 4\n");

    for (int row = 0; row <= myNum; row++)
    {
        /* code */
        for (int col = 1; col <= row; col++)
        {
            /* code */
            printf("%d", col);
            printf(" ");
        }
        printf("\n");
    }
}


void q_5(int myNum)
{

    /*
    5.  *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
    */
    printf("Entered -Solution 5\n");

    for (int row = 0; row < 2 * myNum; row++)
    {
        int totalColsInRow = row > myNum ? 2 * myNum - row : row;
        for (int col = 0; col < totalColsInRow; col++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}


void q_6(int myNum)
{

    /*
6.       *
        **
       ***
      ****
     *****
    */
    printf("Entered -Solution 6\n");

    for (int row = myNum; row > 0; row--)
    {
        for (int space = 0; space <= row; space++)
        {
            printf(" ");
        }
        for (int col = myNum; col >= row; col--)
        {
            printf("*");
        }
        printf("\n");
    }
}


void q_7(int myNum)
{

    /*
7.   *****
      ****
       ***
        **
         *
    */
    printf("Entered -Solution 7\n");

    for (int row = 0; row <= myNum; row++)
    {
        for (int space = 0; space <= row; space++)
        {
            printf(" ");
        }
        for (int col = myNum; col >= row; col--)
        {
            printf("*");
        }
        printf("\n");
    }
}


void q_8(int myNum)
{

    /*
8.      *
       ***
      *****
     *******
    *********
    */
    printf("Entered -Solution 8\n");

    int temp = 0;
    for (int row = 1; row <= myNum; row++, temp = 0)
    {
        for (int spaces = 1; spaces <= myNum - row; spaces++)
        {
            printf("  ");
        }
        for (/*int temp = 0*/; temp != 2 * row - 1; temp++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void q_9(int myNum)
{

    /*
9.  *********
     *******
      *****
       ***
        *
    */
    printf("Entered -Solution 9\n");

    int temp = 0;
    for (int row = myNum; row >= 1; row--, temp = 0)
    {
        for (int spaces = 1; spaces <= myNum - row; spaces++)
        {
            printf("  ");
        }
        for (/*int temp = 0*/; temp != 2 * row - 1; temp++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void q_10(int myNum)
{

    /*
10.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
    */
    printf("Entered -Solution 10\n");

    int temp = 0;
    for (int row = myNum; row >= 1; row--, temp = 0)
    {
        for (int spaces = 1; spaces <= myNum - row; spaces++)
        {
            printf("  ");
        }
        for (/*int temp = 0*/; temp != 2 * row - 1; temp++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //mirror
    int tem = 0;
    for (int row = 1; row <= myNum; row++, tem = 0)
    {
        for (int spaces = 1; spaces <= myNum - row; spaces++)
        {
            printf("  ");
        }
        for (/*int temp = 0*/; tem != 2 * row - 1; tem++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void q_11(int myNum)
{

    /*
13.      *
        * *
       *   *
      *     *
     *********
    */
    printf("Entered -Solution 11\n");

    int temp = 0;
    for (int row = myNum; row >= 1; row--, temp = 0)
    {
        for (int spaces = 1; spaces <= myNum - row; spaces++)
        {
            printf("  ");
        }
        for (/*int temp = 0*/; temp != 2 * row - 1; temp++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Main Function
int main(void)
{
    printf("Hello, Welcome\n");
    // Functions Calling -Welcome Message
    // welcome();

    int myNum;
    // printf("Type a number: \n");
    // scanf("%d", &myNum);
    myNum = 5;

    // Functions Calling -Solutions
    q_10(myNum);

    return 0;
}


void q_temp(int myNum)
{

/*
temp.     *
         * *
        *   *
       *     *
      *********
*/
    printf("Entered -Solution temp\n");

    int temp = 0;
    for (int row = myNum; row >= 1; row--, temp = 0)
    {
        for (int spaces = 1; spaces <= myNum - row; spaces++)
        {
            printf("  ");
        }
        for (/*int temp = 0*/; temp != 2 * row - 1; temp++)
        {
            printf("* ");
        }
        printf("\n");
    }
}