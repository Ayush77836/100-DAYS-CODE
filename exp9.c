 #include <stdio.h>
 int main(){

   int second,hours,minutes;

   printf("enter time in second:");

   scanf("%d",&second);

   hours=second/3600;

   minutes=(second%3600)/60;

   second=second%60;

   printf("time is %d:%d:%d:",hours,minutes,second);


    return 0;
}