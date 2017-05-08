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

    printf("Input Value A:");
    scanf("%d", &A);

    printf("Input Value B:");
    scanf("%d", &B);

    int Result = Adder(A, B);

    printf("%d + %d = %d\n", A, B, Result);
    return 0;
}
