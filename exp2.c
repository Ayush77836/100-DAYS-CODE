#include <stdio.h>
int main(){
   int length,width,area,perimeter;

   printf("enter length:");

    scanf("%d",&length);
    
    printf("entere width:");

    scanf("%d",&width);

    area=length*width;

    perimeter=2*(length+width);

    printf("area is %d \n",area);

    printf("perimeter is %d",perimeter);



    return 0;
}