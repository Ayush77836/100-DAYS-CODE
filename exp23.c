#include <stdio.h>
int main() {
    int num1,num2;
     char op;

     printf("ente first number:");
     scanf("%d",&num1);
     printf("enter second number:");
     scanf("%d",&num2);
     printf("enter operator (+, -, *, /, %):");

     scanf(" %c",&op);
     switch(op) {
        case '+':
        printf("result: %d\n",num1 + num2);
        break;
        case '-':
        printf("result: %d\n",num1 - num2);
        break;
        case '*':
        printf("result: %d\n",num1*num2);
        break;
        case '/':
        if(num2!=0)
        printf("result: %.2f\n",(float)num1/num2);
        else printf("error: division by zero\n");
        break;
        case '%':
        if (num2!=0)
        printf("result: %d\n",num1%num2);
        else printf("error: division by zero\n");
        break;
        default:
        printf("error: invalid operator\n");
        break;
        

     }
    
}