#include<stdio.h>
int main(void){
int x,y;
printf("what year you were born in =");
scanf("%d",&x);
printf("what is current year = ");
scanf("%d",&y);
int age = y-x;
printf("your current age is = %d",age);
return 0;
}
