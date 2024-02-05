#include<stdio.h>

int main() {
    int a[5], i = 0, j = 0;

    
    for (i; i < 5; i++) {
        scanf("%d", &a[i]);
    }

   
    for (j; j < 5; j++) {
        printf("%d ", a[4 - j]);
    }

    return 0;
}
