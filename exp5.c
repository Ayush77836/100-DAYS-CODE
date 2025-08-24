 #include <stdio.h>

 int main(){


    int x,y,temp;

    printf("enter first number:");

    scanf("%d",&x);

    printf("enter second number:");

    scanf("%d",&y);
    

    temp=x;

    x=y;

    y=temp;

    printf("after swapping:");

    printf("first number is %d",x);

    printf("second number is %d",y);


        


   

    return 0;
}