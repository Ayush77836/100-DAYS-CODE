 #include <stdio.h>
 int main(){
    
   float celcius,fahrenheit;

   printf("enter temperature in celcius:");

   scanf("%f",&celcius);

   fahrenheit=(celcius*9/5)+32;

   printf("temperature in faherenheit is %f",fahrenheit);
    

    return 0;
}