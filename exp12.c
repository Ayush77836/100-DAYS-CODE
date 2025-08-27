 #include <stdio.h>
 int main(){
    
   int year;
   printf("enter the year:");
   scanf("%d",&year);

    if (year %400==0 || (year %4==0 && year %100!=0)) {
        printf("the year is a leap year:%d",year);
}  else {
        printf("the year is not a leap year:%d",year);
        
}
    

    

    return 0;
}