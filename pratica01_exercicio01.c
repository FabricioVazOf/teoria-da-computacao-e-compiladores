#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    printf("\nInforme a primeira nota:");
    scanf("%d", &x);
    printf("\nInforme a segunda nota:");
    scanf("%d", &y);
    printf("\nInforme a terceira nota:");
    scanf("%d", &z);
    float media = (float)(x+y+z)/3 ;
    printf("A media das notas e: %.2f", media);
    return 0;
}

