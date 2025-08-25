 #include <stdio.h>
 int main(){
    float p,r,t;
    float si,ci;

    printf("enter principal:");

    scanf("%f",&p);

    printf("enter rate:");

    scanf("%f",&r);

    printf("enter time:");

    scanf("%f",&t);

    si=p*r*t/100;

    ci=p*(1+r/100)*(1+r/100)-p;


    printf("simple interest=%f\n",si);

    printf("compound interest=%f\n",ci);


   

    return 0;

}