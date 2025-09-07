#include<stdio.h>
int main(){
    int i,num1,num2,hcf;
    printf("enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    for(int i=1; i<=num1 && i<=num2;i++){
    if(num1%i==0 && num2%i==0){

    
 hcf=i;
    }
}
    printf("hcf (GCD) of %d and %d is:%d.\n",num1,num2,hcf);
    return 0;
    
    
}