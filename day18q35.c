#include<stdio.h>
int main(){
    int i,num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("factor of given number is %d.\n",num);
    for (i=1;i<=num;i++) {
        if(num %i == 0){
            printf("%d.\n", i);

        }

    }
    return 0;
}