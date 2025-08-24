 #include <stdio.h>
 int main(){
    
   int x,y;
   printf("enter first number:");
   scanf("%d",&x);
   printf("second number:");
   scanf("%d",&y);
   x=x+y;
   x=x-y;
   y=x-y;
   printf("after swapping:");

    printf("first number is %d",x);

    printf("second number is %d",y);


    return 0;
}