#include <stdio.h>
int main() {
  int a,b,c;
  printf("enter three sides of a triangle");
  scanf("%d %d %d",&a,&b,&c);
  if((a+b>c) && (b+c>a) && (c+a>b))
  if(a==b || b==c){
    printf("the triangle is Equilateral.\n");
  }
else if (a==b || b==c || a==c) {
    printf("the triangle is Isosceles.\n");

}
else {
    printf("the triangle is Scalene");

}

    
return 0;

  

}