#include <stdio.h>
int main(){
    int num , originalnum,remainder,result;
    
    printf("enter a number");
    scanf("%d", &num);
    originalnum=num;
    result=0;
    
    while (originalnum !=0){
        remainder=originalnum%10;
        result+= remainder*remainder*remainder;
        originalnum/=10;

    }
    if(result==num)
    
    printf("%d is an amstrong number.\n",originalnum);
    else {
        printf("%d is not amstrong number.\n",originalnum);


    }
return 0;

    
}