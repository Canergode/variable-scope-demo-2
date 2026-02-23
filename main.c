#include <stdio.h>
#include <stdlib.h>

//Function with its own local variable x
void printLocalVariable()
{
    int x=3;
    printf("%d",x); //Prints 3 (local to this function)
}

int main()
{
    //Outer x=1;
    int x=1;
    {
        //Inner x shadows the outer x
        int x=2;
        printf("%d",x);
        //Calls the function which has its own x=3
        printLocalVariable();
    }
    //Outer x is still here

    return 0;
}
