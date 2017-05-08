#include <stdio.h>

int Adder(int A, int B)
{
    //Adds two integers, A and B
    return A + B;
}


int main()
{
    int A = 0;
    int B = 0;

    scanf("%d", &A);
    scanf("%d", &B);

    int Result = Adder(A, B);

    printf("Result = %d\n", Result);
    return 0;
}
