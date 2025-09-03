#include <stdio.h>
int main(){
    int i,n,sum =0;
    printf("enter a number: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        sum+=(2*i-1);

    }
    printf("sum of first %d odd number is %d.\n", n, sum);
    return 0;
    
}