#include <stdio.h>

int Adder(int A, int B)
{
    //Adds two integers, A and B
    return A + B;
}


int main()
{
    int Result = Adder(5, 6);

    printf("Result = %d\n", Result);
    return 0;
}
