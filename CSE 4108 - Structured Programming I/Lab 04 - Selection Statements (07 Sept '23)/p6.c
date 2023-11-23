/*
Condition Calamity:
Write a program that finds the largest and smallest of fourintegers entered by the user:
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
# Use as few if statements as possible.
*/

#include <stdio.h>

int main(void)
{
   int a,b,c,d;
   printf("Enter four integers: \n");
   scanf("%d %d %d %d",&a,&b,&c,&d);

   int max,min,max1,max2,min1,min2;

   if(a>b){
    max1=a;
    min1=b;
   }else{
    max1=b;
    min1=a;
   }

   if(c>d){
    max2=c;
    min2=d;
   }else{
    max2=d;
    min2=c;
   }

   if(max1>max2){
    max=max1;
   }else{
    max=max2;
   }

   if(min1<min2){
    min=min1;
   }else{
    min=min2;
   }

    printf("The maximum number is: %d", max);
    printf("\nThe minimum number is: %d", min);

    return 0;
}
