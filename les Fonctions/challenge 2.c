
#include <stdio.h>

int produit(int A, int B)
{
    return A * B;
}

int main()
{
    int A, B;
    printf("entre la premier entier :");
    scanf("%d", &A);
    printf("entre la 2 entier :");
    scanf("%d", &B);

    printf("%d * %d = %d", A, B, produit(A, B));

    return 0;
}