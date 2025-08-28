 #include <stdio.h>
 int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')) {
     
      printf("lowercase");
    }
    else if ((ch>='a' && ch<='z')){
    printf("uppercase");
    }
    else if (ch>='0' && ch<='9'){
    printf("it is a digit");
 } else
 {
    printf("it is a special character");
 }
 

    return 0;
 }