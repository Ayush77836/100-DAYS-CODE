#include<stdio.h>
int main(){
    int i,num1,num2,max,lcm;
    printf("enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    
    max = (num1>num2) ? num1:num2;
    
    
    while(1){
    if(max%num1==0 && max%num2==0){
     printf("lcm of %d and %d is:%d.\n",num1,num2,max);
    break;
    }
    max++;
}
    return 0;
    
    
}