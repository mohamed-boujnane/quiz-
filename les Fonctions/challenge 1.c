/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int somme(int x, int y) {
    return x+y;
}

int main() {
    int a, b;
    printf("Saisir premier entiers : ");
    scanf("%d", &a);
       printf("Saisir 2 entiers : ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, somme(a, b));
    return 0;
}