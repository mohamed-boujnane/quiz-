
#include <stdio.h>
#include <string.h>

int main() {
    char ch1[1000], ch2[1000];
    printf("# entrez la  chaine 1 # : ");
    scanf("%[^\n]s", &ch1);
    printf("# entrez la chaine 2 #: ");
    scanf(" %[^\n]s", &ch2);
    if(strcmp(ch1, ch2) == 0) printf("Chaines elles sont égales ");
    else printf("Chaines différentes.");

    return 0;
}