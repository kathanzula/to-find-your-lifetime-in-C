#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a==1 || a==0){
        printf("the number is niether prime nor composite");
    }else if(a<0){
        printf("not prime");}
    else{
        for(int i =2;i<a;i++){
            if(a%i==0){
                printf("not prime");
                break;
            }else{
                printf("prime");
            
                break;
            }
        }
    }
}
