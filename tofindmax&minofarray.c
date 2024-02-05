#include<stdio.h>

int main() {
    int a[5], i = 0,j,k,max,min;

    
    for (i; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(j = 1;j<5;j++){
        if(a[j]>max){
            max = a[j];
        }
    }
    for(k=1;k<5;k++){
        if(a[k]<min){
            min = a[k];
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}
