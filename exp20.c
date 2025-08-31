#include <stdio.h>
int main() {
    float profit, loss ,cp ,sp;
    printf("enter cp:");
    scanf("%f",&cp);
    printf("enter sp:");
    scanf("%f",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("profit is %f\n",profit);
    }
    else if(cp>sp){
        loss=cp-sp;
        printf("loss is %f\n",loss);
    }
    else{
        printf("no profit no loss.\n");
    }
    return 0;
}